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

// Function: sub_002EC740
// Address: 0x2ec740 - 0x2ec7f8
void sub_002EC740_0x2ec740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC740_0x2ec740");
#endif

    switch (ctx->pc) {
        case 0x2ec740u: goto label_2ec740;
        case 0x2ec744u: goto label_2ec744;
        case 0x2ec748u: goto label_2ec748;
        case 0x2ec74cu: goto label_2ec74c;
        case 0x2ec750u: goto label_2ec750;
        case 0x2ec754u: goto label_2ec754;
        case 0x2ec758u: goto label_2ec758;
        case 0x2ec75cu: goto label_2ec75c;
        case 0x2ec760u: goto label_2ec760;
        case 0x2ec764u: goto label_2ec764;
        case 0x2ec768u: goto label_2ec768;
        case 0x2ec76cu: goto label_2ec76c;
        case 0x2ec770u: goto label_2ec770;
        case 0x2ec774u: goto label_2ec774;
        case 0x2ec778u: goto label_2ec778;
        case 0x2ec77cu: goto label_2ec77c;
        case 0x2ec780u: goto label_2ec780;
        case 0x2ec784u: goto label_2ec784;
        case 0x2ec788u: goto label_2ec788;
        case 0x2ec78cu: goto label_2ec78c;
        case 0x2ec790u: goto label_2ec790;
        case 0x2ec794u: goto label_2ec794;
        case 0x2ec798u: goto label_2ec798;
        case 0x2ec79cu: goto label_2ec79c;
        case 0x2ec7a0u: goto label_2ec7a0;
        case 0x2ec7a4u: goto label_2ec7a4;
        case 0x2ec7a8u: goto label_2ec7a8;
        case 0x2ec7acu: goto label_2ec7ac;
        case 0x2ec7b0u: goto label_2ec7b0;
        case 0x2ec7b4u: goto label_2ec7b4;
        case 0x2ec7b8u: goto label_2ec7b8;
        case 0x2ec7bcu: goto label_2ec7bc;
        case 0x2ec7c0u: goto label_2ec7c0;
        case 0x2ec7c4u: goto label_2ec7c4;
        case 0x2ec7c8u: goto label_2ec7c8;
        case 0x2ec7ccu: goto label_2ec7cc;
        case 0x2ec7d0u: goto label_2ec7d0;
        case 0x2ec7d4u: goto label_2ec7d4;
        case 0x2ec7d8u: goto label_2ec7d8;
        case 0x2ec7dcu: goto label_2ec7dc;
        case 0x2ec7e0u: goto label_2ec7e0;
        case 0x2ec7e4u: goto label_2ec7e4;
        case 0x2ec7e8u: goto label_2ec7e8;
        case 0x2ec7ecu: goto label_2ec7ec;
        case 0x2ec7f0u: goto label_2ec7f0;
        case 0x2ec7f4u: goto label_2ec7f4;
        default: break;
    }

    ctx->pc = 0x2ec740u;

label_2ec740:
    // 0x2ec740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ec744:
    // 0x2ec744: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ec744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ec748:
    // 0x2ec748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ec74c:
    // 0x2ec74c: 0x24c50140  addiu       $a1, $a2, 0x140
    ctx->pc = 0x2ec74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_2ec750:
    // 0x2ec750: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ec750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ec754:
    // 0x2ec754: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ec758:
    if (ctx->pc == 0x2EC758u) {
        ctx->pc = 0x2EC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC754u;
        // 0x2ec758: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC75Cu;
        goto label_2ec75c;
    }
    ctx->pc = 0x2EC754u;
    {
        const bool branch_taken_0x2ec754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC754u;
        // 0x2ec758: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec754) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC75Cu;
label_2ec75c:
    // 0x2ec75c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ec75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ec760:
    // 0x2ec760: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ec764:
    // 0x2ec764: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ec768:
    if (ctx->pc == 0x2EC768u) {
        ctx->pc = 0x2EC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC764u;
        // 0x2ec768: 0x8ce20088  lw          $v0, 0x88($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC76Cu;
        goto label_2ec76c;
    }
    ctx->pc = 0x2EC764u;
    {
        const bool branch_taken_0x2ec764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec764) {
            ctx->pc = 0x2EC768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC764u;
            // 0x2ec768: 0x8ce20088  lw          $v0, 0x88($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC77Cu;
            goto label_2ec77c;
        }
    }
    ctx->pc = 0x2EC76Cu;
