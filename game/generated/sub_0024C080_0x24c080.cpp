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

// Function: sub_0024C080
// Address: 0x24c080 - 0x24c0e8
void sub_0024C080_0x24c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C080_0x24c080");
#endif

    switch (ctx->pc) {
        case 0x24c0b0u: goto label_24c0b0;
        case 0x24c0c0u: goto label_24c0c0;
        default: break;
    }

    ctx->pc = 0x24c080u;

    // 0x24c080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c08c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c090: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24c090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c098: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24c098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c09c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24c0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0a4: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x24c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x24c0a8: 0xc086624  jal         func_219890
    ctx->pc = 0x24C0A8u;
    SET_GPR_U32(ctx, 31, 0x24C0B0u);
    ctx->pc = 0x24C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0A8u;
    // 0x24c0ac: 0xae32003c  sw          $s2, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x24C0A8u, 0x24C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0B0u;
label_24c0b0:
    // 0x24c0b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C0B0u;
    {
        const bool branch_taken_0x24c0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0B0u;
        // 0x24c0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c0b0) {
            ctx->pc = 0x24C0C8u;
            goto label_24c0c8;
        }
    }
    ctx->pc = 0x24C0B8u;
    // 0x24c0b8: 0xc086644  jal         func_219910
    ctx->pc = 0x24C0B8u;
    SET_GPR_U32(ctx, 31, 0x24C0C0u);
    ctx->pc = 0x24C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0B8u;
    // 0x24c0bc: 0xae320040  sw          $s2, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x24C0B8u, 0x24C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0C0u;
label_24c0c0:
    // 0x24c0c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C0C0u;
    {
        const bool branch_taken_0x24c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0C0u;
        // 0x24c0c4: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c0c0) {
            ctx->pc = 0x24C0D0u;
            goto label_24c0d0;
        }
    }
    ctx->pc = 0x24C0C8u;
label_24c0c8:
    // 0x24c0c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c0cc: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x24c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_24c0d0:
    // 0x24c0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c0d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c0d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c0dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24c0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x24C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0E0u;
        // 0x24c0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C0E8u;
}
