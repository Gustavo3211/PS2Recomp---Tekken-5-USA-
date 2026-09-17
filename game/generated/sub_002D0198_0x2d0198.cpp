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

// Function: sub_002D0198
// Address: 0x2d0198 - 0x2d0358
void sub_002D0198_0x2d0198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0198_0x2d0198");
#endif

    switch (ctx->pc) {
        case 0x2d01dcu: goto label_2d01dc;
        case 0x2d0200u: goto label_2d0200;
        case 0x2d0280u: goto label_2d0280;
        case 0x2d02d8u: goto label_2d02d8;
        default: break;
    }

    ctx->pc = 0x2d0198u;

    // 0x2d0198: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d0198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d019c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d01a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d01a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d01a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d01a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d01a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d01b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d01b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d01b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d01b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d01b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d01bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d01c0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2d01c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d01c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d01c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d01c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d01cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d01ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d01d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d01d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d01d4: 0xc080b84  jal         func_202E10
    ctx->pc = 0x2D01D4u;
    SET_GPR_U32(ctx, 31, 0x2D01DCu);
    ctx->pc = 0x2D01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D01D4u;
    // 0x2d01d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E10u, 0x2D01D4u, 0x2D01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01DCu;
label_2d01dc:
    // 0x2d01dc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d01dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d01e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2d01e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d01e4: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D01E4u;
    {
        const bool branch_taken_0x2d01e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d01e4) {
            ctx->pc = 0x2D01E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D01E4u;
            // 0x2d01e8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D02ACu;
            goto label_2d02ac;
        }
    }
    ctx->pc = 0x2D01ECu;
    // 0x2d01ec: 0x34168005  ori         $s6, $zero, 0x8005
    ctx->pc = 0x2d01ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x2d01f0: 0x34158006  ori         $s5, $zero, 0x8006
    ctx->pc = 0x2d01f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x2d01f4: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x2d01f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d01f8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2d01f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d01fc: 0x0  nop
    ctx->pc = 0x2d01fcu;
    // NOP
label_2d0200:
    // 0x2d0200: 0x1456000b  bne         $v0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0200u;
    {
        const bool branch_taken_0x2d0200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d0200) {
            ctx->pc = 0x2D0230u;
            goto label_2d0230;
        }
    }
    ctx->pc = 0x2D0208u;
    // 0x2d0208: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2d0208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d020c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2d020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2d0210: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x2d0210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d0214: 0x8c8501b0  lw          $a1, 0x1B0($a0)
    ctx->pc = 0x2d0214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x2d0218: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d0218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d021c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0220: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d0220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0224: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0224u;
    {
        const bool branch_taken_0x2d0224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0224u;
        // 0x2d0228: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0224) {
            ctx->pc = 0x2D0240u;
            goto label_2d0240;
        }
    }
    ctx->pc = 0x2D022Cu;
    // 0x2d022c: 0x0  nop
    ctx->pc = 0x2d022cu;
    // NOP
label_2d0230:
    // 0x2d0230: 0x54550004  bnel        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0230u;
    {
        const bool branch_taken_0x2d0230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2d0230) {
            ctx->pc = 0x2D0234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0230u;
            // 0x2d0234: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0244u;
            goto label_2d0244;
        }
    }
    ctx->pc = 0x2D0238u;
    // 0x2d0238: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D0238u;
    {
        const bool branch_taken_0x2d0238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0238u;
        // 0x2d023c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0238) {
            ctx->pc = 0x2D0298u;
            goto label_2d0298;
        }
    }
    ctx->pc = 0x2D0240u;
label_2d0240:
    // 0x2d0240: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x2d0240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_2d0244:
    // 0x2d0244: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2d0244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d0248: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0248u;
    {
        const bool branch_taken_0x2d0248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0248) {
            ctx->pc = 0x2D024Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0248u;
            // 0x2d024c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D029Cu;
            goto label_2d029c;
        }
    }
    ctx->pc = 0x2D0250u;
    // 0x2d0250: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x2d0250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2d0254: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x2d0254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d0258: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0258u;
    {
        const bool branch_taken_0x2d0258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0258) {
            ctx->pc = 0x2D025Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0258u;
            // 0x2d025c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D029Cu;
            goto label_2d029c;
        }
    }
    ctx->pc = 0x2D0260u;
    // 0x2d0260: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x2d0260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2d0264: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d0264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d0268: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D0268u;
    {
        const bool branch_taken_0x2d0268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0268) {
            ctx->pc = 0x2D026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0268u;
            // 0x2d026c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D029Cu;
            goto label_2d029c;
        }
    }
    ctx->pc = 0x2D0270u;
    // 0x2d0270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0278: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x2D0278u;
    SET_GPR_U32(ctx, 31, 0x2D0280u);
    ctx->pc = 0x2D027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0278u;
    // 0x2d027c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x2D0278u, 0x2D0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0280u;
