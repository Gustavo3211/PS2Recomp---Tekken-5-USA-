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

// Function: sub_003342C8
// Address: 0x3342c8 - 0x334370
void sub_003342C8_0x3342c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003342C8_0x3342c8");
#endif

    switch (ctx->pc) {
        case 0x33435cu: goto label_33435c;
        default: break;
    }

    ctx->pc = 0x3342c8u;

    // 0x3342c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3342c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3342cc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3342d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3342d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3342d4: 0x2447ff80  addiu       $a3, $v0, -0x80
    ctx->pc = 0x3342d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x3342d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3342d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3342dc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3342dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3342e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3342e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3342e4: 0x8ce30408  lw          $v1, 0x408($a3)
    ctx->pc = 0x3342e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440388u));
    // 0x3342e8: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x3342e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3342ec: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3342ECu;
    {
        const bool branch_taken_0x3342ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3342F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342ECu;
        // 0x3342f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3342ec) {
            ctx->pc = 0x334364u;
            goto label_334364;
        }
    }
    ctx->pc = 0x3342F4u;
    // 0x3342f4: 0x8ce30408  lw          $v1, 0x408($a3)
    ctx->pc = 0x3342f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1032)));
    // 0x3342f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3342f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3342fc: 0x8ce20408  lw          $v0, 0x408($a3)
    ctx->pc = 0x3342fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1032)));
    // 0x334300: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x334300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x334304: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x334304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x334308: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33430c: 0x24700200  addiu       $s0, $v1, 0x200
    ctx->pc = 0x33430cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x334310: 0xace20408  sw          $v0, 0x408($a3)
    ctx->pc = 0x334310u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1032), GPR_U32(ctx, 2));
    // 0x334314: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x334314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x334318: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x334318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x33431c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x33431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x334320: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x334320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x334324: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x334324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x334328: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x334328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x33432c: 0x8ce30408  lw          $v1, 0x408($a3)
    ctx->pc = 0x33432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1032)));
    // 0x334330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334334: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334334u;
    {
        const bool branch_taken_0x334334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x334338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334334u;
        // 0x334338: 0xace20400  sw          $v0, 0x400($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334334) {
            ctx->pc = 0x33435Cu;
            goto label_33435c;
        }
    }
    ctx->pc = 0x33433Cu;
    // 0x33433c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x33433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334340: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x334340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x334344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x334344u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u)); // MMIO: 0x1000a000
    // 0x334348: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x334348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x33434c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33434Cu;
    {
        const bool branch_taken_0x33434c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33434c) {
            ctx->pc = 0x334350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33434Cu;
            // 0x334350: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334360u;
            goto label_334360;
        }
    }
    ctx->pc = 0x334354u;
    // 0x334354: 0xc0cd278  jal         func_3349E0
    ctx->pc = 0x334354u;
    SET_GPR_U32(ctx, 31, 0x33435Cu);
    ctx->pc = 0x3349E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3349E0u, 0x334354u, 0x33435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33435Cu;
label_33435c:
    // 0x33435c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_334360:
    // 0x334360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334364:
    // 0x334364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x334364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334368: 0x3e00008  jr          $ra
    ctx->pc = 0x334368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334368u;
        // 0x33436c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334370u;
}
