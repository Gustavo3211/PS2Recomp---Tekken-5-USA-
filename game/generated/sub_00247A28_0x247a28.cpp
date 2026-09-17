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

// Function: sub_00247A28
// Address: 0x247a28 - 0x247ab8
void sub_00247A28_0x247a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247A28_0x247a28");
#endif

    switch (ctx->pc) {
        case 0x247a5cu: goto label_247a5c;
        default: break;
    }

    ctx->pc = 0x247a28u;

    // 0x247a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247a38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247a3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x247a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x247a40: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x247a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x247a44: 0x8e120074  lw          $s2, 0x74($s0)
    ctx->pc = 0x247a44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x247a48: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x247a48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x247a4c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x247A4Cu;
    {
        const bool branch_taken_0x247a4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A4Cu;
        // 0x247a50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a4c) {
            ctx->pc = 0x247A94u;
            goto label_247a94;
        }
    }
    ctx->pc = 0x247A54u;
    // 0x247a54: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x247A54u;
    SET_GPR_U32(ctx, 31, 0x247A5Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x247A54u, 0x247A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A5Cu;
label_247a5c:
    // 0x247a5c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x247a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x247a60: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x247a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x247a64: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x247a64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x247a68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x247a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x247a6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x247a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x247a70: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x247a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x247a74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x247a78: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x247a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x247a7c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x247a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x247a80: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x247a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x247a84: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x247a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x247a88: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x247a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x247a8c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x247a8cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x247a90: 0x21bc3  sra         $v1, $v0, 15
    ctx->pc = 0x247a90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 15));
label_247a94:
    // 0x247a94: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x247a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x247a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x247aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247aa4: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x247aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x247aa8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x247AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AB0u;
        // 0x247ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247AB8u;
}
