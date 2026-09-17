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

// Function: sub_00498FC0
// Address: 0x498fc0 - 0x499150
void sub_00498FC0_0x498fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498FC0_0x498fc0");
#endif

    switch (ctx->pc) {
        case 0x499050u: goto label_499050;
        case 0x4990e4u: goto label_4990e4;
        case 0x4990f0u: goto label_4990f0;
        case 0x4990fcu: goto label_4990fc;
        case 0x499104u: goto label_499104;
        case 0x49910cu: goto label_49910c;
        case 0x499114u: goto label_499114;
        case 0x499120u: goto label_499120;
        default: break;
    }

    ctx->pc = 0x498fc0u;

    // 0x498fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x498fc4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x498fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x498fc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x498fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x498fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x498fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498fd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x498fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x498fd4: 0x24660b28  addiu       $a2, $v1, 0xB28
    ctx->pc = 0x498fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2856));
    // 0x498fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x498fdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x498fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x498fe0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x498fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x498fe4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x498fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x498fe8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x498fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B28u));
    // 0x498fec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498ff0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498ff4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x498ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x498ff8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498ffc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x498ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x499000: 0x8624011c  lh          $a0, 0x11C($s1)
    ctx->pc = 0x499000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x499004: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x499004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x499008: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x499008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49900c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x499010: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x499010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x499014: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x499014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x499018: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x499018u;
    {
        const bool branch_taken_0x499018 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499018u;
        // 0x49901c: 0x26290122  addiu       $t1, $s1, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499018) {
            ctx->pc = 0x4990B8u;
            goto label_4990b8;
        }
    }
    ctx->pc = 0x499020u;
    // 0x499020: 0x26280120  addiu       $t0, $s1, 0x120
    ctx->pc = 0x499020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x499024: 0x2627011e  addiu       $a3, $s1, 0x11E
    ctx->pc = 0x499024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 286));
    // 0x499028: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x499028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49902c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x49902cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x499030: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x499030u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499034: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x499034u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x499038: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x499038u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49903c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x49903cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499040: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x499040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499044: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x499044u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x499048: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x499048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49904c: 0x0  nop
    ctx->pc = 0x49904cu;
    // NOP
label_499050:
    // 0x499050: 0x106e000b  beq         $v1, $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x499050u;
    {
        const bool branch_taken_0x499050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 14));
        ctx->pc = 0x499054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499050u;
        // 0x499054: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x499050) {
            ctx->pc = 0x499080u;
            goto label_499080;
        }
    }
    ctx->pc = 0x499058u;
    // 0x499058: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x499058u;
    {
        const bool branch_taken_0x499058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499058) {
            ctx->pc = 0x499070u;
            goto label_499070;
        }
    }
    ctx->pc = 0x499060u;
    // 0x499060: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x499060u;
    {
        const bool branch_taken_0x499060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x499060) {
            ctx->pc = 0x499064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499060u;
            // 0x499064: 0xa5650000  sh          $a1, 0x0($t3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499084u;
            goto label_499084;
        }
    }
    ctx->pc = 0x499068u;
    // 0x499068: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x499068u;
    {
        const bool branch_taken_0x499068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499068u;
        // 0x49906c: 0x84820000  lh          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499068) {
            ctx->pc = 0x499088u;
            goto label_499088;
        }
    }
    ctx->pc = 0x499070u;
label_499070:
    // 0x499070: 0x506d0004  beql        $v1, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x499070u;
    {
        const bool branch_taken_0x499070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        if (branch_taken_0x499070) {
            ctx->pc = 0x499074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499070u;
            // 0x499074: 0xa4c50000  sh          $a1, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499084u;
            goto label_499084;
        }
    }
    ctx->pc = 0x499078u;
    // 0x499078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x499078u;
    {
        const bool branch_taken_0x499078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499078u;
        // 0x49907c: 0x84820000  lh          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499078) {
            ctx->pc = 0x499088u;
            goto label_499088;
        }
    }
    ctx->pc = 0x499080u;
label_499080:
    // 0x499080: 0xa5450000  sh          $a1, 0x0($t2)
    ctx->pc = 0x499080u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 5));