label_2d0280:
    // 0x2d0280: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0280u;
    {
        const bool branch_taken_0x2d0280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0280) {
            ctx->pc = 0x2D0284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0280u;
            // 0x2d0284: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D029Cu;
            goto label_2d029c;
        }
    }
    ctx->pc = 0x2D0288u;
    // 0x2d0288: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x2d0288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2d028c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2d028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2d0290: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0290u;
    {
        const bool branch_taken_0x2d0290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0290) {
            ctx->pc = 0x2D0294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0290u;
            // 0x2d0294: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D02ACu;
            goto label_2d02ac;
        }
    }
    ctx->pc = 0x2D0298u;
label_2d0298:
    // 0x2d0298: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2d0298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2d029c:
    // 0x2d029c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d029cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d02a0: 0x1474ffd7  bne         $v1, $s4, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2D02A0u;
    {
        const bool branch_taken_0x2d02a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2D02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02A0u;
        // 0x2d02a4: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02a0) {
            ctx->pc = 0x2D0200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0200;
        }
    }
    ctx->pc = 0x2D02A8u;
    // 0x2d02a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d02ac:
    // 0x2d02ac: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x2d02acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x2d02b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d02b4: 0x54640010  bnel        $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D02B4u;
    {
        const bool branch_taken_0x2d02b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d02b4) {
            ctx->pc = 0x2D02B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D02B4u;
            // 0x2d02b8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D02F8u;
            goto label_2d02f8;
        }
    }
    ctx->pc = 0x2D02BCu;
    // 0x2d02bc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d02bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d02c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2d02c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d02c4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D02C4u;
    {
        const bool branch_taken_0x2d02c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d02c4) {
            ctx->pc = 0x2D02C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D02C4u;
            // 0x2d02c8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D02F8u;
            goto label_2d02f8;
        }
    }
    ctx->pc = 0x2D02CCu;
    // 0x2d02cc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2d02ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d02d0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2d02d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2d02d4: 0x0  nop
    ctx->pc = 0x2d02d4u;
    // NOP
label_2d02d8:
    // 0x2d02d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2d02d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d02dc: 0x0  nop
    ctx->pc = 0x2d02dcu;
    // NOP
    // 0x2d02e0: 0x0  nop
    ctx->pc = 0x2d02e0u;
    // NOP
    // 0x2d02e4: 0x0  nop
    ctx->pc = 0x2d02e4u;
    // NOP
    // 0x2d02e8: 0x0  nop
    ctx->pc = 0x2d02e8u;
    // NOP
    // 0x2d02ec: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D02ECu;
    {
        const bool branch_taken_0x2d02ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d02ec) {
            ctx->pc = 0x2D02F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D02ECu;
            // 0x2d02f0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D02D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d02d8;
        }
    }
    ctx->pc = 0x2D02F4u;
    // 0x2d02f4: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x2d02f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_2d02f8:
    // 0x2d02f8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d02f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d02fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D02FCu;
    {
        const bool branch_taken_0x2d02fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02FCu;
        // 0x2d0300: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02fc) {
            ctx->pc = 0x2D0328u;
            goto label_2d0328;
        }
    }
    ctx->pc = 0x2D0304u;
    // 0x2d0304: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d0304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d0308: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0308u;
    {
        const bool branch_taken_0x2d0308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0308u;
        // 0x2d030c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0308) {
            ctx->pc = 0x2D032Cu;
            goto label_2d032c;
        }
    }
    ctx->pc = 0x2D0310u;
    // 0x2d0310: 0x862202c4  lh          $v0, 0x2C4($s1)
    ctx->pc = 0x2d0310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 708)));
    // 0x2d0314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0314u;
    {
        const bool branch_taken_0x2d0314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0314u;
        // 0x2d0318: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0314) {
            ctx->pc = 0x2D032Cu;
            goto label_2d032c;
        }
    }
    ctx->pc = 0x2D031Cu;
    // 0x2d031c: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x2D031Cu;
    {
        const bool branch_taken_0x2d031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D031Cu;
        // 0x2d0320: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d031c) {
            ctx->pc = 0x2D01DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d01dc;
        }
    }
    ctx->pc = 0x2D0324u;
    // 0x2d0324: 0x0  nop
    ctx->pc = 0x2d0324u;
    // NOP
label_2d0328:
    // 0x2d0328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d032c:
    // 0x2d032c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d032cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0334: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d0334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0338: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d0338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d033c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d033cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0340: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d0340u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d0344: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d0344u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0348: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d0348u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d034c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0350: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0350u;
        // 0x2d0354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0358u;
}
