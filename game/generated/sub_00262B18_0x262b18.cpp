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

// Function: sub_00262B18
// Address: 0x262b18 - 0x262b80
void sub_00262B18_0x262b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262B18_0x262b18");
#endif

    switch (ctx->pc) {
        case 0x262b40u: goto label_262b40;
        case 0x262b58u: goto label_262b58;
        default: break;
    }

    ctx->pc = 0x262b18u;

    // 0x262b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262b1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x262b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x262b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262b24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x262b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x262b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x262b2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x262b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x262b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x262b34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x262b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b38: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x262b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x262b3c: 0x0  nop
    ctx->pc = 0x262b3cu;
    // NOP
label_262b40:
    // 0x262b40: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x262b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x262b44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x262b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262b48: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x262b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x262b4c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x262b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262b50: 0xc098a9a  jal         func_262A68
    ctx->pc = 0x262B50u;
    SET_GPR_U32(ctx, 31, 0x262B58u);
    ctx->pc = 0x262B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B50u;
    // 0x262b54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A68u, 0x262B50u, 0x262B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B58u;
label_262b58:
    // 0x262b58: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x262b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x262b5c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x262B5Cu;
    {
        const bool branch_taken_0x262b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262b5c) {
            ctx->pc = 0x262B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262B5Cu;
            // 0x262b60: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262b40;
        }
    }
    ctx->pc = 0x262B64u;
    // 0x262b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x262b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x262b6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x262b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262b70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x262b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x262b74: 0x3e00008  jr          $ra
    ctx->pc = 0x262B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B74u;
        // 0x262b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262B7Cu;
    // 0x262b7c: 0x0  nop
    ctx->pc = 0x262b7cu;
    // NOP
    ctx->pc = 0x262b80u;
}