label_499084:
    // 0x499084: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x499084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_499088:
    // 0x499088: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x499088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49908c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x499090: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x499090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x499094: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x499098: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49909c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49909cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4990a0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4990a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4990a4: 0x443ffea  bgezl       $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4990A4u;
    {
        const bool branch_taken_0x4990a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4990a4) {
            ctx->pc = 0x4990A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4990A4u;
            // 0x4990a8: 0x84830000  lh          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499050;
        }
    }
    ctx->pc = 0x4990ACu;
    // 0x4990ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4990ACu;
    {
        const bool branch_taken_0x4990ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4990B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990ACu;
        // 0x4990b0: 0x84e20000  lh          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4990ac) {
            ctx->pc = 0x4990C4u;
            goto label_4990c4;
        }
    }
    ctx->pc = 0x4990B4u;
    // 0x4990b4: 0x0  nop
    ctx->pc = 0x4990b4u;
    // NOP
label_4990b8:
    // 0x4990b8: 0x26280120  addiu       $t0, $s1, 0x120
    ctx->pc = 0x4990b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x4990bc: 0x2627011e  addiu       $a3, $s1, 0x11E
    ctx->pc = 0x4990bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 286));
    // 0x4990c0: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4990c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4990c4:
    // 0x4990c4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4990c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4990c8: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4990c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4990cc: 0xa60222ba  sh          $v0, 0x22BA($s0)
    ctx->pc = 0x4990ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F93Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F93Au, _value); } while (0);
    // 0x4990d0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4990d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4990d4: 0xa60222bc  sh          $v0, 0x22BC($s0)
    ctx->pc = 0x4990d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F93Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F93Cu, _value); } while (0);
    // 0x4990d8: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4990d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4990dc: 0xc124d04  jal         func_493410
    ctx->pc = 0x4990DCu;
    SET_GPR_U32(ctx, 31, 0x4990E4u);
    ctx->pc = 0x4990E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4990DCu;
    // 0x4990e0: 0xa60222be  sh          $v0, 0x22BE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8894), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493410u, 0x4990DCu, 0x4990E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4990E4u;
label_4990e4:
    // 0x4990e4: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x4990e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x4990e8: 0xc124910  jal         func_492440
    ctx->pc = 0x4990E8u;
    SET_GPR_U32(ctx, 31, 0x4990F0u);
    ctx->pc = 0x4990ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4990E8u;
    // 0x4990ec: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4990E8u, 0x4990F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4990F0u;
label_4990f0:
    // 0x4990f0: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x4990f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x4990f4: 0xc124910  jal         func_492440
    ctx->pc = 0x4990F4u;
    SET_GPR_U32(ctx, 31, 0x4990FCu);
    ctx->pc = 0x4990F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4990F4u;
    // 0x4990f8: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4990F4u, 0x4990FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4990FCu;
label_4990fc:
    // 0x4990fc: 0xc124910  jal         func_492440
    ctx->pc = 0x4990FCu;
    SET_GPR_U32(ctx, 31, 0x499104u);
    ctx->pc = 0x499100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4990FCu;
    // 0x499100: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4990FCu, 0x499104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499104u;
label_499104:
    // 0x499104: 0xc129632  jal         func_4A58C8
    ctx->pc = 0x499104u;
    SET_GPR_U32(ctx, 31, 0x49910Cu);
    ctx->pc = 0x499108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499104u;
    // 0x499108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A58C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A58C8u, 0x499104u, 0x49910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49910Cu;
label_49910c:
    // 0x49910c: 0xc123392  jal         func_48CE48
    ctx->pc = 0x49910Cu;
    SET_GPR_U32(ctx, 31, 0x499114u);
    ctx->pc = 0x499110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49910Cu;
    // 0x499110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x49910Cu, 0x499114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499114u;
label_499114:
    // 0x499114: 0x2404005e  addiu       $a0, $zero, 0x5E
    ctx->pc = 0x499114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x499118: 0xc123bd2  jal         func_48EF48
    ctx->pc = 0x499118u;
    SET_GPR_U32(ctx, 31, 0x499120u);
    ctx->pc = 0x49911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499118u;
    // 0x49911c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF48u, 0x499118u, 0x499120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499120u;
label_499120:
    // 0x499120: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x499120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x499124: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x499124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x499128: 0x2604000e  addiu       $a0, $s0, 0xE
    ctx->pc = 0x499128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x49912c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49912cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x499130: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x499130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x499134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x499134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49913c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x499140: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x499140u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499144: 0x3e00008  jr          $ra
    ctx->pc = 0x499144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499144u;
        // 0x499148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49914Cu;
    // 0x49914c: 0x0  nop
    ctx->pc = 0x49914cu;
    // NOP
    ctx->pc = 0x499150u;
}
