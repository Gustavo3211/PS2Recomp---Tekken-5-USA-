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

// Function: sub_00272F10
// Address: 0x272f10 - 0x2738c8
void sub_00272F10_0x272f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272F10_0x272f10");
#endif

    switch (ctx->pc) {
        case 0x272f40u: goto label_272f40;
        case 0x27301cu: goto label_27301c;
        case 0x2730c4u: goto label_2730c4;
        case 0x2730d4u: goto label_2730d4;
        case 0x273148u: goto label_273148;
        case 0x273158u: goto label_273158;
        case 0x2731c0u: goto label_2731c0;
        case 0x2731d0u: goto label_2731d0;
        case 0x2734f4u: goto label_2734f4;
        case 0x273538u: goto label_273538;
        case 0x273568u: goto label_273568;
        case 0x2735b8u: goto label_2735b8;
        case 0x2735d8u: goto label_2735d8;
        case 0x2735f4u: goto label_2735f4;
        case 0x273624u: goto label_273624;
        case 0x27367cu: goto label_27367c;
        case 0x2736d8u: goto label_2736d8;
        case 0x2736fcu: goto label_2736fc;
        case 0x273710u: goto label_273710;
        case 0x273718u: goto label_273718;
        case 0x27376cu: goto label_27376c;
        case 0x273798u: goto label_273798;
        case 0x2737c8u: goto label_2737c8;
        case 0x2737f8u: goto label_2737f8;
        case 0x273898u: goto label_273898;
        default: break;
    }

    ctx->pc = 0x272f10u;

    // 0x272f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272f14: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x272f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x272f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x272f1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x272f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x272f20: 0x8ce202b0  lw          $v0, 0x2B0($a3)
    ctx->pc = 0x272f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 688)));
    // 0x272f24: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272F24u;
    {
        const bool branch_taken_0x272f24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x272f24) {
            ctx->pc = 0x272F38u;
            goto label_272f38;
        }
    }
    ctx->pc = 0x272F2Cu;
    // 0x272f2c: 0x8ce200c0  lw          $v0, 0xC0($a3)
    ctx->pc = 0x272f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x272f30: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x272F30u;
    {
        const bool branch_taken_0x272f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f30) {
            ctx->pc = 0x272F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272F30u;
            // 0x272f34: 0x8ce20094  lw          $v0, 0x94($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272F4Cu;
            goto label_272f4c;
        }
    }
    ctx->pc = 0x272F38u;
label_272f38:
    // 0x272f38: 0xc099bd8  jal         func_266F60
    ctx->pc = 0x272F38u;
    SET_GPR_U32(ctx, 31, 0x272F40u);
    ctx->pc = 0x266F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266F60u, 0x272F38u, 0x272F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F40u;
label_272f40:
    // 0x272f40: 0x1040025c  beqz        $v0, . + 4 + (0x25C << 2)
    ctx->pc = 0x272F40u;
    {
        const bool branch_taken_0x272f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F40u;
        // 0x272f44: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f40) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x272F48u;
    // 0x272f48: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x272f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
label_272f4c:
    // 0x272f4c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x272F4Cu;
    {
        const bool branch_taken_0x272f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272f4c) {
            ctx->pc = 0x272F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272F4Cu;
            // 0x272f50: 0x8ce200f0  lw          $v0, 0xF0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272F64u;
            goto label_272f64;
        }
    }
    ctx->pc = 0x272F54u;
    // 0x272f54: 0x8ce30074  lw          $v1, 0x74($a3)
    ctx->pc = 0x272f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x272f58: 0x10600256  beqz        $v1, . + 4 + (0x256 << 2)
    ctx->pc = 0x272F58u;
    {
        const bool branch_taken_0x272f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F58u;
        // 0x272f5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f58) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x272F60u;
    // 0x272f60: 0x8ce200f0  lw          $v0, 0xF0($a3)
    ctx->pc = 0x272f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
label_272f64:
    // 0x272f64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272F64u;
    {
        const bool branch_taken_0x272f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F64u;
        // 0x272f68: 0x8f84aa80  lw          $a0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f64) {
            ctx->pc = 0x272F8Cu;
            goto label_272f8c;
        }
    }
    ctx->pc = 0x272F6Cu;
    // 0x272f6c: 0x8ce2029c  lw          $v0, 0x29C($a3)
    ctx->pc = 0x272f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 668)));
    // 0x272f70: 0x10400250  beqz        $v0, . + 4 + (0x250 << 2)
    ctx->pc = 0x272F70u;
    {
        const bool branch_taken_0x272f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F70u;
        // 0x272f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f70) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x272F78u;
    // 0x272f78: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272f7c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x272f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x272f80: 0x1040024c  beqz        $v0, . + 4 + (0x24C << 2)
    ctx->pc = 0x272F80u;
    {
        const bool branch_taken_0x272f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F80u;
        // 0x272f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f80) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x272F88u;
    // 0x272f88: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x272f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_272f8c:
    // 0x272f8c: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x272f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x272f90: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x272f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x272f94: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x272F94u;
    {
        const bool branch_taken_0x272f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f94) {
            ctx->pc = 0x272F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272F94u;
            // 0x272f98: 0x84830086  lh          $v1, 0x86($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 134)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272FB4u;
            goto label_272fb4;
        }
    }
    ctx->pc = 0x272F9Cu;
    // 0x272f9c: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x272f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x272fa0: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x272fa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x272fa4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x272fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x272fa8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272FA8u;
    {
        const bool branch_taken_0x272fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FA8u;
        // 0x272fac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fa8) {
            ctx->pc = 0x272FC4u;
            goto label_272fc4;
        }
    }
    ctx->pc = 0x272FB0u;
    // 0x272fb0: 0x84830086  lh          $v1, 0x86($a0)
    ctx->pc = 0x272fb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 134)));
label_272fb4:
    // 0x272fb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272fb8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272FB8u;
    {
        const bool branch_taken_0x272fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272fb8) {
            ctx->pc = 0x272FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272FB8u;
            // 0x272fbc: 0x8ce200f0  lw          $v0, 0xF0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272FD0u;
            goto label_272fd0;
        }
    }
    ctx->pc = 0x272FC0u;
    // 0x272fc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272fc4:
    // 0x272fc4: 0xace200f0  sw          $v0, 0xF0($a3)
    ctx->pc = 0x272fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 2));
    // 0x272fc8: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x272fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272fcc: 0x8ce200f0  lw          $v0, 0xF0($a3)
    ctx->pc = 0x272fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
label_272fd0:
    // 0x272fd0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x272FD0u;
    {
        const bool branch_taken_0x272fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272fd0) {
            ctx->pc = 0x272FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272FD0u;
            // 0x272fd4: 0x8ce200c8  lw          $v0, 0xC8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273044u;
            goto label_273044;
        }
    }
    ctx->pc = 0x272FD8u;
    // 0x272fd8: 0x8ce30330  lw          $v1, 0x330($a3)
    ctx->pc = 0x272fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
    // 0x272fdc: 0x24020707  addiu       $v0, $zero, 0x707
    ctx->pc = 0x272fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
    // 0x272fe0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x272FE0u;
    {
        const bool branch_taken_0x272fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x272FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FE0u;
        // 0x272fe4: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fe0) {
            ctx->pc = 0x273014u;
            goto label_273014;
        }
    }
    ctx->pc = 0x272FE8u;
    // 0x272fe8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x272FE8u;
    {
        const bool branch_taken_0x272fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x272FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FE8u;
        // 0x272fec: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fe8) {
            ctx->pc = 0x273014u;
            goto label_273014;
        }
    }
    ctx->pc = 0x272FF0u;
    // 0x272ff0: 0x8ce2032c  lw          $v0, 0x32C($a3)
    ctx->pc = 0x272ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
    // 0x272ff4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x272ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272ff8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272FF8u;
    {
        const bool branch_taken_0x272ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FF8u;
        // 0x272ffc: 0x8f84aa80  lw          $a0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ff8) {
            ctx->pc = 0x273014u;
            goto label_273014;
        }
    }
    ctx->pc = 0x273000u;
    // 0x273000: 0x2405486f  addiu       $a1, $zero, 0x486F
    ctx->pc = 0x273000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18543));
    // 0x273004: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x273004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x273008: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x273008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27300c: 0x5465000d  bnel        $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x27300Cu;
    {
        const bool branch_taken_0x27300c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x27300c) {
            ctx->pc = 0x273010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27300Cu;
            // 0x273010: 0x8ce200c8  lw          $v0, 0xC8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273044u;
            goto label_273044;
        }
    }
    ctx->pc = 0x273014u;
