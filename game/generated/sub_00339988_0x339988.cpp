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

// Function: sub_00339988
// Address: 0x339988 - 0x339a20
void sub_00339988_0x339988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339988_0x339988");
#endif

    switch (ctx->pc) {
        case 0x339a10u: goto label_339a10;
        default: break;
    }

    ctx->pc = 0x339988u;

    // 0x339988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33998c: 0xc78c964c  lwc1        $f12, -0x69B4($gp)
    ctx->pc = 0x33998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x339990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339994: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x339998: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x339998u;
    {
        const bool branch_taken_0x339998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339998) {
            ctx->pc = 0x3399FCu;
            goto label_3399fc;
        }
    }
    ctx->pc = 0x3399A0u;
    // 0x3399a0: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x3399a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3399a4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3399a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3399a8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3399A8u;
    {
        const bool branch_taken_0x3399a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3399ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399A8u;
        // 0x3399ac: 0x2c620032  sltiu       $v0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399a8) {
            ctx->pc = 0x3399FCu;
            goto label_3399fc;
        }
    }
    ctx->pc = 0x3399B0u;
    // 0x3399b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3399B0u;
    {
        const bool branch_taken_0x3399b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3399B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399B0u;
        // 0x3399b4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399b0) {
            ctx->pc = 0x3399D0u;
            goto label_3399d0;
        }
    }
    ctx->pc = 0x3399B8u;
    // 0x3399b8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3399b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3399bc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3399BCu;
    {
        const bool branch_taken_0x3399bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3399bc) {
            ctx->pc = 0x3399E8u;
            goto label_3399e8;
        }
    }
    ctx->pc = 0x3399C4u;
    // 0x3399c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3399C4u;
    {
        const bool branch_taken_0x3399c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3399c4) {
            ctx->pc = 0x3399FCu;
            goto label_3399fc;
        }
    }
    ctx->pc = 0x3399CCu;
    // 0x3399cc: 0x0  nop
    ctx->pc = 0x3399ccu;
    // NOP
label_3399d0:
    // 0x3399d0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3399D0u;
    {
        const bool branch_taken_0x3399d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3399D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399D0u;
        // 0x3399d4: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399d0) {
            ctx->pc = 0x3399F8u;
            goto label_3399f8;
        }
    }
    ctx->pc = 0x3399D8u;
    // 0x3399d8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3399D8u;
    {
        const bool branch_taken_0x3399d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3399d8) {
            ctx->pc = 0x3399F8u;
            goto label_3399f8;
        }
    }
    ctx->pc = 0x3399E0u;
    // 0x3399e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3399E0u;
    {
        const bool branch_taken_0x3399e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3399e0) {
            ctx->pc = 0x3399FCu;
            goto label_3399fc;
        }
    }
    ctx->pc = 0x3399E8u;
label_3399e8:
    // 0x3399e8: 0xc78c9650  lwc1        $f12, -0x69B0($gp)
    ctx->pc = 0x3399e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3399ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3399ECu;
    {
        const bool branch_taken_0x3399ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3399ec) {
            ctx->pc = 0x3399FCu;
            goto label_3399fc;
        }
    }
    ctx->pc = 0x3399F4u;
    // 0x3399f4: 0x0  nop
    ctx->pc = 0x3399f4u;
    // NOP
label_3399f8:
    // 0x3399f8: 0xc78c9654  lwc1        $f12, -0x69AC($gp)
    ctx->pc = 0x3399f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3399fc:
    // 0x3399fc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x3399fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x339a00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x339a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x339a04: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x339a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x339a08: 0xc0c6ada  jal         func_31AB68
    ctx->pc = 0x339A08u;
    SET_GPR_U32(ctx, 31, 0x339A10u);
    ctx->pc = 0x339A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339A08u;
    // 0x339a0c: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB68u, 0x339A08u, 0x339A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339A10u;
label_339a10:
    // 0x339a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339a14: 0x3e00008  jr          $ra
    ctx->pc = 0x339A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A14u;
        // 0x339a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339A1Cu;
    // 0x339a1c: 0x0  nop
    ctx->pc = 0x339a1cu;
    // NOP
    ctx->pc = 0x339a20u;
}
