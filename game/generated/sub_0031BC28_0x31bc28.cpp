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

// Function: sub_0031BC28
// Address: 0x31bc28 - 0x31bc90
void sub_0031BC28_0x31bc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BC28_0x31bc28");
#endif

    switch (ctx->pc) {
        case 0x31bc58u: goto label_31bc58;
        case 0x31bc70u: goto label_31bc70;
        case 0x31bc7cu: goto label_31bc7c;
        default: break;
    }

    ctx->pc = 0x31bc28u;

    // 0x31bc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31bc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31bc2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31bc30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31bc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31bc38: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x31bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x31bc3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31BC3Cu;
    {
        const bool branch_taken_0x31bc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC3Cu;
        // 0x31bc40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc3c) {
            ctx->pc = 0x31BC60u;
            goto label_31bc60;
        }
    }
    ctx->pc = 0x31BC44u;
    // 0x31bc44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31bc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31bc48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31bc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bc4c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x31bc50: 0xc0c744a  jal         func_31D128
    ctx->pc = 0x31BC50u;
    SET_GPR_U32(ctx, 31, 0x31BC58u);
    ctx->pc = 0x31BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC50u;
    // 0x31bc54: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D128u, 0x31BC50u, 0x31BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC58u;
label_31bc58:
    // 0x31bc58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31BC58u;
    {
        const bool branch_taken_0x31bc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC58u;
        // 0x31bc5c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc58) {
            ctx->pc = 0x31BC80u;
            goto label_31bc80;
        }
    }
    ctx->pc = 0x31BC60u;
label_31bc60:
    // 0x31bc60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31bc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31bc64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31bc64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31bc68: 0xc0c73aa  jal         func_31CEA8
    ctx->pc = 0x31BC68u;
    SET_GPR_U32(ctx, 31, 0x31BC70u);
    ctx->pc = 0x31BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC68u;
    // 0x31bc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEA8u, 0x31BC68u, 0x31BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC70u;
label_31bc70:
    // 0x31bc70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31bc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc74: 0xc0c73ae  jal         func_31CEB8
    ctx->pc = 0x31BC74u;
    SET_GPR_U32(ctx, 31, 0x31BC7Cu);
    ctx->pc = 0x31BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC74u;
    // 0x31bc78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEB8u, 0x31BC74u, 0x31BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC7Cu;
label_31bc7c:
    // 0x31bc7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31bc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31bc80:
    // 0x31bc80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31bc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31bc84: 0x3e00008  jr          $ra
    ctx->pc = 0x31BC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC84u;
        // 0x31bc88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BC8Cu;
    // 0x31bc8c: 0x0  nop
    ctx->pc = 0x31bc8cu;
    // NOP
    ctx->pc = 0x31bc90u;
}