label_273014:
    // 0x273014: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273014u;
    SET_GPR_U32(ctx, 31, 0x27301Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273014u, 0x27301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27301Cu;
label_27301c:
    // 0x27301c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x27301cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273020: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x273020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x273024: 0x84e30374  lh          $v1, 0x374($a3)
    ctx->pc = 0x273024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 884)));
    // 0x273028: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27302c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27302Cu;
    {
        const bool branch_taken_0x27302c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27302c) {
            ctx->pc = 0x273030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27302Cu;
            // 0x273030: 0x8ce200c8  lw          $v0, 0xC8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273044u;
            goto label_273044;
        }
    }
    ctx->pc = 0x273034u;
    // 0x273034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273038: 0xace200f0  sw          $v0, 0xF0($a3)
    ctx->pc = 0x273038u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 2));
    // 0x27303c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x27303cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273040: 0x8ce200c8  lw          $v0, 0xC8($a3)
    ctx->pc = 0x273040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
label_273044:
    // 0x273044: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x273044u;
    {
        const bool branch_taken_0x273044 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x273044) {
            ctx->pc = 0x273048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273044u;
            // 0x273048: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273068u;
            goto label_273068;
        }
    }
    ctx->pc = 0x27304Cu;
    // 0x27304c: 0x8ce300f0  lw          $v1, 0xF0($a3)
    ctx->pc = 0x27304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x273050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273054: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273054u;
    {
        const bool branch_taken_0x273054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273054) {
            ctx->pc = 0x273058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273054u;
            // 0x273058: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273068u;
            goto label_273068;
        }
    }
    ctx->pc = 0x27305Cu;
    // 0x27305c: 0x14600215  bnez        $v1, . + 4 + (0x215 << 2)
    ctx->pc = 0x27305Cu;
    {
        const bool branch_taken_0x27305c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27305Cu;
        // 0x273060: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27305c) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273064u;
    // 0x273064: 0x8ce20298  lw          $v0, 0x298($a3)
    ctx->pc = 0x273064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
label_273068:
    // 0x273068: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x273068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x27306c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x27306cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x273070: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x273070u;
    {
        const bool branch_taken_0x273070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273070u;
        // 0x273074: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273070) {
            ctx->pc = 0x2730FCu;
            goto label_2730fc;
        }
    }
    ctx->pc = 0x273078u;
    // 0x273078: 0x8ce20324  lw          $v0, 0x324($a3)
    ctx->pc = 0x273078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 804)));
    // 0x27307c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x27307Cu;
    {
        const bool branch_taken_0x27307c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27307c) {
            ctx->pc = 0x273080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27307Cu;
            // 0x273080: 0x8483003e  lh          $v1, 0x3E($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273100u;
            goto label_273100;
        }
    }
    ctx->pc = 0x273084u;
    // 0x273084: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x273084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x273088: 0x908201f9  lbu         $v0, 0x1F9($a0)
    ctx->pc = 0x273088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
    // 0x27308c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x27308Cu;
    {
        const bool branch_taken_0x27308c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27308c) {
            ctx->pc = 0x273090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27308Cu;
            // 0x273090: 0x8483003e  lh          $v1, 0x3E($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273100u;
            goto label_273100;
        }
    }
    ctx->pc = 0x273094u;
    // 0x273094: 0x8482003e  lh          $v0, 0x3E($a0)
    ctx->pc = 0x273094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x273098: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x273098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27309c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x27309cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2730a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2730a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2730a4: 0x8c6327b0  lw          $v1, 0x27B0($v1)
    ctx->pc = 0x2730a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10160)));
    // 0x2730a8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2730A8u;
    {
        const bool branch_taken_0x2730a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730A8u;
        // 0x2730ac: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730a8) {
            ctx->pc = 0x2730FCu;
            goto label_2730fc;
        }
    }
    ctx->pc = 0x2730B0u;
    // 0x2730b0: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x2730b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x2730b4: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2730B4u;
    {
        const bool branch_taken_0x2730b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2730b4) {
            ctx->pc = 0x2730B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2730B4u;
            // 0x2730b8: 0x8483003e  lh          $v1, 0x3E($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273100u;
            goto label_273100;
        }
    }
    ctx->pc = 0x2730BCu;
    // 0x2730bc: 0xc09aed2  jal         func_26BB48
    ctx->pc = 0x2730BCu;
    SET_GPR_U32(ctx, 31, 0x2730C4u);
    ctx->pc = 0x2730C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730BCu;
    // 0x2730c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB48u, 0x2730BCu, 0x2730C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730C4u;
label_2730c4:
    // 0x2730c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2730C4u;
    {
        const bool branch_taken_0x2730c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730C4u;
        // 0x2730c8: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730c4) {
            ctx->pc = 0x2730F8u;
            goto label_2730f8;
        }
    }
    ctx->pc = 0x2730CCu;
    // 0x2730cc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2730CCu;
    SET_GPR_U32(ctx, 31, 0x2730D4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2730CCu, 0x2730D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730D4u;
label_2730d4:
    // 0x2730d4: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2730d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2730d8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2730d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2730dc: 0x84e30394  lh          $v1, 0x394($a3)
    ctx->pc = 0x2730dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 916)));
    // 0x2730e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2730e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2730e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2730E4u;
    {
        const bool branch_taken_0x2730e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730E4u;
        // 0x2730e8: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730e4) {
            ctx->pc = 0x2730FCu;
            goto label_2730fc;
        }
    }
    ctx->pc = 0x2730ECu;
    // 0x2730ec: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x2730ECu;
    {
        const bool branch_taken_0x2730ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730ECu;
        // 0x2730f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730ec) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2730F4u;
    // 0x2730f4: 0x0  nop
    ctx->pc = 0x2730f4u;
    // NOP
label_2730f8:
    // 0x2730f8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x2730f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_2730fc:
    // 0x2730fc: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x2730fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
label_273100:
    // 0x273100: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x273100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273104: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x273104u;
    {
        const bool branch_taken_0x273104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273104) {
            ctx->pc = 0x273108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273104u;
            // 0x273108: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27317Cu;
            goto label_27317c;
        }
    }
    ctx->pc = 0x27310Cu;
    // 0x27310c: 0x8ce30298  lw          $v1, 0x298($a3)
    ctx->pc = 0x27310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
    // 0x273110: 0x2862001b  slti        $v0, $v1, 0x1B
    ctx->pc = 0x273110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x273114: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x273114u;
    {
        const bool branch_taken_0x273114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273114) {
            ctx->pc = 0x273118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273114u;
            // 0x273118: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27317Cu;
            goto label_27317c;
        }
    }
    ctx->pc = 0x27311Cu;
    // 0x27311c: 0x28620016  slti        $v0, $v1, 0x16
    ctx->pc = 0x27311cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x273120: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x273120u;
    {
        const bool branch_taken_0x273120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273120) {
            ctx->pc = 0x273124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273120u;
            // 0x273124: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27317Cu;
            goto label_27317c;
        }
    }
    ctx->pc = 0x273128u;
    // 0x273128: 0x8ce20324  lw          $v0, 0x324($a3)
    ctx->pc = 0x273128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 804)));
    // 0x27312c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x27312Cu;
    {
        const bool branch_taken_0x27312c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27312c) {
            ctx->pc = 0x273130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27312Cu;
            // 0x273130: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27317Cu;
            goto label_27317c;
        }
    }
    ctx->pc = 0x273134u;
    // 0x273134: 0x908201f9  lbu         $v0, 0x1F9($a0)
    ctx->pc = 0x273134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
    // 0x273138: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x273138u;
    {
        const bool branch_taken_0x273138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273138) {
            ctx->pc = 0x27313Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273138u;
            // 0x27313c: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27317Cu;
            goto label_27317c;
        }
    }
    ctx->pc = 0x273140u;
    // 0x273140: 0xc09aed2  jal         func_26BB48
    ctx->pc = 0x273140u;
    SET_GPR_U32(ctx, 31, 0x273148u);
    ctx->pc = 0x273144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273140u;
    // 0x273144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB48u, 0x273140u, 0x273148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273148u;
