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

// Function: sub_003623B0
// Address: 0x3623b0 - 0x362448
void sub_003623B0_0x3623b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003623B0_0x3623b0");
#endif

    switch (ctx->pc) {
        case 0x3623dcu: goto label_3623dc;
        case 0x362420u: goto label_362420;
        case 0x362428u: goto label_362428;
        default: break;
    }

    ctx->pc = 0x3623b0u;

    // 0x3623b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3623b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3623b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3623b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3623b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3623b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3623bc: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x3623bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x3623c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3623c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3623c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3623c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3623c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3623C8u;
    {
        const bool branch_taken_0x3623c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3623CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623C8u;
        // 0x3623cc: 0x28660018  slti        $a2, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623c8) {
            ctx->pc = 0x3623E8u;
            goto label_3623e8;
        }
    }
    ctx->pc = 0x3623D0u;
    // 0x3623d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3623d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3623d4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3623D4u;
    SET_GPR_U32(ctx, 31, 0x3623DCu);
    ctx->pc = 0x3623D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3623D4u;
    // 0x3623d8: 0x248472f8  addiu       $a0, $a0, 0x72F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3623D4u, 0x3623DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3623DCu;
label_3623dc:
    // 0x3623dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3623DCu;
    {
        const bool branch_taken_0x3623dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623DCu;
        // 0x3623e0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623dc) {
            ctx->pc = 0x362438u;
            goto label_362438;
        }
    }
    ctx->pc = 0x3623E4u;
    // 0x3623e4: 0x0  nop
    ctx->pc = 0x3623e4u;
    // NOP
label_3623e8:
    // 0x3623e8: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3623E8u;
    {
        const bool branch_taken_0x3623e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3623e8) {
            ctx->pc = 0x3623ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3623E8u;
            // 0x3623ec: 0x2463ffe8  addiu       $v1, $v1, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362408u;
            goto label_362408;
        }
    }
    ctx->pc = 0x3623F0u;
    // 0x3623f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3623f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3623f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3623f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3623f8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3623f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3623fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3623FCu;
    {
        const bool branch_taken_0x3623fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623FCu;
        // 0x362400: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623fc) {
            ctx->pc = 0x362418u;
            goto label_362418;
        }
    }
    ctx->pc = 0x362404u;
    // 0x362404: 0x0  nop
    ctx->pc = 0x362404u;
    // NOP
label_362408:
    // 0x362408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36240c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x36240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x362410: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x362410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x362414: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_362418:
    // 0x362418: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x362418u;
    SET_GPR_U32(ctx, 31, 0x362420u);
    ctx->pc = 0x36241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362418u;
    // 0x36241c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x362418u, 0x362420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362420u;
label_362420:
    // 0x362420: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x362420u;
    SET_GPR_U32(ctx, 31, 0x362428u);
    ctx->pc = 0x362424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362420u;
    // 0x362424: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x362420u, 0x362428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362428u;
label_362428:
    // 0x362428: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x362428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36242c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x36242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x362430: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x362430u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x362434: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x362434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_362438:
    // 0x362438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36243c: 0x3e00008  jr          $ra
    ctx->pc = 0x36243Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36243Cu;
        // 0x362440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36243Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362444u;
    // 0x362444: 0x0  nop
    ctx->pc = 0x362444u;
    // NOP
    ctx->pc = 0x362448u;
}
