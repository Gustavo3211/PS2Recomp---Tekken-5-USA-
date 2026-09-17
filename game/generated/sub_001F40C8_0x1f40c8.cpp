#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F40C8
// Address: 0x1f40c8 - 0x1f4268
void sub_001F40C8_0x1f40c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F40C8_0x1f40c8");
#endif

    switch (ctx->pc) {
        case 0x1f4228u: goto label_1f4228;
        default: break;
    }

    ctx->pc = 0x1f40c8u;

    // 0x1f40c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f40cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f40ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f40d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f40d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f40d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f40d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f40d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f40dc: 0x84a2014e  lh          $v0, 0x14E($a1)
    ctx->pc = 0x1f40dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 334)));
    // 0x1f40e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F40E0u;
    {
        const bool branch_taken_0x1f40e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40E0u;
        // 0x1f40e4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f40e0) {
            ctx->pc = 0x1F4100u;
            goto label_1f4100;
        }
    }
    ctx->pc = 0x1F40E8u;
    // 0x1f40e8: 0x90a30199  lbu         $v1, 0x199($a1)
    ctx->pc = 0x1f40e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 409)));
    // 0x1f40ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f40f0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F40F0u;
    {
        const bool branch_taken_0x1f40f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f40f0) {
            ctx->pc = 0x1F40F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F40F0u;
            // 0x1f40f4: 0x96020152  lhu         $v0, 0x152($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 338)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4104u;
            goto label_1f4104;
        }
    }
    ctx->pc = 0x1F40F8u;
    // 0x1f40f8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1F40F8u;
    {
        const bool branch_taken_0x1f40f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40F8u;
        // 0x1f40fc: 0xa223004b  sb          $v1, 0x4B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f40f8) {
            ctx->pc = 0x1F4254u;
            goto label_1f4254;
        }
    }
    ctx->pc = 0x1F4100u;
label_1f4100:
    // 0x1f4100: 0x96020152  lhu         $v0, 0x152($s0)
    ctx->pc = 0x1f4100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 338)));
label_1f4104:
    // 0x1f4104: 0x94a30150  lhu         $v1, 0x150($a1)
    ctx->pc = 0x1f4104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1f4108: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f4108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f410c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F410Cu;
    {
        const bool branch_taken_0x1f410c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F410Cu;
        // 0x1f4110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f410c) {
            ctx->pc = 0x1F4160u;
            goto label_1f4160;
        }
    }
    ctx->pc = 0x1F4114u;
    // 0x1f4114: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x1f4114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1f4118: 0x2c424000  sltiu       $v0, $v0, 0x4000
    ctx->pc = 0x1f4118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1f411c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F411Cu;
    {
        const bool branch_taken_0x1f411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F411Cu;
        // 0x1f4120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f411c) {
            ctx->pc = 0x1F4160u;
            goto label_1f4160;
        }
    }
    ctx->pc = 0x1F4124u;
    // 0x1f4124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4128: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f4128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f412c: 0xa2240045  sb          $a0, 0x45($s1)
    ctx->pc = 0x1f412cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4130: 0x8c628890  lw          $v0, -0x7770($v1)
    ctx->pc = 0x1f4130u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8890u));
    // 0x1f4134: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x1F4134u;
    {
        const bool branch_taken_0x1f4134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4134) {
            ctx->pc = 0x1F4138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4134u;
            // 0x1f4138: 0xa2240046  sb          $a0, 0x46($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4254u;
            goto label_1f4254;
        }
    }
    ctx->pc = 0x1F413Cu;
    // 0x1f413c: 0xdca202b8  ld          $v0, 0x2B8($a1)
    ctx->pc = 0x1f413cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 696)));
    // 0x1f4140: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f4140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4144: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f4144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f4148: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f4148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f414c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F414Cu;
    {
        const bool branch_taken_0x1f414c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F414Cu;
        // 0x1f4150: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f414c) {
            ctx->pc = 0x1F4258u;
            goto label_1f4258;
        }
    }
    ctx->pc = 0x1F4154u;
    // 0x1f4154: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1F4154u;
    {
        const bool branch_taken_0x1f4154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4154u;
        // 0x1f4158: 0xa2240046  sb          $a0, 0x46($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4154) {
            ctx->pc = 0x1F4258u;
            goto label_1f4258;
        }
    }
    ctx->pc = 0x1F415Cu;
    // 0x1f415c: 0x0  nop
    ctx->pc = 0x1f415cu;
    // NOP