label_273148:
    // 0x273148: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x273148u;
    {
        const bool branch_taken_0x273148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273148u;
        // 0x27314c: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273148) {
            ctx->pc = 0x273178u;
            goto label_273178;
        }
    }
    ctx->pc = 0x273150u;
    // 0x273150: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273150u;
    SET_GPR_U32(ctx, 31, 0x273158u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273150u, 0x273158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273158u;
label_273158:
    // 0x273158: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x273158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27315c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x273160: 0x84e30394  lh          $v1, 0x394($a3)
    ctx->pc = 0x273160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 916)));
    // 0x273164: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273168: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x273168u;
    {
        const bool branch_taken_0x273168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273168) {
            ctx->pc = 0x27316Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273168u;
            // 0x27316c: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27317Cu;
            goto label_27317c;
        }
    }
    ctx->pc = 0x273170u;
    // 0x273170: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x273170u;
    {
        const bool branch_taken_0x273170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273170u;
        // 0x273174: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273170) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273178u;
label_273178:
    // 0x273178: 0x8ce20298  lw          $v0, 0x298($a3)
    ctx->pc = 0x273178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
label_27317c:
    // 0x27317c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x273180: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x273180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x273184: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x273184u;
    {
        const bool branch_taken_0x273184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273184) {
            ctx->pc = 0x273188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273184u;
            // 0x273188: 0x8ce20328  lw          $v0, 0x328($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273264u;
            goto label_273264;
        }
    }
    ctx->pc = 0x27318Cu;
    // 0x27318c: 0x8ce20324  lw          $v0, 0x324($a3)
    ctx->pc = 0x27318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 804)));
    // 0x273190: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x273190u;
    {
        const bool branch_taken_0x273190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273190) {
            ctx->pc = 0x273194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273190u;
            // 0x273194: 0x8ce20328  lw          $v0, 0x328($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273264u;
            goto label_273264;
        }
    }
    ctx->pc = 0x273198u;
    // 0x273198: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x273198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x27319c: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x27319cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x2731a0: 0x54600030  bnel        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2731A0u;
    {
        const bool branch_taken_0x2731a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2731a0) {
            ctx->pc = 0x2731A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2731A0u;
            // 0x2731a4: 0x8ce20328  lw          $v0, 0x328($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273264u;
            goto label_273264;
        }
    }
    ctx->pc = 0x2731A8u;
    // 0x2731a8: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x2731a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x2731ac: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x2731acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x2731b0: 0x5460002c  bnel        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2731B0u;
    {
        const bool branch_taken_0x2731b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2731b0) {
            ctx->pc = 0x2731B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2731B0u;
            // 0x2731b4: 0x8ce20328  lw          $v0, 0x328($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273264u;
            goto label_273264;
        }
    }
    ctx->pc = 0x2731B8u;
    // 0x2731b8: 0xc09aed2  jal         func_26BB48
    ctx->pc = 0x2731B8u;
    SET_GPR_U32(ctx, 31, 0x2731C0u);
    ctx->pc = 0x2731BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2731B8u;
    // 0x2731bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB48u, 0x2731B8u, 0x2731C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731C0u;
label_2731c0:
    // 0x2731c0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2731C0u;
    {
        const bool branch_taken_0x2731c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731C0u;
        // 0x2731c4: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731c0) {
            ctx->pc = 0x273260u;
            goto label_273260;
        }
    }
    ctx->pc = 0x2731C8u;
    // 0x2731c8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2731C8u;
    SET_GPR_U32(ctx, 31, 0x2731D0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2731C8u, 0x2731D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731D0u;
label_2731d0:
    // 0x2731d0: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2731d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2731d4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2731d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2731d8: 0x84e30394  lh          $v1, 0x394($a3)
    ctx->pc = 0x2731d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 916)));
    // 0x2731dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2731dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2731e0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2731E0u;
    {
        const bool branch_taken_0x2731e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731E0u;
        // 0x2731e4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731e0) {
            ctx->pc = 0x273260u;
            goto label_273260;
        }
    }
    ctx->pc = 0x2731E8u;
    // 0x2731e8: 0x8ce30330  lw          $v1, 0x330($a3)
    ctx->pc = 0x2731e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
    // 0x2731ec: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x2731ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x2731f0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2731F0u;
    {
        const bool branch_taken_0x2731f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2731F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731F0u;
        // 0x2731f4: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731f0) {
            ctx->pc = 0x273210u;
            goto label_273210;
        }
    }
    ctx->pc = 0x2731F8u;
    // 0x2731f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2731F8u;
    {
        const bool branch_taken_0x2731f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2731FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731F8u;
        // 0x2731fc: 0x24020707  addiu       $v0, $zero, 0x707 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731f8) {
            ctx->pc = 0x273210u;
            goto label_273210;
        }
    }
    ctx->pc = 0x273200u;
    // 0x273200: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273200u;
    {
        const bool branch_taken_0x273200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273200u;
        // 0x273204: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273200) {
            ctx->pc = 0x273210u;
            goto label_273210;
        }
    }
    ctx->pc = 0x273208u;
    // 0x273208: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x273208u;
    {
        const bool branch_taken_0x273208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273208) {
            ctx->pc = 0x27320Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273208u;
            // 0x27320c: 0x8ca30330  lw          $v1, 0x330($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273234u;
            goto label_273234;
        }
    }
    ctx->pc = 0x273210u;
