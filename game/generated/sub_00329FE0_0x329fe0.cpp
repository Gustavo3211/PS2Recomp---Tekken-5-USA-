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

// Function: sub_00329FE0
// Address: 0x329fe0 - 0x32a030
void sub_00329FE0_0x329fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329FE0_0x329fe0");
#endif

    ctx->pc = 0x329fe0u;

    // 0x329fe0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x329fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x329fe4: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x329fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x329fe8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x329fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x329fec: 0x2ca50007  sltiu       $a1, $a1, 0x7
    ctx->pc = 0x329fecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x329ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x329ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x329ff4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x329ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x329ff8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x329ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329ffc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x329ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a000: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32A000u;
    {
        const bool branch_taken_0x32a000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A000u;
        // 0x32a004: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a000) {
            ctx->pc = 0x32A024u;
            goto label_32a024;
        }
    }
    ctx->pc = 0x32A008u;
    // 0x32a008: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x32a008u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32a00c: 0xe44d0000  swc1        $f13, 0x0($v0)
    ctx->pc = 0x32a00cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32a010: 0xe4ce0008  swc1        $f14, 0x8($a2)
    ctx->pc = 0x32a010u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x32a014: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32a018: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x32a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x32a01c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x32a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x32a020: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x32a020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_32a024:
    // 0x32a024: 0x3e00008  jr          $ra
    ctx->pc = 0x32A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A02Cu;
    // 0x32a02c: 0x0  nop
    ctx->pc = 0x32a02cu;
    // NOP
    ctx->pc = 0x32a030u;
}