label_2ec76c:
    // 0x2ec76c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec76cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec770:
    // 0x2ec770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ec770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec774:
    // 0x2ec774: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ec778:
    // 0x2ec778: 0x8ce20088  lw          $v0, 0x88($a3)
    ctx->pc = 0x2ec778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_2ec77c:
    // 0x2ec77c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2ec780:
    if (ctx->pc == 0x2EC780u) {
        ctx->pc = 0x2EC784u;
        goto label_2ec784;
    }
    ctx->pc = 0x2EC77Cu;
    {
        const bool branch_taken_0x2ec77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec77c) {
            ctx->pc = 0x2EC7E0u;
            goto label_2ec7e0;
        }
    }
    ctx->pc = 0x2EC784u;
label_2ec784:
    // 0x2ec784: 0x8cc20104  lw          $v0, 0x104($a2)
    ctx->pc = 0x2ec784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
label_2ec788:
    // 0x2ec788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ec788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ec78c:
    // 0x2ec78c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ec78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2ec790:
    // 0x2ec790: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2ec790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2ec794:
    // 0x2ec794: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ec798:
    // 0x2ec798: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ec79c:
    if (ctx->pc == 0x2EC79Cu) {
        ctx->pc = 0x2EC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC798u;
        // 0x2ec79c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7A0u;
        goto label_2ec7a0;
    }
    ctx->pc = 0x2EC798u;
    {
        const bool branch_taken_0x2ec798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec798) {
            ctx->pc = 0x2EC79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC798u;
            // 0x2ec79c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC7B4u;
            goto label_2ec7b4;
        }
    }
    ctx->pc = 0x2EC7A0u;
label_2ec7a0:
    // 0x2ec7a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ec7a4:
    // 0x2ec7a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ec7a8:
    // 0x2ec7a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ec7ac:
    if (ctx->pc == 0x2EC7ACu) {
        ctx->pc = 0x2EC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7A8u;
        // 0x2ec7ac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7B0u;
        goto label_2ec7b0;
    }
    ctx->pc = 0x2EC7A8u;
    {
        const bool branch_taken_0x2ec7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7A8u;
        // 0x2ec7ac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7a8) {
            ctx->pc = 0x2EC7BCu;
            goto label_2ec7bc;
        }
    }
    ctx->pc = 0x2EC7B0u;
label_2ec7b0:
    // 0x2ec7b0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec7b4:
    // 0x2ec7b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec7b8:
    // 0x2ec7b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ec7bc:
    // 0x2ec7bc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ec7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ec7c0:
    // 0x2ec7c0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2ec7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2ec7c4:
    // 0x2ec7c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ec7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec7c8:
    // 0x2ec7c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ec7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ec7cc:
    // 0x2ec7cc: 0x60f809  jalr        $v1
label_2ec7d0:
    if (ctx->pc == 0x2EC7D0u) {
        ctx->pc = 0x2EC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7CCu;
        // 0x2ec7d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7D4u;
        goto label_2ec7d4;
    }
    ctx->pc = 0x2EC7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EC7D4u);
        ctx->pc = 0x2EC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7CCu;
        // 0x2ec7d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC7CCu, 0x2EC7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EC7D4u;
label_2ec7d4:
    // 0x2ec7d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ec7d8:
    if (ctx->pc == 0x2EC7D8u) {
        ctx->pc = 0x2EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7D4u;
        // 0x2ec7d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7DCu;
        goto label_2ec7dc;
    }
    ctx->pc = 0x2EC7D4u;
    {
        const bool branch_taken_0x2ec7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7D4u;
        // 0x2ec7d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7d4) {
            ctx->pc = 0x2EC7ECu;
            goto label_2ec7ec;
        }
    }
    ctx->pc = 0x2EC7DCu;
label_2ec7dc:
    // 0x2ec7dc: 0x0  nop
    ctx->pc = 0x2ec7dcu;
    // NOP
label_2ec7e0:
    // 0x2ec7e0: 0xc0bbe88  jal         func_2EFA20
label_2ec7e4:
    if (ctx->pc == 0x2EC7E4u) {
        ctx->pc = 0x2EC7E8u;
        goto label_2ec7e8;
    }
    ctx->pc = 0x2EC7E0u;
    SET_GPR_U32(ctx, 31, 0x2EC7E8u);
    ctx->pc = 0x2EFA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA20u, 0x2EC7E0u, 0x2EC7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7E8u;
label_2ec7e8:
    // 0x2ec7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ec7ec:
    // 0x2ec7ec: 0x3e00008  jr          $ra
label_2ec7f0:
    if (ctx->pc == 0x2EC7F0u) {
        ctx->pc = 0x2EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7ECu;
        // 0x2ec7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7F4u;
        goto label_2ec7f4;
    }
    ctx->pc = 0x2EC7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7ECu;
        // 0x2ec7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC7F4u;
label_2ec7f4:
    // 0x2ec7f4: 0x0  nop
    ctx->pc = 0x2ec7f4u;
    // NOP
    ctx->pc = 0x2ec7f8u;
}
