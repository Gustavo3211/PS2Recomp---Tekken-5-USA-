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

// Function: sub_0032A578
// Address: 0x32a578 - 0x32a608
void sub_0032A578_0x32a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A578_0x32a578");
#endif

    switch (ctx->pc) {
        case 0x32a5d0u: goto label_32a5d0;
        case 0x32a5dcu: goto label_32a5dc;
        case 0x32a5ecu: goto label_32a5ec;
        default: break;
    }

    ctx->pc = 0x32a578u;

    // 0x32a578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a57c: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x32a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x32a580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a588: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32a588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32a58c: 0x26120130  addiu       $s2, $s0, 0x130
    ctx->pc = 0x32a58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x32a590: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32a590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32a594: 0x261301f0  addiu       $s3, $s0, 0x1F0
    ctx->pc = 0x32a594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x32a598: 0x24635a80  addiu       $v1, $v1, 0x5A80
    ctx->pc = 0x32a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23168));
    // 0x32a59c: 0x26060220  addiu       $a2, $s0, 0x220
    ctx->pc = 0x32a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x32a5a0: 0x26070248  addiu       $a3, $s0, 0x248
    ctx->pc = 0x32a5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
    // 0x32a5a4: 0x26020270  addiu       $v0, $s0, 0x270
    ctx->pc = 0x32a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x32a5a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32a5ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32a5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a5b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32a5b4: 0xae130244  sw          $s3, 0x244($s0)
    ctx->pc = 0x32a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 19));
    // 0x32a5b8: 0xae120294  sw          $s2, 0x294($s0)
    ctx->pc = 0x32a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 18));
    // 0x32a5bc: 0xae10026c  sw          $s0, 0x26C($s0)
    ctx->pc = 0x32a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 16));
    // 0x32a5c0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x32a5c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1E5A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E5A88u, _value); } while (0);
    // 0x32a5c4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32a5c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1E5A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E5A80u, _value); } while (0);
    // 0x32a5c8: 0xc0ca7ca  jal         func_329F28
    ctx->pc = 0x32A5C8u;
    SET_GPR_U32(ctx, 31, 0x32A5D0u);
    ctx->pc = 0x32A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5C8u;
    // 0x32a5cc: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F28u, 0x32A5C8u, 0x32A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5D0u;
label_32a5d0:
    // 0x32a5d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32a5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a5d4: 0xc0ca882  jal         func_32A208
    ctx->pc = 0x32A5D4u;
    SET_GPR_U32(ctx, 31, 0x32A5DCu);
    ctx->pc = 0x32A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5D4u;
    // 0x32a5d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A208u, 0x32A5D4u, 0x32A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5DCu;
label_32a5dc:
    // 0x32a5dc: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x32a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x32a5e0: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x32a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x32a5e4: 0xc0ca94a  jal         func_32A528
    ctx->pc = 0x32A5E4u;
    SET_GPR_U32(ctx, 31, 0x32A5ECu);
    ctx->pc = 0x32A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5E4u;
    // 0x32a5e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A528u, 0x32A5E4u, 0x32A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5ECu;
label_32a5ec:
    // 0x32a5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a5f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a5f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32a5f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a5f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32a5f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32a5fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a600: 0x3e00008  jr          $ra
    ctx->pc = 0x32A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A600u;
        // 0x32a604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A608u;
}
