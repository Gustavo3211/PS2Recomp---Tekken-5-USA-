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

// Function: sub_00245C10
// Address: 0x245c10 - 0x245c98
void sub_00245C10_0x245c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245C10_0x245c10");
#endif

    switch (ctx->pc) {
        case 0x245c68u: goto label_245c68;
        default: break;
    }

    ctx->pc = 0x245c10u;

    // 0x245c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245c18: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x245c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x245c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x245c28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x245c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c2c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x245C2Cu;
    {
        const bool branch_taken_0x245c2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C2Cu;
        // 0x245c30: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c2c) {
            ctx->pc = 0x245C54u;
            goto label_245c54;
        }
    }
    ctx->pc = 0x245C34u;
    // 0x245c34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x245c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x245c38: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x245C38u;
    {
        const bool branch_taken_0x245c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C38u;
        // 0x245c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c38) {
            ctx->pc = 0x245C7Cu;
            goto label_245c7c;
        }
    }
    ctx->pc = 0x245C40u;
    // 0x245c40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x245c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x245c44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245C44u;
    {
        const bool branch_taken_0x245c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C44u;
        // 0x245c48: 0x52182b  sltu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c44) {
            ctx->pc = 0x245C54u;
            goto label_245c54;
        }
    }
    ctx->pc = 0x245C4Cu;
    // 0x245c4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x245C4Cu;
    {
        const bool branch_taken_0x245c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245c4c) {
            ctx->pc = 0x245C60u;
            goto label_245c60;
        }
    }
    ctx->pc = 0x245C54u;
label_245c54:
    // 0x245c54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x245C54u;
    {
        const bool branch_taken_0x245c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C54u;
        // 0x245c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c54) {
            ctx->pc = 0x245C7Cu;
            goto label_245c7c;
        }
    }
    ctx->pc = 0x245C5Cu;
    // 0x245c5c: 0x0  nop
    ctx->pc = 0x245c5cu;
    // NOP
label_245c60:
    // 0x245c60: 0xc0916be  jal         func_245AF8
    ctx->pc = 0x245C60u;
    SET_GPR_U32(ctx, 31, 0x245C68u);
    ctx->pc = 0x245C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C60u;
    // 0x245c64: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AF8u, 0x245C60u, 0x245C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C68u;
label_245c68:
    // 0x245c68: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x245c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x245c6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x245c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x245c70: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x245c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x245c74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x245c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x245c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245c7c:
    // 0x245c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245c80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245c84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x245c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245c88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x245c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x245C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C8Cu;
        // 0x245c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245C94u;
    // 0x245c94: 0x0  nop
    ctx->pc = 0x245c94u;
    // NOP
    ctx->pc = 0x245c98u;
}
