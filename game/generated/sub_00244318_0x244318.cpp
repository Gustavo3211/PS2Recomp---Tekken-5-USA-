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

// Function: sub_00244318
// Address: 0x244318 - 0x244370
void sub_00244318_0x244318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244318_0x244318");
#endif

    switch (ctx->pc) {
        case 0x244344u: goto label_244344;
        default: break;
    }

    ctx->pc = 0x244318u;

    // 0x244318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24431c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244320: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x244320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x244324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24432c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244330: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x244334: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x244334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x244338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24433c: 0xc091014  jal         func_244050
    ctx->pc = 0x24433Cu;
    SET_GPR_U32(ctx, 31, 0x244344u);
    ctx->pc = 0x244340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24433Cu;
    // 0x244340: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244050u, 0x24433Cu, 0x244344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244344u;
label_244344:
    // 0x244344: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244348: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x244348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24434c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x244350: 0x8c426694  lw          $v0, 0x6694($v0)
    ctx->pc = 0x244350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26260)));
    // 0x244354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24435c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24435cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244364: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x244364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x244368: 0x3e00008  jr          $ra
    ctx->pc = 0x244368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244368u;
        // 0x24436c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244370u;
}
