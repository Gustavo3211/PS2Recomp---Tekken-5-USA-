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

// Function: sub_0022C900
// Address: 0x22c900 - 0x22ca90
void sub_0022C900_0x22c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C900_0x22c900");
#endif

    switch (ctx->pc) {
        case 0x22c944u: goto label_22c944;
        case 0x22c950u: goto label_22c950;
        case 0x22c980u: goto label_22c980;
        case 0x22c9d0u: goto label_22c9d0;
        case 0x22c9f8u: goto label_22c9f8;
        case 0x22ca4cu: goto label_22ca4c;
        default: break;
    }

    ctx->pc = 0x22c900u;

    // 0x22c900: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x22c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
    // 0x22c904: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22c904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22c908: 0xffb50448  sd          $s5, 0x448($sp)
    ctx->pc = 0x22c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 21));
    // 0x22c90c: 0xffb00420  sd          $s0, 0x420($sp)
    ctx->pc = 0x22c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 16));
    // 0x22c910: 0xffb10428  sd          $s1, 0x428($sp)
    ctx->pc = 0x22c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 17));
    // 0x22c914: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x22c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x22c918: 0xffb30438  sd          $s3, 0x438($sp)
    ctx->pc = 0x22c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 19));
    // 0x22c91c: 0xffb40440  sd          $s4, 0x440($sp)
    ctx->pc = 0x22c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 20));
    // 0x22c920: 0xffb60450  sd          $s6, 0x450($sp)
    ctx->pc = 0x22c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 22));
    // 0x22c924: 0xffb70458  sd          $s7, 0x458($sp)
    ctx->pc = 0x22c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 23));
    // 0x22c928: 0xffbe0460  sd          $fp, 0x460($sp)
    ctx->pc = 0x22c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 30));
    // 0x22c92c: 0xffbf0468  sd          $ra, 0x468($sp)
    ctx->pc = 0x22c92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 31));
    // 0x22c930: 0xafa50404  sw          $a1, 0x404($sp)
    ctx->pc = 0x22c930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 5));
    // 0x22c934: 0x8c559288  lw          $s5, -0x6D78($v0)
    ctx->pc = 0x22c934u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x159288u));
    // 0x22c938: 0x8c9e0054  lw          $fp, 0x54($a0)
    ctx->pc = 0x22c938u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x22c93c: 0xc0987f6  jal         func_261FD8
    ctx->pc = 0x22C93Cu;
    SET_GPR_U32(ctx, 31, 0x22C944u);
    ctx->pc = 0x22C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C93Cu;
    // 0x22c940: 0xafa00408  sw          $zero, 0x408($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261FD8u, 0x22C93Cu, 0x22C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C944u;
label_22c944:
    // 0x22c944: 0x8fa20404  lw          $v0, 0x404($sp)
    ctx->pc = 0x22c944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x22c948: 0x18400046  blez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x22C948u;
    {
        const bool branch_taken_0x22c948 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C948u;
        // 0x22c94c: 0xdfb00420  ld          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c948) {
            ctx->pc = 0x22CA64u;
            goto label_22ca64;
        }
    }
    ctx->pc = 0x22C950u;
label_22c950:
    // 0x22c950: 0x8eb40020  lw          $s4, 0x20($s5)
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x22c954: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x22c954u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c958: 0x2a820015  slti        $v0, $s4, 0x15
    ctx->pc = 0x22c958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x22c95c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C95Cu;
    {
        const bool branch_taken_0x22c95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C95Cu;
        // 0x22c960: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c95c) {
            ctx->pc = 0x22C974u;
            goto label_22c974;
        }
    }
    ctx->pc = 0x22C964u;
    // 0x22c964: 0x2a820029  slti        $v0, $s4, 0x29
    ctx->pc = 0x22c964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22c968: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x22c968u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c96c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c970: 0x82600a  movz        $t4, $a0, $v0
    ctx->pc = 0x22c970u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
label_22c974:
    // 0x22c974: 0x1860002c  blez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x22C974u;
    {
        const bool branch_taken_0x22c974 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C974u;
        // 0x22c978: 0xafbd0400  sw          $sp, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c974) {
            ctx->pc = 0x22CA28u;
            goto label_22ca28;
        }
    }
    ctx->pc = 0x22C97Cu;
    // 0x22c97c: 0x8fc30068  lw          $v1, 0x68($fp)
    ctx->pc = 0x22c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 104)));
label_22c980:
    // 0x22c980: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x22c980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x22c984: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22c988: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x22c988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22c98c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x22C98Cu;
    {
        const bool branch_taken_0x22c98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C98Cu;
        // 0x22c990: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c98c) {
            ctx->pc = 0x22CA2Cu;
            goto label_22ca2c;
        }
    }
    ctx->pc = 0x22C994u;
    // 0x22c994: 0x8eb30024  lw          $s3, 0x24($s5)
    ctx->pc = 0x22c994u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x22c998: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x22c998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x22c99c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c9a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C9A0u;
    {
        const bool branch_taken_0x22c9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9A0u;
        // 0x22c9a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9a0) {
            ctx->pc = 0x22C9ACu;
            goto label_22c9ac;
        }
    }
    ctx->pc = 0x22C9A8u;
    // 0x22c9a8: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x22c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_22c9ac:
    // 0x22c9ac: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x22c9acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22c9b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22c9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9b4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x22c9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9b8: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x22c9b8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x22c9bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22c9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9c0: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x22C9C0u;
    {
        const bool branch_taken_0x22c9c0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9C0u;
        // 0x22c9c4: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9c0) {
            ctx->pc = 0x22CA08u;
            goto label_22ca08;
        }
    }
    ctx->pc = 0x22C9C8u;
    // 0x22c9c8: 0x27b70400  addiu       $s7, $sp, 0x400
    ctx->pc = 0x22c9c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x22c9cc: 0x0  nop
    ctx->pc = 0x22c9ccu;
    // NOP