label_1f4160:
    // 0x1f4160: 0xa2220047  sb          $v0, 0x47($s1)
    ctx->pc = 0x1f4160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4164: 0x8603014e  lh          $v1, 0x14E($s0)
    ctx->pc = 0x1f4164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 334)));
    // 0x1f4168: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4168u;
    {
        const bool branch_taken_0x1f4168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4168u;
        // 0x1f416c: 0x9606014e  lhu         $a2, 0x14E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 334)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4168) {
            ctx->pc = 0x1F4180u;
            goto label_1f4180;
        }
    }
    ctx->pc = 0x1F4170u;
    // 0x1f4170: 0x92030199  lbu         $v1, 0x199($s0)
    ctx->pc = 0x1f4170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
    // 0x1f4174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4178: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4178u;
    {
        const bool branch_taken_0x1f4178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f4178) {
            ctx->pc = 0x1F4198u;
            goto label_1f4198;
        }
    }
    ctx->pc = 0x1F4180u;
label_1f4180:
    // 0x1f4180: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1f4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1f4184: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x1f4184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1f4188: 0x94440044  lhu         $a0, 0x44($v0)
    ctx->pc = 0x1f4188u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f418c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f418cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f4190: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F4190u;
    {
        const bool branch_taken_0x1f4190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4190u;
        // 0x1f4194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4190) {
            ctx->pc = 0x1F421Cu;
            goto label_1f421c;
        }
    }
    ctx->pc = 0x1F4198u;
label_1f4198:
    // 0x1f4198: 0x54c00006  bnel        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4198u;
    {
        const bool branch_taken_0x1f4198 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4198) {
            ctx->pc = 0x1F419Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4198u;
            // 0x1f419c: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F41B4u;
            goto label_1f41b4;
        }
    }
    ctx->pc = 0x1F41A0u;
    // 0x1f41a0: 0x92030199  lbu         $v1, 0x199($s0)
    ctx->pc = 0x1f41a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
    // 0x1f41a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f41a8: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F41A8u;
    {
        const bool branch_taken_0x1f41a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f41a8) {
            ctx->pc = 0x1F41ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F41A8u;
            // 0x1f41ac: 0x860202bc  lh          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F41F0u;
            goto label_1f41f0;
        }
    }
    ctx->pc = 0x1F41B0u;
    // 0x1f41b0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1f41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1f41b4:
    // 0x1f41b4: 0x86040096  lh          $a0, 0x96($s0)
    ctx->pc = 0x1f41b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1f41b8: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x1f41b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f41bc: 0x5483000c  bnel        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F41BCu;
    {
        const bool branch_taken_0x1f41bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f41bc) {
            ctx->pc = 0x1F41C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F41BCu;
            // 0x1f41c0: 0x860202bc  lh          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F41F0u;
            goto label_1f41f0;
        }
    }
    ctx->pc = 0x1F41C4u;
    // 0x1f41c4: 0x920201f0  lbu         $v0, 0x1F0($s0)
    ctx->pc = 0x1f41c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1f41c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F41C8u;
    {
        const bool branch_taken_0x1f41c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f41c8) {
            ctx->pc = 0x1F41CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F41C8u;
            // 0x1f41cc: 0x860202bc  lh          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F41F0u;
            goto label_1f41f0;
        }
    }
    ctx->pc = 0x1F41D0u;
    // 0x1f41d0: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x1f41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x1f41d4: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x1f41d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1f41d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F41D8u;
    {
        const bool branch_taken_0x1f41d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41D8u;
        // 0x1f41dc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41d8) {
            ctx->pc = 0x1F41ECu;
            goto label_1f41ec;
        }
    }
    ctx->pc = 0x1F41E0u;
    // 0x1f41e0: 0x84a20096  lh          $v0, 0x96($a1)
    ctx->pc = 0x1f41e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x1f41e4: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F41E4u;
    {
        const bool branch_taken_0x1f41e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41E4u;
        // 0x1f41e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41e4) {
            ctx->pc = 0x1F421Cu;
            goto label_1f421c;
        }
    }
    ctx->pc = 0x1F41ECu;