label_273210:
    // 0x273210: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x273210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x273214: 0x8464003e  lh          $a0, 0x3E($v1)
    ctx->pc = 0x273214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x273218: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x273218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x27321c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x27321cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x273220: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273224: 0x8c6327b4  lw          $v1, 0x27B4($v1)
    ctx->pc = 0x273224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10164)));
    // 0x273228: 0x146001a2  bnez        $v1, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x273228u;
    {
        const bool branch_taken_0x273228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273228u;
        // 0x27322c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273228) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273230u;
    // 0x273230: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x273230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
label_273234:
    // 0x273234: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x273234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x273238: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x273238u;
    {
        const bool branch_taken_0x273238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273238) {
            ctx->pc = 0x27323Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273238u;
            // 0x27323c: 0x8ce20328  lw          $v0, 0x328($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273264u;
            goto label_273264;
        }
    }
    ctx->pc = 0x273240u;
    // 0x273240: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x273240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x273244: 0x8443003e  lh          $v1, 0x3E($v0)
    ctx->pc = 0x273244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x273248: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27324c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x273250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273254: 0x8c4227b8  lw          $v0, 0x27B8($v0)
    ctx->pc = 0x273254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10168)));
    // 0x273258: 0x14400196  bnez        $v0, . + 4 + (0x196 << 2)
    ctx->pc = 0x273258u;
    {
        const bool branch_taken_0x273258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273258u;
        // 0x27325c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273258) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273260u;
label_273260:
    // 0x273260: 0x8ce20328  lw          $v0, 0x328($a3)
    ctx->pc = 0x273260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
label_273264:
    // 0x273264: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x273264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x273268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x273268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27326c: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x27326Cu;
    {
        const bool branch_taken_0x27326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27326Cu;
        // 0x273270: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27326c) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273274u;
    // 0x273274: 0x240476cb  addiu       $a0, $zero, 0x76CB
    ctx->pc = 0x273274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30411));
    // 0x273278: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x273278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x27327c: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x27327cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x273280: 0x10640098  beq         $v1, $a0, . + 4 + (0x98 << 2)
    ctx->pc = 0x273280u;
    {
        const bool branch_taken_0x273280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x273284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273280u;
        // 0x273284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273280) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273288u;
    // 0x273288: 0x2c6276cc  sltiu       $v0, $v1, 0x76CC
    ctx->pc = 0x273288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30412) ? 1 : 0);
    // 0x27328c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x27328Cu;
    {
        const bool branch_taken_0x27328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27328Cu;
        // 0x273290: 0x3402ad8c  ori         $v0, $zero, 0xAD8C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44428);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27328c) {
            ctx->pc = 0x2733C0u;
            goto label_2733c0;
        }
    }
    ctx->pc = 0x273294u;
    // 0x273294: 0x24023865  addiu       $v0, $zero, 0x3865
    ctx->pc = 0x273294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14437));
    // 0x273298: 0x10620092  beq         $v1, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x273298u;
    {
        const bool branch_taken_0x273298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273298u;
        // 0x27329c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273298) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2732A0u;
    // 0x2732a0: 0x2c623866  sltiu       $v0, $v1, 0x3866
    ctx->pc = 0x2732a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14438) ? 1 : 0);
    // 0x2732a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2732A4u;
    {
        const bool branch_taken_0x2732a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732A4u;
        // 0x2732a8: 0x2402577a  addiu       $v0, $zero, 0x577A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22394));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732a4) {
            ctx->pc = 0x273338u;
            goto label_273338;
        }
    }
    ctx->pc = 0x2732ACu;
    // 0x2732ac: 0x24021923  addiu       $v0, $zero, 0x1923
    ctx->pc = 0x2732acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6435));
    // 0x2732b0: 0x1062008c  beq         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2732B0u;
    {
        const bool branch_taken_0x2732b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2732B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732B0u;
        // 0x2732b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732b0) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2732B8u;
    // 0x2732b8: 0x2c621924  sltiu       $v0, $v1, 0x1924
    ctx->pc = 0x2732b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6436) ? 1 : 0);
    // 0x2732bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2732BCu;
    {
        const bool branch_taken_0x2732bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732BCu;
        // 0x2732c0: 0x240228f2  addiu       $v0, $zero, 0x28F2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732bc) {
            ctx->pc = 0x273300u;
            goto label_273300;
        }
    }
    ctx->pc = 0x2732C4u;
    // 0x2732c4: 0x2402099b  addiu       $v0, $zero, 0x99B
    ctx->pc = 0x2732c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2459));
    // 0x2732c8: 0x10620086  beq         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2732C8u;
    {
        const bool branch_taken_0x2732c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2732CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732C8u;
        // 0x2732cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732c8) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2732D0u;
    // 0x2732d0: 0x2c62099c  sltiu       $v0, $v1, 0x99C
    ctx->pc = 0x2732d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2460) ? 1 : 0);
    // 0x2732d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2732D4u;
    {
        const bool branch_taken_0x2732d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732D4u;
        // 0x2732d8: 0x2402113b  addiu       $v0, $zero, 0x113B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4411));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732d4) {
            ctx->pc = 0x2732F0u;
            goto label_2732f0;
        }
    }
    ctx->pc = 0x2732DCu;
    // 0x2732dc: 0x240201a3  addiu       $v0, $zero, 0x1A3
    ctx->pc = 0x2732dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
    // 0x2732e0: 0x50620080  beql        $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2732E0u;
    {
        const bool branch_taken_0x2732e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2732e0) {
            ctx->pc = 0x2732E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2732E0u;
            // 0x2732e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2732E8u;
    // 0x2732e8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2732E8u;
    {
        const bool branch_taken_0x2732e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732E8u;
        // 0x2732ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732e8) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2732F0u;
label_2732f0:
    // 0x2732f0: 0x5062007c  beql        $v1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2732F0u;
    {
        const bool branch_taken_0x2732f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2732f0) {
            ctx->pc = 0x2732F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2732F0u;
            // 0x2732f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2732F8u;
    // 0x2732f8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2732F8u;
    {
        const bool branch_taken_0x2732f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732F8u;
        // 0x2732fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732f8) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273300u;
label_273300:
    // 0x273300: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x273300u;
    {
        const bool branch_taken_0x273300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273300u;
        // 0x273304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273300) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273308u;
    // 0x273308: 0x2c6228f3  sltiu       $v0, $v1, 0x28F3
    ctx->pc = 0x273308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10483) ? 1 : 0);
    // 0x27330c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27330Cu;
    {
        const bool branch_taken_0x27330c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27330Cu;
        // 0x273310: 0x240230a5  addiu       $v0, $zero, 0x30A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12453));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27330c) {
            ctx->pc = 0x273328u;
            goto label_273328;
        }
    }
    ctx->pc = 0x273314u;
    // 0x273314: 0x240220f9  addiu       $v0, $zero, 0x20F9
    ctx->pc = 0x273314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8441));
    // 0x273318: 0x50620072  beql        $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x273318u;
    {
        const bool branch_taken_0x273318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273318) {
            ctx->pc = 0x27331Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273318u;
            // 0x27331c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273320u;
    // 0x273320: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x273320u;
    {
        const bool branch_taken_0x273320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273320u;
        // 0x273324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273320) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273328u;
label_273328:
    // 0x273328: 0x5062006e  beql        $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x273328u;
    {
        const bool branch_taken_0x273328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273328) {
            ctx->pc = 0x27332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273328u;
            // 0x27332c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273330u;
    // 0x273330: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x273330u;
    {
        const bool branch_taken_0x273330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273330u;
        // 0x273334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273330) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273338u;
label_273338:
    // 0x273338: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x273338u;
    {
        const bool branch_taken_0x273338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273338u;
        // 0x27333c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273338) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273340u;
    // 0x273340: 0x2c62577b  sltiu       $v0, $v1, 0x577B
    ctx->pc = 0x273340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22395) ? 1 : 0);
    // 0x273344: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x273344u;
    {
        const bool branch_taken_0x273344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273344u;
        // 0x273348: 0x24026729  addiu       $v0, $zero, 0x6729 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26409));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273344) {
            ctx->pc = 0x273388u;
            goto label_273388;
        }
    }
    ctx->pc = 0x27334Cu;
    // 0x27334c: 0x24024854  addiu       $v0, $zero, 0x4854
    ctx->pc = 0x27334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18516));
    // 0x273350: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x273350u;
    {
        const bool branch_taken_0x273350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273350u;
        // 0x273354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273350) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273358u;
    // 0x273358: 0x2c624855  sltiu       $v0, $v1, 0x4855
    ctx->pc = 0x273358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18517) ? 1 : 0);
    // 0x27335c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27335Cu;
    {
        const bool branch_taken_0x27335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27335Cu;
        // 0x273360: 0x24024fad  addiu       $v0, $zero, 0x4FAD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20397));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27335c) {
            ctx->pc = 0x273378u;
            goto label_273378;
        }
    }
    ctx->pc = 0x273364u;
    // 0x273364: 0x24024021  addiu       $v0, $zero, 0x4021
    ctx->pc = 0x273364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16417));
    // 0x273368: 0x5062005e  beql        $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x273368u;
    {
        const bool branch_taken_0x273368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273368) {
            ctx->pc = 0x27336Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273368u;
            // 0x27336c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273370u;
    // 0x273370: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x273370u;
    {
        const bool branch_taken_0x273370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273370u;
        // 0x273374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273370) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273378u;
label_273378:
    // 0x273378: 0x5062005a  beql        $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x273378u;
    {
        const bool branch_taken_0x273378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273378) {
            ctx->pc = 0x27337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273378u;
            // 0x27337c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273380u;
    // 0x273380: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x273380u;
    {
        const bool branch_taken_0x273380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273380u;
        // 0x273384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273380) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273388u;
label_273388:
    // 0x273388: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x273388u;
    {
        const bool branch_taken_0x273388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273388u;
        // 0x27338c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273388) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273390u;
    // 0x273390: 0x2c62672a  sltiu       $v0, $v1, 0x672A
    ctx->pc = 0x273390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26410) ? 1 : 0);
    // 0x273394: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273394u;
    {
        const bool branch_taken_0x273394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273394u;
        // 0x273398: 0x24026ef0  addiu       $v0, $zero, 0x6EF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273394) {
            ctx->pc = 0x2733B0u;
            goto label_2733b0;
        }
    }
    ctx->pc = 0x27339Cu;
    // 0x27339c: 0x24025f80  addiu       $v0, $zero, 0x5F80
    ctx->pc = 0x27339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24448));
    // 0x2733a0: 0x50620050  beql        $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2733A0u;
    {
        const bool branch_taken_0x2733a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2733a0) {
            ctx->pc = 0x2733A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2733A0u;
            // 0x2733a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2733A8u;
    // 0x2733a8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2733A8u;
    {
        const bool branch_taken_0x2733a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733A8u;
        // 0x2733ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733a8) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2733B0u;
label_2733b0:
    // 0x2733b0: 0x5062004c  beql        $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2733B0u;
    {
        const bool branch_taken_0x2733b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2733b0) {
            ctx->pc = 0x2733B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2733B0u;
            // 0x2733b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2733B8u;
    // 0x2733b8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2733B8u;
    {
        const bool branch_taken_0x2733b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733B8u;
        // 0x2733bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733b8) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2733C0u;
label_2733c0:
    // 0x2733c0: 0x50620048  beql        $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2733C0u;
    {
        const bool branch_taken_0x2733c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2733c0) {
            ctx->pc = 0x2733C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2733C0u;
            // 0x2733c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2733C8u;
    // 0x2733c8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2733c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2733cc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2733CCu;
    {
        const bool branch_taken_0x2733cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2733D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733CCu;
        // 0x2733d0: 0x3402ccd5  ori         $v0, $zero, 0xCCD5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52437);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733cc) {
            ctx->pc = 0x273460u;
            goto label_273460;
        }
    }
    ctx->pc = 0x2733D4u;
    // 0x2733d4: 0x34028e39  ori         $v0, $zero, 0x8E39
    ctx->pc = 0x2733d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36409);
    // 0x2733d8: 0x50620042  beql        $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2733D8u;
    {
        const bool branch_taken_0x2733d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2733d8) {
            ctx->pc = 0x2733DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2733D8u;
            // 0x2733dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2733E0u;
    // 0x2733e0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2733e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2733e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2733E4u;
    {
        const bool branch_taken_0x2733e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2733E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733E4u;
        // 0x2733e8: 0x34029dd0  ori         $v0, $zero, 0x9DD0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40400);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733e4) {
            ctx->pc = 0x273428u;
            goto label_273428;
        }
    }
    ctx->pc = 0x2733ECu;
    // 0x2733ec: 0x3402868a  ori         $v0, $zero, 0x868A
    ctx->pc = 0x2733ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34442);
    // 0x2733f0: 0x5062003c  beql        $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2733F0u;
    {
        const bool branch_taken_0x2733f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2733f0) {
            ctx->pc = 0x2733F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2733F0u;
            // 0x2733f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2733F8u;
    // 0x2733f8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2733f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2733fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2733FCu;
    {
        const bool branch_taken_0x2733fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733FCu;
        // 0x273400: 0x34028820  ori         $v0, $zero, 0x8820 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34848);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733fc) {
            ctx->pc = 0x273418u;
            goto label_273418;
        }
    }
    ctx->pc = 0x273404u;
    // 0x273404: 0x24027f5d  addiu       $v0, $zero, 0x7F5D
    ctx->pc = 0x273404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32605));
    // 0x273408: 0x50620036  beql        $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x273408u;
    {
        const bool branch_taken_0x273408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273408) {
            ctx->pc = 0x27340Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273408u;
            // 0x27340c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273410u;
    // 0x273410: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x273410u;
    {
        const bool branch_taken_0x273410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273410u;
        // 0x273414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273410) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273418u;
label_273418:
    // 0x273418: 0x50620032  beql        $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x273418u;
    {
        const bool branch_taken_0x273418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273418) {
            ctx->pc = 0x27341Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273418u;
            // 0x27341c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273420u;
    // 0x273420: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x273420u;
    {
        const bool branch_taken_0x273420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273420u;
        // 0x273424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273420) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273428u;
label_273428:
    // 0x273428: 0x5062002e  beql        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x273428u;
    {
        const bool branch_taken_0x273428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273428) {
            ctx->pc = 0x27342Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273428u;
            // 0x27342c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273430u;
    // 0x273430: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x273430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x273434: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273434u;
    {
        const bool branch_taken_0x273434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273434u;
        // 0x273438: 0x3402a5ab  ori         $v0, $zero, 0xA5AB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273434) {
            ctx->pc = 0x273450u;
            goto label_273450;
        }
    }
    ctx->pc = 0x27343Cu;
    // 0x27343c: 0x34029612  ori         $v0, $zero, 0x9612
    ctx->pc = 0x27343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38418);
    // 0x273440: 0x50620028  beql        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x273440u;
    {
        const bool branch_taken_0x273440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273440) {
            ctx->pc = 0x273444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273440u;
            // 0x273444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273448u;
    // 0x273448: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x273448u;
    {
        const bool branch_taken_0x273448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273448u;
        // 0x27344c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273448) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273450u;
label_273450:
    // 0x273450: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x273450u;
    {
        const bool branch_taken_0x273450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273450) {
            ctx->pc = 0x273454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273450u;
            // 0x273454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273458u;
    // 0x273458: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x273458u;
    {
        const bool branch_taken_0x273458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273458u;
        // 0x27345c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273458) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273460u;
label_273460:
    // 0x273460: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x273460u;
    {
        const bool branch_taken_0x273460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273460) {
            ctx->pc = 0x273464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273460u;
            // 0x273464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273468u;
    // 0x273468: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x273468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27346c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27346Cu;
    {
        const bool branch_taken_0x27346c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27346Cu;
        // 0x273470: 0x3402dcff  ori         $v0, $zero, 0xDCFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56575);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27346c) {
            ctx->pc = 0x2734B0u;
            goto label_2734b0;
        }
    }
    ctx->pc = 0x273474u;
    // 0x273474: 0x3402bd8b  ori         $v0, $zero, 0xBD8B
    ctx->pc = 0x273474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48523);
    // 0x273478: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x273478u;
    {
        const bool branch_taken_0x273478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273478) {
            ctx->pc = 0x27347Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273478u;
            // 0x27347c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273480u;
    // 0x273480: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x273480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x273484: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273484u;
    {
        const bool branch_taken_0x273484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273484u;
        // 0x273488: 0x3402c4de  ori         $v0, $zero, 0xC4DE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50398);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273484) {
            ctx->pc = 0x2734A0u;
            goto label_2734a0;
        }
    }
    ctx->pc = 0x27348Cu;
    // 0x27348c: 0x3402b540  ori         $v0, $zero, 0xB540
    ctx->pc = 0x27348cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46400);
    // 0x273490: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x273490u;
    {
        const bool branch_taken_0x273490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273490) {
            ctx->pc = 0x273494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273490u;
            // 0x273494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x273498u;
    // 0x273498: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x273498u;
    {
        const bool branch_taken_0x273498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273498u;
        // 0x27349c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273498) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2734A0u;
label_2734a0:
    // 0x2734a0: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2734A0u;
    {
        const bool branch_taken_0x2734a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2734a0) {
            ctx->pc = 0x2734A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2734A0u;
            // 0x2734a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2734A8u;
    // 0x2734a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2734A8u;
    {
        const bool branch_taken_0x2734a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734A8u;
        // 0x2734ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734a8) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2734B0u;
label_2734b0:
    // 0x2734b0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2734B0u;
    {
        const bool branch_taken_0x2734b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2734b0) {
            ctx->pc = 0x2734B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2734B0u;
            // 0x2734b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2734B8u;
    // 0x2734b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2734b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2734bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2734BCu;
    {
        const bool branch_taken_0x2734bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2734C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734BCu;
        // 0x2734c0: 0x3402e443  ori         $v0, $zero, 0xE443 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58435);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734bc) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x2734C4u;
    // 0x2734c4: 0x3402d4e8  ori         $v0, $zero, 0xD4E8
    ctx->pc = 0x2734c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54504);
    // 0x2734c8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2734C8u;
    {
        const bool branch_taken_0x2734c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2734c8) {
            ctx->pc = 0x2734CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2734C8u;
            // 0x2734cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2734D0u;
    // 0x2734d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2734D0u;
    {
        const bool branch_taken_0x2734d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734D0u;
        // 0x2734d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734d0) {
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2734D8u;
label_2734d8:
    // 0x2734d8: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2734D8u;
    {
        const bool branch_taken_0x2734d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2734d8) {
            ctx->pc = 0x2734DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2734D8u;
            // 0x2734dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2734E4u;
            goto label_2734e4;
        }
    }
    ctx->pc = 0x2734E0u;
    // 0x2734e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2734e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2734e4:
    // 0x2734e4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2734E4u;
    {
        const bool branch_taken_0x2734e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2734e4) {
            ctx->pc = 0x2734E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2734E4u;
            // 0x2734e8: 0x8ce20328  lw          $v0, 0x328($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273510u;
            goto label_273510;
        }
    }
    ctx->pc = 0x2734ECu;
    // 0x2734ec: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2734ECu;
    SET_GPR_U32(ctx, 31, 0x2734F4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2734ECu, 0x2734F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734F4u;
label_2734f4:
    // 0x2734f4: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2734f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2734f8: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x2734f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2734fc: 0x84e40374  lh          $a0, 0x374($a3)
    ctx->pc = 0x2734fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 884)));
    // 0x273500: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x273500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x273504: 0x146000eb  bnez        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x273504u;
    {
        const bool branch_taken_0x273504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273504u;
        // 0x273508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273504) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x27350Cu;
    // 0x27350c: 0x8ce20328  lw          $v0, 0x328($a3)
    ctx->pc = 0x27350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
label_273510:
    // 0x273510: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x273510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x273514: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x273514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x273518: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x273518u;
    {
        const bool branch_taken_0x273518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273518) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273520u;
    // 0x273520: 0x8ce20298  lw          $v0, 0x298($a3)
    ctx->pc = 0x273520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
    // 0x273524: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x273524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x273528: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x273528u;
    {
        const bool branch_taken_0x273528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273528) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273530u;
    // 0x273530: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273530u;
    SET_GPR_U32(ctx, 31, 0x273538u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273530u, 0x273538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273538u;
label_273538:
    // 0x273538: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x273538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27353c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x273540: 0x84830398  lh          $v1, 0x398($a0)
    ctx->pc = 0x273540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 920)));
    // 0x273544: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273548u;
    {
        const bool branch_taken_0x273548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273548u;
        // 0x27354c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273548) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273550u;
    // 0x273550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273554: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x273554u;
    {
        const bool branch_taken_0x273554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273554u;
        // 0x273558: 0xac8300e8  sw          $v1, 0xE8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273554) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x27355Cu;
    // 0x27355c: 0x0  nop
    ctx->pc = 0x27355cu;
    // NOP
label_273560:
    // 0x273560: 0xc09ca28  jal         func_2728A0
    ctx->pc = 0x273560u;
    SET_GPR_U32(ctx, 31, 0x273568u);
    ctx->pc = 0x2728A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2728A0u, 0x273560u, 0x273568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273568u;
label_273568:
    // 0x273568: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x273568u;
    {
        const bool branch_taken_0x273568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273568u;
        // 0x27356c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273568) {
            ctx->pc = 0x27358Cu;
            goto label_27358c;
        }
    }
    ctx->pc = 0x273570u;
    // 0x273570: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x273570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x273574: 0x240567d1  addiu       $a1, $zero, 0x67D1
    ctx->pc = 0x273574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26577));
    // 0x273578: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x273578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x27357c: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x27357cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x273580: 0x1465004f  bne         $v1, $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x273580u;
    {
        const bool branch_taken_0x273580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x273584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273580u;
        // 0x273584: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273580) {
            ctx->pc = 0x2736C0u;
            goto label_2736c0;
        }
    }
    ctx->pc = 0x273588u;
    // 0x273588: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_27358c:
    // 0x27358c: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x27358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x273590: 0x144000c8  bnez        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x273590u;
    {
        const bool branch_taken_0x273590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273590u;
        // 0x273594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273590) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273598u;
    // 0x273598: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x273598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x27359c: 0x144000c5  bnez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x27359Cu;
    {
        const bool branch_taken_0x27359c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2735A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27359Cu;
        // 0x2735a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27359c) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2735A4u;
    // 0x2735a4: 0x8c6300e8  lw          $v1, 0xE8($v1)
    ctx->pc = 0x2735a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x2735a8: 0x146000c2  bnez        $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2735A8u;
    {
        const bool branch_taken_0x2735a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2735ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A8u;
        // 0x2735ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735a8) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2735B0u;
    // 0x2735b0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2735B0u;
    SET_GPR_U32(ctx, 31, 0x2735B8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2735B0u, 0x2735B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735B8u;
label_2735b8:
    // 0x2735b8: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2735b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2735bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2735bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2735c0: 0x84e30356  lh          $v1, 0x356($a3)
    ctx->pc = 0x2735c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 854)));
    // 0x2735c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2735c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2735c8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2735C8u;
    {
        const bool branch_taken_0x2735c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2735c8) {
            ctx->pc = 0x2735CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2735C8u;
            // 0x2735cc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273640u;
            goto label_273640;
        }
    }
    ctx->pc = 0x2735D0u;
    // 0x2735d0: 0xc09d3b6  jal         func_274ED8
    ctx->pc = 0x2735D0u;
    SET_GPR_U32(ctx, 31, 0x2735D8u);
    ctx->pc = 0x274ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274ED8u, 0x2735D0u, 0x2735D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735D8u;
label_2735d8:
    // 0x2735d8: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2735d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2735dc: 0x84e303a8  lh          $v1, 0x3A8($a3)
    ctx->pc = 0x2735dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 936)));
    // 0x2735e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2735e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2735e4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2735E4u;
    {
        const bool branch_taken_0x2735e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2735e4) {
            ctx->pc = 0x2735E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2735E4u;
            // 0x2735e8: 0x8ce202a0  lw          $v0, 0x2A0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273610u;
            goto label_273610;
        }
    }
    ctx->pc = 0x2735ECu;
    // 0x2735ec: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2735ECu;
    SET_GPR_U32(ctx, 31, 0x2735F4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2735ECu, 0x2735F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735F4u;
label_2735f4:
    // 0x2735f4: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2735f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2735f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2735f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2735fc: 0x84e303aa  lh          $v1, 0x3AA($a3)
    ctx->pc = 0x2735fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 938)));
    // 0x273600: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273604: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x273604u;
    {
        const bool branch_taken_0x273604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273604u;
        // 0x273608: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273604) {
            ctx->pc = 0x273640u;
            goto label_273640;
        }
    }
    ctx->pc = 0x27360Cu;
    // 0x27360c: 0x8ce202a0  lw          $v0, 0x2A0($a3)
    ctx->pc = 0x27360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 672)));
