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

// Function: sub_00329F90
// Address: 0x329f90 - 0x329fe0
void sub_00329F90_0x329f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329F90_0x329f90");
#endif

    ctx->pc = 0x329f90u;

    // 0x329f90: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x329f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x329f94: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x329f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x329f98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x329f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x329f9c: 0x2ca50007  sltiu       $a1, $a1, 0x7
    ctx->pc = 0x329f9cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x329fa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x329fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x329fa4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x329fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x329fa8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x329fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329fac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x329facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329fb0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329FB0u;
    {
        const bool branch_taken_0x329fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FB0u;
        // 0x329fb4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fb0) {
            ctx->pc = 0x329FD4u;
            goto label_329fd4;
        }
    }
    ctx->pc = 0x329FB8u;
    // 0x329fb8: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x329fb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x329fbc: 0xe44d0000  swc1        $f13, 0x0($v0)
    ctx->pc = 0x329fbcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x329fc0: 0xe4ce0008  swc1        $f14, 0x8($a2)
    ctx->pc = 0x329fc0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x329fc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x329fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x329fc8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x329fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x329fcc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x329fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x329fd0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x329fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_329fd4:
    // 0x329fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x329FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329FDCu;
    // 0x329fdc: 0x0  nop
    ctx->pc = 0x329fdcu;
    // NOP
    ctx->pc = 0x329fe0u;
}