label_1f41ec:
    // 0x1f41ec: 0x860202bc  lh          $v0, 0x2BC($s0)
    ctx->pc = 0x1f41ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 700)));
label_1f41f0:
    // 0x1f41f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F41F0u;
    {
        const bool branch_taken_0x1f41f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41F0u;
        // 0x1f41f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41f0) {
            ctx->pc = 0x1F421Cu;
            goto label_1f421c;
        }
    }
    ctx->pc = 0x1F41F8u;
    // 0x1f41f8: 0xdca202b8  ld          $v0, 0x2B8($a1)
    ctx->pc = 0x1f41f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 696)));
    // 0x1f41fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4200: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f4200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f4204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f4204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f4208: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4208u;
    {
        const bool branch_taken_0x1f4208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4208u;
        // 0x1f420c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4208) {
            ctx->pc = 0x1F421Cu;
            goto label_1f421c;
        }
    }
    ctx->pc = 0x1F4210u;
    // 0x1f4210: 0x8e02069c  lw          $v0, 0x69C($s0)
    ctx->pc = 0x1f4210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
    // 0x1f4214: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4214u;
    {
        const bool branch_taken_0x1f4214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4214u;
        // 0x1f4218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4214) {
            ctx->pc = 0x1F4220u;
            goto label_1f4220;
        }
    }
    ctx->pc = 0x1F421Cu;
label_1f421c:
    // 0x1f421c: 0xa2220048  sb          $v0, 0x48($s1)
    ctx->pc = 0x1f421cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
label_1f4220:
    // 0x1f4220: 0xc07ebbe  jal         func_1FAEF8
    ctx->pc = 0x1F4220u;
    SET_GPR_U32(ctx, 31, 0x1F4228u);
    ctx->pc = 0x1F4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4220u;
    // 0x1f4224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEF8u, 0x1F4220u, 0x1F4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4228u;
label_1f4228:
    // 0x1f4228: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4228u;
    {
        const bool branch_taken_0x1f4228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4228u;
        // 0x1f422c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4228) {
            ctx->pc = 0x1F4234u;
            goto label_1f4234;
        }
    }
    ctx->pc = 0x1F4230u;
    // 0x1f4230: 0xa2220048  sb          $v0, 0x48($s1)
    ctx->pc = 0x1f4230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
label_1f4234:
    // 0x1f4234: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x1f4234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x1f4238: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4238u;
    {
        const bool branch_taken_0x1f4238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4238u;
        // 0x1f423c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4238) {
            ctx->pc = 0x1F4250u;
            goto label_1f4250;
        }
    }
    ctx->pc = 0x1F4240u;
    // 0x1f4240: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f4244: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f4244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1f4248: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4248u;
    {
        const bool branch_taken_0x1f4248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4248u;
        // 0x1f424c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4248) {
            ctx->pc = 0x1F4254u;
            goto label_1f4254;
        }
    }
    ctx->pc = 0x1F4250u;
label_1f4250:
    // 0x1f4250: 0xa222004a  sb          $v0, 0x4A($s1)
    ctx->pc = 0x1f4250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 2));
label_1f4254:
    // 0x1f4254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4258:
    // 0x1f4258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f425c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f425cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4260: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4260u;
        // 0x1f4264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4268u;
}