label_273610:
    // 0x273610: 0x2842001f  slti        $v0, $v0, 0x1F
    ctx->pc = 0x273610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x273614: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x273614u;
    {
        const bool branch_taken_0x273614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273614u;
        // 0x273618: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273614) {
            ctx->pc = 0x273650u;
            goto label_273650;
        }
    }
    ctx->pc = 0x27361Cu;
    // 0x27361c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x27361Cu;
    SET_GPR_U32(ctx, 31, 0x273624u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x27361Cu, 0x273624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273624u;
label_273624:
    // 0x273624: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x273624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273628: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x273628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27362c: 0x84e30358  lh          $v1, 0x358($a3)
    ctx->pc = 0x27362cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 856)));
    // 0x273630: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273634: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273634u;
    {
        const bool branch_taken_0x273634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273634u;
        // 0x273638: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273634) {
            ctx->pc = 0x273650u;
            goto label_273650;
        }
    }
    ctx->pc = 0x27363Cu;
    // 0x27363c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_273640:
    // 0x273640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273644: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x273644u;
    {
        const bool branch_taken_0x273644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273644u;
        // 0x273648: 0xace300e8  sw          $v1, 0xE8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273644) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x27364Cu;
    // 0x27364c: 0x0  nop
    ctx->pc = 0x27364cu;
    // NOP
label_273650:
    // 0x273650: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x273650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x273654: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x273654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x273658: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x273658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x27365c: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x27365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x273660: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x273660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x273664: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x273664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x273668: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x273668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x27366c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x27366Cu;
    {
        const bool branch_taken_0x27366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27366c) {
            ctx->pc = 0x273670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27366Cu;
            // 0x273670: 0x8ce20094  lw          $v0, 0x94($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2736C4u;
            goto label_2736c4;
        }
    }
    ctx->pc = 0x273674u;
    // 0x273674: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273674u;
    SET_GPR_U32(ctx, 31, 0x27367Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273674u, 0x27367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27367Cu;
label_27367c:
    // 0x27367c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x27367cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x273680: 0x24c38858  addiu       $v1, $a2, -0x77A8
    ctx->pc = 0x273680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x273684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273688: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x273688u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A888Cu));
    // 0x27368c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x273690: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x273690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273694: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x273694u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x273698: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x273698u;
    {
        const bool branch_taken_0x273698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273698) {
            ctx->pc = 0x27369Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273698u;
            // 0x27369c: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2736A8u;
            goto label_2736a8;
        }
    }
    ctx->pc = 0x2736A0u;
    // 0x2736a0: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2736a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2736a4: 0x1010  mfhi        $v0
    ctx->pc = 0x2736a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2736a8:
    // 0x2736a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2736A8u;
    {
        const bool branch_taken_0x2736a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2736ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736A8u;
        // 0x2736ac: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736a8) {
            ctx->pc = 0x2736C0u;
            goto label_2736c0;
        }
    }
    ctx->pc = 0x2736B0u;
    // 0x2736b0: 0x24c28858  addiu       $v0, $a2, -0x77A8
    ctx->pc = 0x2736b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x2736b4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2736b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2736b8: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2736B8u;
    {
        const bool branch_taken_0x2736b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2736BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736B8u;
        // 0x2736bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736b8) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2736C0u;
label_2736c0:
    // 0x2736c0: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x2736c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
label_2736c4:
    // 0x2736c4: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2736c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2736c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2736C8u;
    {
        const bool branch_taken_0x2736c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2736c8) {
            ctx->pc = 0x2736CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2736C8u;
            // 0x2736cc: 0x8ce20288  lw          $v0, 0x288($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2736ECu;
            goto label_2736ec;
        }
    }
    ctx->pc = 0x2736D0u;
    // 0x2736d0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2736D0u;
    SET_GPR_U32(ctx, 31, 0x2736D8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2736D0u, 0x2736D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736D8u;
label_2736d8:
    // 0x2736d8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2736d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2736dc: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2736DCu;
    {
        const bool branch_taken_0x2736dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736DCu;
        // 0x2736e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736dc) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2736E4u;
    // 0x2736e4: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2736e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2736e8: 0x8ce20288  lw          $v0, 0x288($a3)
    ctx->pc = 0x2736e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 648)));
