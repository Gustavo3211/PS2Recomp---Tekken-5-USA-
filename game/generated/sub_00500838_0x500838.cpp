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

// Function: sub_00500838
// Address: 0x500838 - 0x500930
void sub_00500838_0x500838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500838_0x500838");
#endif

    switch (ctx->pc) {
        case 0x50085cu: goto label_50085c;
        case 0x5008e0u: goto label_5008e0;
        case 0x50090cu: goto label_50090c;
        default: break;
    }

    ctx->pc = 0x500838u;

    // 0x500838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x500838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50083c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x50083cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x500840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500844: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x500844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500848: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x500848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50084c: 0x8c44cfa8  lw          $a0, -0x3058($v0)
    ctx->pc = 0x50084cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFA8u));
    // 0x500850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x500850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x500854: 0xc13faee  jal         func_4FEBB8
    ctx->pc = 0x500854u;
    SET_GPR_U32(ctx, 31, 0x50085Cu);
    ctx->pc = 0x500858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500854u;
    // 0x500858: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEBB8u, 0x500854u, 0x50085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50085Cu;
label_50085c:
    // 0x50085c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50085cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x500860: 0x2484a640  addiu       $a0, $a0, -0x59C0
    ctx->pc = 0x500860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944320));
    // 0x500864: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x500864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x500868: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x500868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EA640u));
    // 0x50086c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x50086cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x500870: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x500870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x500874: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x500874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500878: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x500878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50087c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50087cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x500880: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x500880u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA644u));
    // 0x500884: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x500884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x500888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x500888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50088c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x50088cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x500890: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x500890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA648u));
    // 0x500894: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x500894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x500898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x500898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50089c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x50089cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x5008a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5008a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5008a4: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x5008a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5008a8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x5008a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x5008ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5008acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5008b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5008b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5008b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x5008b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5008b8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x5008b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5008bc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x5008bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x5008c0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x5008c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x5008c4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x5008c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5008c8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x5008c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5008cc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x5008ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x5008d0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x5008d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x5008d4: 0x3e00008  jr          $ra
    ctx->pc = 0x5008D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5008D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5008D4u;
        // 0x5008d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5008D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5008DCu;
    // 0x5008dc: 0x0  nop
    ctx->pc = 0x5008dcu;
    // NOP
label_5008e0:
    // 0x5008e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5008e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5008e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5008e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5008e8: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x5008e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x5008ec: 0x2610a6a0  addiu       $s0, $s0, -0x5960
    ctx->pc = 0x5008ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944416));
    // 0x5008f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5008f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5008f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x5008f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5008f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x5008f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5008fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5008fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500900: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x500900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x500904: 0xc13f8ea  jal         func_4FE3A8
    ctx->pc = 0x500904u;
    SET_GPR_U32(ctx, 31, 0x50090Cu);
    ctx->pc = 0x500908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500904u;
    // 0x500908: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE3A8u, 0x500904u, 0x50090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50090Cu;
label_50090c:
    // 0x50090c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x50090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x500910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500914: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x500914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500918: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50091c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50091cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500928: 0x814024c  j           func_500930
    ctx->pc = 0x500928u;
    ctx->pc = 0x50092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500928u;
    // 0x50092c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500930u;
    sub_00500930_0x500930(rdram, ctx, runtime); return;
    ctx->pc = 0x500930u;
}