label_22c9d0:
    // 0x22c9d0: 0x8fab0408  lw          $t3, 0x408($sp)
    ctx->pc = 0x22c9d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x22c9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9d8: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x22c9d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22c9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22c9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9e4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x22c9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9e8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x22c9e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9ec: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x22c9ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9f0: 0xc08b1fc  jal         func_22C7F0
    ctx->pc = 0x22C9F0u;
    SET_GPR_U32(ctx, 31, 0x22C9F8u);
    ctx->pc = 0x22C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9F0u;
    // 0x22c9f4: 0x7fac0410  sq          $t4, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7F0u, 0x22C9F0u, 0x22C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9F8u;
label_22c9f8:
    // 0x22c9f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22c9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22c9fc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x22c9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x22ca00: 0x1e20fff3  bgtz        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x22CA00u;
    {
        const bool branch_taken_0x22ca00 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA00u;
        // 0x22ca04: 0x7bac0410  lq          $t4, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca00) {
            ctx->pc = 0x22C9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c9d0;
        }
    }
    ctx->pc = 0x22CA08u;
label_22ca08:
    // 0x22ca08: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CA08u;
    {
        const bool branch_taken_0x22ca08 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x22CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA08u;
        // 0x22ca0c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca08) {
            ctx->pc = 0x22CA20u;
            goto label_22ca20;
        }
    }
    ctx->pc = 0x22CA10u;
    // 0x22ca10: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x22ca10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x22ca14: 0xaeb60028  sw          $s6, 0x28($s5)
    ctx->pc = 0x22ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 22));
    // 0x22ca18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22ca18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca1c: 0xaeb30024  sw          $s3, 0x24($s5)
    ctx->pc = 0x22ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 19));
label_22ca20:
    // 0x22ca20: 0x5e80ffd7  bgtzl       $s4, . + 4 + (-0x29 << 2)
    ctx->pc = 0x22CA20u;
    {
        const bool branch_taken_0x22ca20 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x22ca20) {
            ctx->pc = 0x22CA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CA20u;
            // 0x22ca24: 0x8fc30068  lw          $v1, 0x68($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c980;
        }
    }
    ctx->pc = 0x22CA28u;
label_22ca28:
    // 0x22ca28: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x22ca28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_22ca2c:
    // 0x22ca2c: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x22ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x22ca30: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x22ca30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x22ca34: 0x27de0070  addiu       $fp, $fp, 0x70
    ctx->pc = 0x22ca34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x22ca38: 0x8fa40404  lw          $a0, 0x404($sp)
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x22ca3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22ca3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22ca44: 0xc09880c  jal         func_262030
    ctx->pc = 0x22CA44u;
    SET_GPR_U32(ctx, 31, 0x22CA4Cu);
    ctx->pc = 0x22CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA44u;
    // 0x22ca48: 0xafa20404  sw          $v0, 0x404($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262030u, 0x22CA44u, 0x22CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA4Cu;
label_22ca4c:
    // 0x22ca4c: 0x8fa40408  lw          $a0, 0x408($sp)
    ctx->pc = 0x22ca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x22ca50: 0x8fa20404  lw          $v0, 0x404($sp)
    ctx->pc = 0x22ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x22ca54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22ca58: 0x1c40ffbd  bgtz        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x22CA58u;
    {
        const bool branch_taken_0x22ca58 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x22CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA58u;
        // 0x22ca5c: 0xafa40408  sw          $a0, 0x408($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca58) {
            ctx->pc = 0x22C950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c950;
        }
    }
    ctx->pc = 0x22CA60u;
    // 0x22ca60: 0xdfb00420  ld          $s0, 0x420($sp)
    ctx->pc = 0x22ca60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_22ca64:
    // 0x22ca64: 0xdfb10428  ld          $s1, 0x428($sp)
    ctx->pc = 0x22ca64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x22ca68: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x22ca68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x22ca6c: 0xdfb30438  ld          $s3, 0x438($sp)
    ctx->pc = 0x22ca6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x22ca70: 0xdfb40440  ld          $s4, 0x440($sp)
    ctx->pc = 0x22ca70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x22ca74: 0xdfb50448  ld          $s5, 0x448($sp)
    ctx->pc = 0x22ca74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x22ca78: 0xdfb60450  ld          $s6, 0x450($sp)
    ctx->pc = 0x22ca78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x22ca7c: 0xdfb70458  ld          $s7, 0x458($sp)
    ctx->pc = 0x22ca7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x22ca80: 0xdfbe0460  ld          $fp, 0x460($sp)
    ctx->pc = 0x22ca80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x22ca84: 0xdfbf0468  ld          $ra, 0x468($sp)
    ctx->pc = 0x22ca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x22ca88: 0x3e00008  jr          $ra
    ctx->pc = 0x22CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA88u;
        // 0x22ca8c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CA90u;
}