label_2736ec:
    // 0x2736ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2736ECu;
    {
        const bool branch_taken_0x2736ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2736ec) {
            ctx->pc = 0x273708u;
            goto label_273708;
        }
    }
    ctx->pc = 0x2736F4u;
    // 0x2736f4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2736F4u;
    SET_GPR_U32(ctx, 31, 0x2736FCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2736F4u, 0x2736FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736FCu;
label_2736fc:
    // 0x2736fc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2736fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x273700: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x273700u;
    {
        const bool branch_taken_0x273700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273700u;
        // 0x273704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273700) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273708u;
label_273708:
    // 0x273708: 0xc09d3b6  jal         func_274ED8
    ctx->pc = 0x273708u;
    SET_GPR_U32(ctx, 31, 0x273710u);
    ctx->pc = 0x274ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274ED8u, 0x273708u, 0x273710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273710u;
label_273710:
    // 0x273710: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273710u;
    SET_GPR_U32(ctx, 31, 0x273718u);
    ctx->pc = 0x273714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273710u;
    // 0x273714: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273710u, 0x273718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273718u;
label_273718:
    // 0x273718: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x273718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x27371c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x27371cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273720: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x273720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273724: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x273724u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x273728: 0x8ce403c8  lw          $a0, 0x3C8($a3)
    ctx->pc = 0x273728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
    // 0x27372c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x27372cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x273730: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x273730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273734: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x273734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x273738: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x273738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x27373c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x27373cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x273740: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x273740u;
    {
        const bool branch_taken_0x273740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273740u;
        // 0x273744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273740) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273748u;
    // 0x273748: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x273748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x27374c: 0x8ce4027c  lw          $a0, 0x27C($a3)
    ctx->pc = 0x27374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 636)));
    // 0x273750: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x273750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x273754: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x273754u;
    {
        const bool branch_taken_0x273754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x273758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273754u;
        // 0x273758: 0x8ce200c0  lw          $v0, 0xC0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273754) {
            ctx->pc = 0x273788u;
            goto label_273788;
        }
    }
    ctx->pc = 0x27375Cu;
    // 0x27375c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x27375Cu;
    {
        const bool branch_taken_0x27375c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27375c) {
            ctx->pc = 0x273760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27375Cu;
            // 0x273760: 0x8ce202a0  lw          $v0, 0x2A0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2737B4u;
            goto label_2737b4;
        }
    }
    ctx->pc = 0x273764u;
    // 0x273764: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273764u;
    SET_GPR_U32(ctx, 31, 0x27376Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273764u, 0x27376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27376Cu;
label_27376c:
    // 0x27376c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x27376cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273770: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x273770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x273774: 0x84e4035c  lh          $a0, 0x35C($a3)
    ctx->pc = 0x273774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 860)));
    // 0x273778: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x273778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27377c: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x27377Cu;
    {
        const bool branch_taken_0x27377c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27377Cu;
        // 0x273780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27377c) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273784u;
    // 0x273784: 0x8ce200c0  lw          $v0, 0xC0($a3)
    ctx->pc = 0x273784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
label_273788:
    // 0x273788: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x273788u;
    {
        const bool branch_taken_0x273788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273788) {
            ctx->pc = 0x27378Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273788u;
            // 0x27378c: 0x8ce202a0  lw          $v0, 0x2A0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2737B4u;
            goto label_2737b4;
        }
    }
    ctx->pc = 0x273790u;
    // 0x273790: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273790u;
    SET_GPR_U32(ctx, 31, 0x273798u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273790u, 0x273798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273798u;
label_273798:
    // 0x273798: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x273798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27379c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2737a0: 0x84e3035a  lh          $v1, 0x35A($a3)
    ctx->pc = 0x2737a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 858)));
    // 0x2737a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2737a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2737a8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2737A8u;
    {
        const bool branch_taken_0x2737a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2737a8) {
            ctx->pc = 0x2737ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2737A8u;
            // 0x2737ac: 0x8ce30330  lw          $v1, 0x330($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2737E4u;
            goto label_2737e4;
        }
    }
    ctx->pc = 0x2737B0u;
    // 0x2737b0: 0x8ce202a0  lw          $v0, 0x2A0($a3)
    ctx->pc = 0x2737b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 672)));
label_2737b4:
    // 0x2737b4: 0x2842001f  slti        $v0, $v0, 0x1F
    ctx->pc = 0x2737b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2737b8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2737B8u;
    {
        const bool branch_taken_0x2737b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2737b8) {
            ctx->pc = 0x2737BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2737B8u;
            // 0x2737bc: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273810u;
            goto label_273810;
        }
    }
    ctx->pc = 0x2737C0u;
    // 0x2737c0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2737C0u;
    SET_GPR_U32(ctx, 31, 0x2737C8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2737C0u, 0x2737C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737C8u;
label_2737c8:
    // 0x2737c8: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2737c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2737cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2737ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2737d0: 0x84e3035c  lh          $v1, 0x35C($a3)
    ctx->pc = 0x2737d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 860)));
    // 0x2737d4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2737d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2737d8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2737D8u;
    {
        const bool branch_taken_0x2737d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2737d8) {
            ctx->pc = 0x2737DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2737D8u;
            // 0x2737dc: 0x8ce20298  lw          $v0, 0x298($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273810u;
            goto label_273810;
        }
    }
    ctx->pc = 0x2737E0u;
    // 0x2737e0: 0x8ce30330  lw          $v1, 0x330($a3)
    ctx->pc = 0x2737e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
label_2737e4:
    // 0x2737e4: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x2737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x2737e8: 0x54620032  bnel        $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2737E8u;
    {
        const bool branch_taken_0x2737e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2737e8) {
            ctx->pc = 0x2737ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2737E8u;
            // 0x2737ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2737F0u;
    // 0x2737f0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2737F0u;
    SET_GPR_U32(ctx, 31, 0x2737F8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2737F0u, 0x2737F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737F8u;
label_2737f8:
    // 0x2737f8: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2737f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2737fc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2737FCu;
    {
        const bool branch_taken_0x2737fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737FCu;
        // 0x273800: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737fc) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273804u;
    // 0x273804: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x273804u;
    {
        const bool branch_taken_0x273804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273804u;
        // 0x273808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273804) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x27380Cu;
    // 0x27380c: 0x0  nop
    ctx->pc = 0x27380cu;
    // NOP
label_273810:
    // 0x273810: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x273810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x273814: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x273814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x273818: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x273818u;
    {
        const bool branch_taken_0x273818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273818u;
        // 0x27381c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273818) {
            ctx->pc = 0x273840u;
            goto label_273840;
        }
    }
    ctx->pc = 0x273820u;
    // 0x273820: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x273820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x273824: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x273824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x273828: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x273828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x27382c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27382Cu;
    {
        const bool branch_taken_0x27382c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27382Cu;
        // 0x273830: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27382c) {
            ctx->pc = 0x273840u;
            goto label_273840;
        }
    }
    ctx->pc = 0x273834u;
    // 0x273834: 0x8ce20320  lw          $v0, 0x320($a3)
    ctx->pc = 0x273834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x273838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x273838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27383c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x27383cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_273840:
    // 0x273840: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x273840u;
    {
        const bool branch_taken_0x273840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273840u;
        // 0x273844: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273840) {
            ctx->pc = 0x2738B0u;
            goto label_2738b0;
        }
    }
    ctx->pc = 0x273848u;
    // 0x273848: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x273848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x27384c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27384Cu;
    {
        const bool branch_taken_0x27384c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x273850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27384Cu;
        // 0x273850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27384c) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273854u;
    // 0x273854: 0x8ce20320  lw          $v0, 0x320($a3)
    ctx->pc = 0x273854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x273858: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x273858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27385c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273860: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x273860u;
    {
        const bool branch_taken_0x273860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273860u;
        // 0x273864: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273860) {
            ctx->pc = 0x2738B0u;
            goto label_2738b0;
        }
    }
    ctx->pc = 0x273868u;
    // 0x273868: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x273868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x27386c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x27386Cu;
    {
        const bool branch_taken_0x27386c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27386Cu;
        // 0x273870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27386c) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273874u;
    // 0x273874: 0x8ce20074  lw          $v0, 0x74($a3)
    ctx->pc = 0x273874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x273878: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x273878u;
    {
        const bool branch_taken_0x273878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273878u;
        // 0x27387c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273878) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273880u;
    // 0x273880: 0x8ce30330  lw          $v1, 0x330($a3)
    ctx->pc = 0x273880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
    // 0x273884: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x273884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x273888: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x273888u;
    {
        const bool branch_taken_0x273888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273888) {
            ctx->pc = 0x27388Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273888u;
            // 0x27388c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273890u;
    // 0x273890: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273890u;
    SET_GPR_U32(ctx, 31, 0x273898u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273890u, 0x273898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273898u;
label_273898:
    // 0x273898: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27389c: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x27389cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2738a0: 0x8465035e  lh          $a1, 0x35E($v1)
    ctx->pc = 0x2738a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 862)));
    // 0x2738a4: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x2738a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2738a8: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2738A8u;
    {
        const bool branch_taken_0x2738a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2738ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738A8u;
        // 0x2738ac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738a8) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2738B0u;
label_2738b0:
    // 0x2738b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2738b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2738b4:
    // 0x2738b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2738b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2738b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2738b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2738bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2738BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2738C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738BCu;
        // 0x2738c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2738BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2738C4u;
    // 0x2738c4: 0x0  nop
    ctx->pc = 0x2738c4u;
    // NOP
    ctx->pc = 0x2738c8u;
}
