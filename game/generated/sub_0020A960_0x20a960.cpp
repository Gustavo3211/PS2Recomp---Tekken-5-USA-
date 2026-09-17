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

// Function: sub_0020A960
// Address: 0x20a960 - 0x20add8
void sub_0020A960_0x20a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A960_0x20a960");
#endif

    switch (ctx->pc) {
        case 0x20a994u: goto label_20a994;
        case 0x20a9b8u: goto label_20a9b8;
        case 0x20a9dcu: goto label_20a9dc;
        case 0x20aa40u: goto label_20aa40;
        case 0x20aa54u: goto label_20aa54;
        case 0x20aa7cu: goto label_20aa7c;
        case 0x20aa8cu: goto label_20aa8c;
        case 0x20aad0u: goto label_20aad0;
        case 0x20aae8u: goto label_20aae8;
        case 0x20aaf8u: goto label_20aaf8;
        case 0x20ab2cu: goto label_20ab2c;
        case 0x20ab74u: goto label_20ab74;
        case 0x20aba4u: goto label_20aba4;
        case 0x20abe8u: goto label_20abe8;
        case 0x20ac88u: goto label_20ac88;
        case 0x20aca0u: goto label_20aca0;
        case 0x20acb0u: goto label_20acb0;
        case 0x20acdcu: goto label_20acdc;
        case 0x20ace4u: goto label_20ace4;
        case 0x20acecu: goto label_20acec;
        case 0x20acf4u: goto label_20acf4;
        case 0x20ad08u: goto label_20ad08;
        case 0x20ad14u: goto label_20ad14;
        case 0x20ad30u: goto label_20ad30;
        case 0x20ad44u: goto label_20ad44;
        case 0x20ad4cu: goto label_20ad4c;
        case 0x20ad54u: goto label_20ad54;
        case 0x20ad5cu: goto label_20ad5c;
        case 0x20ad64u: goto label_20ad64;
        case 0x20ad6cu: goto label_20ad6c;
        case 0x20ad78u: goto label_20ad78;
        case 0x20ad8cu: goto label_20ad8c;
        case 0x20ada0u: goto label_20ada0;
        case 0x20ada8u: goto label_20ada8;
        case 0x20adb4u: goto label_20adb4;
        default: break;
    }

    ctx->pc = 0x20a960u;

    // 0x20a960: 0x8f8298bc  lw          $v0, -0x6744($gp)
    ctx->pc = 0x20a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940860)));
    // 0x20a964: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a96c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a974: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20a974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a978: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a97c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20a980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20a984: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A984u;
    {
        const bool branch_taken_0x20a984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A984u;
        // 0x20a988: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a984) {
            ctx->pc = 0x20A9A4u;
            goto label_20a9a4;
        }
    }
    ctx->pc = 0x20A98Cu;
    // 0x20a98c: 0xc089622  jal         func_225888
    ctx->pc = 0x20A98Cu;
    SET_GPR_U32(ctx, 31, 0x20A994u);
    ctx->pc = 0x20A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A98Cu;
    // 0x20a990: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x20A98Cu, 0x20A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A994u;
label_20a994:
    // 0x20a994: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A994u;
    {
        const bool branch_taken_0x20a994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A994u;
        // 0x20a998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a994) {
            ctx->pc = 0x20A9A4u;
            goto label_20a9a4;
        }
    }
    ctx->pc = 0x20A99Cu;
    // 0x20a99c: 0xaf8098bc  sw          $zero, -0x6744($gp)
    ctx->pc = 0x20a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940860), GPR_U32(ctx, 0));
    // 0x20a9a0: 0xaf8298c4  sw          $v0, -0x673C($gp)
    ctx->pc = 0x20a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940868), GPR_U32(ctx, 2));
label_20a9a4:
    // 0x20a9a4: 0x8f8298c8  lw          $v0, -0x6738($gp)
    ctx->pc = 0x20a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940872)));
    // 0x20a9a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A9A8u;
    {
        const bool branch_taken_0x20a9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a9a8) {
            ctx->pc = 0x20A9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A9A8u;
            // 0x20a9ac: 0x8f8298b0  lw          $v0, -0x6750($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A9CCu;
            goto label_20a9cc;
        }
    }
    ctx->pc = 0x20A9B0u;
    // 0x20a9b0: 0xc0a946e  jal         func_2A51B8
    ctx->pc = 0x20A9B0u;
    SET_GPR_U32(ctx, 31, 0x20A9B8u);
    ctx->pc = 0x2A51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51B8u, 0x20A9B0u, 0x20A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9B8u;
label_20a9b8:
    // 0x20a9b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A9B8u;
    {
        const bool branch_taken_0x20a9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9B8u;
        // 0x20a9bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9b8) {
            ctx->pc = 0x20A9C8u;
            goto label_20a9c8;
        }
    }
    ctx->pc = 0x20A9C0u;
    // 0x20a9c0: 0xaf8098c8  sw          $zero, -0x6738($gp)
    ctx->pc = 0x20a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940872), GPR_U32(ctx, 0));
    // 0x20a9c4: 0xaf8298d0  sw          $v0, -0x6730($gp)
    ctx->pc = 0x20a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940880), GPR_U32(ctx, 2));
label_20a9c8:
    // 0x20a9c8: 0x8f8298b0  lw          $v0, -0x6750($gp)
    ctx->pc = 0x20a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940848)));
label_20a9cc:
    // 0x20a9cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A9CCu;
    {
        const bool branch_taken_0x20a9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a9cc) {
            ctx->pc = 0x20A9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A9CCu;
            // 0x20a9d0: 0x8f8298c0  lw          $v0, -0x6740($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A9F0u;
            goto label_20a9f0;
        }
    }
    ctx->pc = 0x20A9D4u;
    // 0x20a9d4: 0xc0b6aea  jal         func_2DABA8
    ctx->pc = 0x20A9D4u;
    SET_GPR_U32(ctx, 31, 0x20A9DCu);
    ctx->pc = 0x2DABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DABA8u, 0x20A9D4u, 0x20A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9DCu;
label_20a9dc:
    // 0x20a9dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A9DCu;
    {
        const bool branch_taken_0x20a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9DCu;
        // 0x20a9e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9dc) {
            ctx->pc = 0x20A9ECu;
            goto label_20a9ec;
        }
    }
    ctx->pc = 0x20A9E4u;
    // 0x20a9e4: 0xaf8098b0  sw          $zero, -0x6750($gp)
    ctx->pc = 0x20a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940848), GPR_U32(ctx, 0));
    // 0x20a9e8: 0xaf8298b8  sw          $v0, -0x6748($gp)
    ctx->pc = 0x20a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940856), GPR_U32(ctx, 2));
label_20a9ec:
    // 0x20a9ec: 0x8f8298c0  lw          $v0, -0x6740($gp)
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940864)));
label_20a9f0:
    // 0x20a9f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A9F0u;
    {
        const bool branch_taken_0x20a9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9F0u;
        // 0x20a9f4: 0x8f8298c4  lw          $v0, -0x673C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9f0) {
            ctx->pc = 0x20AA10u;
            goto label_20aa10;
        }
    }
    ctx->pc = 0x20A9F8u;
    // 0x20a9f8: 0x8f8298cc  lw          $v0, -0x6734($gp)
    ctx->pc = 0x20a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940876)));
    // 0x20a9fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A9FCu;
    {
        const bool branch_taken_0x20a9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9FCu;
        // 0x20aa00: 0x8f8298c4  lw          $v0, -0x673C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9fc) {
            ctx->pc = 0x20AA10u;
            goto label_20aa10;
        }
    }
    ctx->pc = 0x20AA04u;
    // 0x20aa04: 0x8f8298b4  lw          $v0, -0x674C($gp)
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940852)));
    // 0x20aa08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20AA08u;
    {
        const bool branch_taken_0x20aa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA08u;
        // 0x20aa0c: 0x8f8298c4  lw          $v0, -0x673C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa08) {
            ctx->pc = 0x20AA60u;
            goto label_20aa60;
        }
    }
    ctx->pc = 0x20AA10u;
label_20aa10:
    // 0x20aa10: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x20AA10u;
    {
        const bool branch_taken_0x20aa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA10u;
        // 0x20aa14: 0x8f8298d0  lw          $v0, -0x6730($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa10) {
            ctx->pc = 0x20ADB4u;
            goto label_20adb4;
        }
    }
    ctx->pc = 0x20AA18u;
    // 0x20aa18: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x20AA18u;
    {
        const bool branch_taken_0x20aa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA18u;
        // 0x20aa1c: 0x8f8298b8  lw          $v0, -0x6748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa18) {
            ctx->pc = 0x20ADB4u;
            goto label_20adb4;
        }
    }
    ctx->pc = 0x20AA20u;
    // 0x20aa20: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x20AA20u;
    {
        const bool branch_taken_0x20aa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA20u;
        // 0x20aa24: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa20) {
            ctx->pc = 0x20ADB4u;
            goto label_20adb4;
        }
    }
    ctx->pc = 0x20AA28u;
    // 0x20aa28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20aa2c: 0x268423b0  addiu       $a0, $s4, 0x23B0
    ctx->pc = 0x20aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 9136));
    // 0x20aa30: 0xaf8098cc  sw          $zero, -0x6734($gp)
    ctx->pc = 0x20aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940876), GPR_U32(ctx, 0));
    // 0x20aa34: 0xaf8098c0  sw          $zero, -0x6740($gp)
    ctx->pc = 0x20aa34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940864), GPR_U32(ctx, 0));
    // 0x20aa38: 0xc098336  jal         func_260CD8
    ctx->pc = 0x20AA38u;
    SET_GPR_U32(ctx, 31, 0x20AA40u);
    ctx->pc = 0x20AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA38u;
    // 0x20aa3c: 0xaf8098b4  sw          $zero, -0x674C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940852), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CD8u, 0x20AA38u, 0x20AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA40u;
label_20aa40:
    // 0x20aa40: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x20aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x20aa44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa4c: 0xc07e252  jal         func_1F8948
    ctx->pc = 0x20AA4Cu;
    SET_GPR_U32(ctx, 31, 0x20AA54u);
    ctx->pc = 0x20AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA4Cu;
    // 0x20aa50: 0xa06283c4  sb          $v0, -0x7C3C($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294935492), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8948u, 0x20AA4Cu, 0x20AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA54u;
label_20aa54:
    // 0x20aa54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20AA54u;
    {
        const bool branch_taken_0x20aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA54u;
        // 0x20aa58: 0x8f829730  lw          $v0, -0x68D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa54) {
            ctx->pc = 0x20AA68u;
            goto label_20aa68;
        }
    }
    ctx->pc = 0x20AA5Cu;
    // 0x20aa5c: 0x0  nop
    ctx->pc = 0x20aa5cu;
    // NOP
label_20aa60:
    // 0x20aa60: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x20aa60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x20aa64: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x20aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
label_20aa68:
    // 0x20aa68: 0x241308f0  addiu       $s3, $zero, 0x8F0
    ctx->pc = 0x20aa68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x20aa6c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x20aa6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x20aa70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20aa74: 0xc09d940  jal         func_276500
    ctx->pc = 0x20AA74u;
    SET_GPR_U32(ctx, 31, 0x20AA7Cu);
    ctx->pc = 0x20AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA74u;
    // 0x20aa78: 0xaf829730  sw          $v0, -0x68D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x20AA74u, 0x20AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA7Cu;
label_20aa7c:
    // 0x20aa7c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x20aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x20aa80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa84: 0xc09d49c  jal         func_275270
    ctx->pc = 0x20AA84u;
    SET_GPR_U32(ctx, 31, 0x20AA8Cu);
    ctx->pc = 0x20AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA84u;
    // 0x20aa88: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275270u, 0x20AA84u, 0x20AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA8Cu;
label_20aa8c:
    // 0x20aa8c: 0x268423b0  addiu       $a0, $s4, 0x23B0
    ctx->pc = 0x20aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 9136));
    // 0x20aa90: 0x26428858  addiu       $v0, $s2, -0x77A8
    ctx->pc = 0x20aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x20aa94: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20aa98: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x20aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x20aa9c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x20aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x20aaa0: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AAA0u;
    {
        const bool branch_taken_0x20aaa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x20AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAA0u;
        // 0x20aaa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aaa0) {
            ctx->pc = 0x20AAB4u;
            goto label_20aab4;
        }
    }
    ctx->pc = 0x20AAA8u;
    // 0x20aaa8: 0x248200b8  addiu       $v0, $a0, 0xB8
    ctx->pc = 0x20aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x20aaac: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20AAACu;
    {
        const bool branch_taken_0x20aaac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x20aaac) {
            ctx->pc = 0x20AAB8u;
            goto label_20aab8;
        }
    }
    ctx->pc = 0x20AAB4u;
label_20aab4:
    // 0x20aab4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20aab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aab8:
    // 0x20aab8: 0x10c00085  beqz        $a2, . + 4 + (0x85 << 2)
    ctx->pc = 0x20AAB8u;
    {
        const bool branch_taken_0x20aab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAB8u;
        // 0x20aabc: 0x8f82c8cc  lw          $v0, -0x3734($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aab8) {
            ctx->pc = 0x20ACD0u;
            goto label_20acd0;
        }
    }
    ctx->pc = 0x20AAC0u;
    // 0x20aac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AAC0u;
    {
        const bool branch_taken_0x20aac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAC0u;
        // 0x20aac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aac0) {
            ctx->pc = 0x20AAD0u;
            goto label_20aad0;
        }
    }
    ctx->pc = 0x20AAC8u;
    // 0x20aac8: 0xc082a0a  jal         func_20A828
    ctx->pc = 0x20AAC8u;
    SET_GPR_U32(ctx, 31, 0x20AAD0u);
    ctx->pc = 0x20AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAC8u;
    // 0x20aacc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A828u, 0x20AAC8u, 0x20AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAD0u;
label_20aad0:
    // 0x20aad0: 0x8f829744  lw          $v0, -0x68BC($gp)
    ctx->pc = 0x20aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940484)));
    // 0x20aad4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x20AAD4u;
    {
        const bool branch_taken_0x20aad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAD4u;
        // 0x20aad8: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aad4) {
            ctx->pc = 0x20ABA8u;
            goto label_20aba8;
        }
    }
    ctx->pc = 0x20AADCu;
    // 0x20aadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20aadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aae0: 0xc082fd8  jal         func_20BF60
    ctx->pc = 0x20AAE0u;
    SET_GPR_U32(ctx, 31, 0x20AAE8u);
    ctx->pc = 0x20AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAE0u;
    // 0x20aae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF60u, 0x20AAE0u, 0x20AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAE8u;
label_20aae8:
    // 0x20aae8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20AAE8u;
    {
        const bool branch_taken_0x20aae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAE8u;
        // 0x20aaec: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aae8) {
            ctx->pc = 0x20ABA8u;
            goto label_20aba8;
        }
    }
    ctx->pc = 0x20AAF0u;
    // 0x20aaf0: 0xc0b45b8  jal         func_2D16E0
    ctx->pc = 0x20AAF0u;
    SET_GPR_U32(ctx, 31, 0x20AAF8u);
    ctx->pc = 0x2D16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D16E0u, 0x20AAF0u, 0x20AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAF8u;
label_20aaf8:
    // 0x20aaf8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x20AAF8u;
    {
        const bool branch_taken_0x20aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAF8u;
        // 0x20aafc: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aaf8) {
            ctx->pc = 0x20ABA4u;
            goto label_20aba4;
        }
    }
    ctx->pc = 0x20AB00u;
    // 0x20ab00: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x20ab04: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x20AB04u;
    {
        const bool branch_taken_0x20ab04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab04) {
            ctx->pc = 0x20AB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB04u;
            // 0x20ab08: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ABA8u;
            goto label_20aba8;
        }
    }
    ctx->pc = 0x20AB0Cu;
    // 0x20ab0c: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x20ab0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x20ab10: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AB10u;
    {
        const bool branch_taken_0x20ab10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ab10) {
            ctx->pc = 0x20AB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB10u;
            // 0x20ab14: 0x9622003c  lhu         $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB38u;
            goto label_20ab38;
        }
    }
    ctx->pc = 0x20AB18u;
    // 0x20ab18: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x20ab18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x20ab1c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AB1Cu;
    {
        const bool branch_taken_0x20ab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ab1c) {
            ctx->pc = 0x20AB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB1Cu;
            // 0x20ab20: 0x9602003c  lhu         $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB38u;
            goto label_20ab38;
        }
    }
    ctx->pc = 0x20AB24u;
    // 0x20ab24: 0xc08e6d0  jal         func_239B40
    ctx->pc = 0x20AB24u;
    SET_GPR_U32(ctx, 31, 0x20AB2Cu);
    ctx->pc = 0x239B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B40u, 0x20AB24u, 0x20AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB2Cu;
label_20ab2c:
    // 0x20ab2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20AB2Cu;
    {
        const bool branch_taken_0x20ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB2Cu;
        // 0x20ab30: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab2c) {
            ctx->pc = 0x20AB4Cu;
            goto label_20ab4c;
        }
    }
    ctx->pc = 0x20AB34u;
    // 0x20ab34: 0x0  nop
    ctx->pc = 0x20ab34u;
    // NOP
label_20ab38:
    // 0x20ab38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ab3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ab40: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x20ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x20ab44: 0x8c22a848  lw          $v0, -0x57B8($at)
    ctx->pc = 0x20ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944840)));
    // 0x20ab48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20ab48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_20ab4c:
    // 0x20ab4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20AB4Cu;
    {
        const bool branch_taken_0x20ab4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB4Cu;
        // 0x20ab50: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab4c) {
            ctx->pc = 0x20ABA8u;
            goto label_20aba8;
        }
    }
    ctx->pc = 0x20AB54u;
    // 0x20ab54: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x20ab54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x20ab58: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AB58u;
    {
        const bool branch_taken_0x20ab58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ab58) {
            ctx->pc = 0x20AB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB58u;
            // 0x20ab5c: 0x9622003c  lhu         $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB80u;
            goto label_20ab80;
        }
    }
    ctx->pc = 0x20AB60u;
    // 0x20ab60: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x20ab60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x20ab64: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AB64u;
    {
        const bool branch_taken_0x20ab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ab64) {
            ctx->pc = 0x20AB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB64u;
            // 0x20ab68: 0x9602003c  lhu         $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB80u;
            goto label_20ab80;
        }
    }
    ctx->pc = 0x20AB6Cu;
    // 0x20ab6c: 0xc08e6d0  jal         func_239B40
    ctx->pc = 0x20AB6Cu;
    SET_GPR_U32(ctx, 31, 0x20AB74u);
    ctx->pc = 0x239B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B40u, 0x20AB6Cu, 0x20AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB74u;
label_20ab74:
    // 0x20ab74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20AB74u;
    {
        const bool branch_taken_0x20ab74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB74u;
        // 0x20ab78: 0x30420800  andi        $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab74) {
            ctx->pc = 0x20AB94u;
            goto label_20ab94;
        }
    }
    ctx->pc = 0x20AB7Cu;
    // 0x20ab7c: 0x0  nop
    ctx->pc = 0x20ab7cu;
    // NOP
label_20ab80:
    // 0x20ab80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ab84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ab88: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x20ab88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x20ab8c: 0x8c22a848  lw          $v0, -0x57B8($at)
    ctx->pc = 0x20ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944840)));
    // 0x20ab90: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x20ab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_20ab94:
    // 0x20ab94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AB94u;
    {
        const bool branch_taken_0x20ab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB94u;
        // 0x20ab98: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab94) {
            ctx->pc = 0x20ABA8u;
            goto label_20aba8;
        }
    }
    ctx->pc = 0x20AB9Cu;
    // 0x20ab9c: 0xc09dfac  jal         func_277EB0
    ctx->pc = 0x20AB9Cu;
    SET_GPR_U32(ctx, 31, 0x20ABA4u);
    ctx->pc = 0x277EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EB0u, 0x20AB9Cu, 0x20ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABA4u;
label_20aba4:
    // 0x20aba4: 0x26438858  addiu       $v1, $s2, -0x77A8
    ctx->pc = 0x20aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
label_20aba8:
    // 0x20aba8: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x20aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20abac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20abb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20abb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20abb4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20ABB4u;
    {
        const bool branch_taken_0x20abb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20abb4) {
            ctx->pc = 0x20ABB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ABB4u;
            // 0x20abb8: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ABF0u;
            goto label_20abf0;
        }
    }
    ctx->pc = 0x20ABBCu;
    // 0x20abbc: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x20abbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x20abc0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20ABC0u;
    {
        const bool branch_taken_0x20abc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20abc0) {
            ctx->pc = 0x20ABC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ABC0u;
            // 0x20abc4: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ABF0u;
            goto label_20abf0;
        }
    }
    ctx->pc = 0x20ABC8u;
    // 0x20abc8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x20abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x20abcc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20ABCCu;
    {
        const bool branch_taken_0x20abcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20abcc) {
            ctx->pc = 0x20ABD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ABCCu;
            // 0x20abd0: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ABF0u;
            goto label_20abf0;
        }
    }
    ctx->pc = 0x20ABD4u;
    // 0x20abd4: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x20abd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x20abd8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20ABD8u;
    {
        const bool branch_taken_0x20abd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20abd8) {
            ctx->pc = 0x20ABDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ABD8u;
            // 0x20abdc: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ABF0u;
            goto label_20abf0;
        }
    }
    ctx->pc = 0x20ABE0u;
    // 0x20abe0: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x20ABE0u;
    SET_GPR_U32(ctx, 31, 0x20ABE8u);
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x20ABE0u, 0x20ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABE8u;
label_20abe8:
    // 0x20abe8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20ABE8u;
    {
        const bool branch_taken_0x20abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABE8u;
        // 0x20abec: 0x531024  and         $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abe8) {
            ctx->pc = 0x20AC54u;
            goto label_20ac54;
        }
    }
    ctx->pc = 0x20ABF0u;
label_20abf0:
    // 0x20abf0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x20abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20abf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20abf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20abf8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20abf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20abfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20ABFCu;
    {
        const bool branch_taken_0x20abfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABFCu;
        // 0x20ac00: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abfc) {
            ctx->pc = 0x20AC18u;
            goto label_20ac18;
        }
    }
    ctx->pc = 0x20AC04u;
    // 0x20ac04: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x20ac04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x20ac08: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AC08u;
    {
        const bool branch_taken_0x20ac08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ac08) {
            ctx->pc = 0x20AC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC08u;
            // 0x20ac0c: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC1Cu;
            goto label_20ac1c;
        }
    }
    ctx->pc = 0x20AC10u;
    // 0x20ac10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20AC10u;
    {
        const bool branch_taken_0x20ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC10u;
        // 0x20ac14: 0x9602003c  lhu         $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac10) {
            ctx->pc = 0x20AC38u;
            goto label_20ac38;
        }
    }
    ctx->pc = 0x20AC18u;
label_20ac18:
    // 0x20ac18: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x20ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_20ac1c:
    // 0x20ac1c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20ac20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20AC20u;
    {
        const bool branch_taken_0x20ac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC20u;
        // 0x20ac24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac20) {
            ctx->pc = 0x20AC50u;
            goto label_20ac50;
        }
    }
    ctx->pc = 0x20AC28u;
    // 0x20ac28: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x20ac28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x20ac2c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AC2Cu;
    {
        const bool branch_taken_0x20ac2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ac2c) {
            ctx->pc = 0x20AC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC2Cu;
            // 0x20ac30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC50u;
            goto label_20ac50;
        }
    }
    ctx->pc = 0x20AC34u;
    // 0x20ac34: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x20ac34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_20ac38:
    // 0x20ac38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ac3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ac40: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x20ac40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x20ac44: 0x8c22a850  lw          $v0, -0x57B0($at)
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944848)));
    // 0x20ac48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AC48u;
    {
        const bool branch_taken_0x20ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC48u;
        // 0x20ac4c: 0x531024  and         $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac48) {
            ctx->pc = 0x20AC54u;
            goto label_20ac54;
        }
    }
    ctx->pc = 0x20AC50u;
label_20ac50:
    // 0x20ac50: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x20ac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_20ac54:
    // 0x20ac54: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20AC54u;
    {
        const bool branch_taken_0x20ac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC54u;
        // 0x20ac58: 0x8f82c8cc  lw          $v0, -0x3734($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac54) {
            ctx->pc = 0x20ACB0u;
            goto label_20acb0;
        }
    }
    ctx->pc = 0x20AC5Cu;
    // 0x20ac5c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20AC5Cu;
    {
        const bool branch_taken_0x20ac5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC5Cu;
        // 0x20ac60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac5c) {
            ctx->pc = 0x20ACB4u;
            goto label_20acb4;
        }
    }
    ctx->pc = 0x20AC64u;
    // 0x20ac64: 0x8f8298c4  lw          $v0, -0x673C($gp)
    ctx->pc = 0x20ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940868)));
    // 0x20ac68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20AC68u;
    {
        const bool branch_taken_0x20ac68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC68u;
        // 0x20ac6c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac68) {
            ctx->pc = 0x20AC98u;
            goto label_20ac98;
        }
    }
    ctx->pc = 0x20AC70u;
    // 0x20ac70: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x20ac74: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x20ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x20ac78: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AC78u;
    {
        const bool branch_taken_0x20ac78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ac78) {
            ctx->pc = 0x20AC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC78u;
            // 0x20ac7c: 0x8f8298b8  lw          $v0, -0x6748($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC90u;
            goto label_20ac90;
        }
    }
    ctx->pc = 0x20AC80u;
    // 0x20ac80: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x20AC80u;
    SET_GPR_U32(ctx, 31, 0x20AC88u);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x20AC80u, 0x20AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC88u;
label_20ac88:
    // 0x20ac88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AC88u;
    {
        const bool branch_taken_0x20ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC88u;
        // 0x20ac8c: 0x8f8298b8  lw          $v0, -0x6748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac88) {
            ctx->pc = 0x20AC98u;
            goto label_20ac98;
        }
    }
    ctx->pc = 0x20AC90u;
label_20ac90:
    // 0x20ac90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AC90u;
    {
        const bool branch_taken_0x20ac90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC90u;
        // 0x20ac94: 0x268423b0  addiu       $a0, $s4, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 9136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac90) {
            ctx->pc = 0x20ACA8u;
            goto label_20aca8;
        }
    }
    ctx->pc = 0x20AC98u;
label_20ac98:
    // 0x20ac98: 0xc082522  jal         func_209488
    ctx->pc = 0x20AC98u;
    SET_GPR_U32(ctx, 31, 0x20ACA0u);
    ctx->pc = 0x209488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209488u, 0x20AC98u, 0x20ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACA0u;
label_20aca0:
    // 0x20aca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20ACA0u;
    {
        const bool branch_taken_0x20aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA0u;
        // 0x20aca4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aca0) {
            ctx->pc = 0x20ACB4u;
            goto label_20acb4;
        }
    }
    ctx->pc = 0x20ACA8u;
label_20aca8:
    // 0x20aca8: 0xc098336  jal         func_260CD8
    ctx->pc = 0x20ACA8u;
    SET_GPR_U32(ctx, 31, 0x20ACB0u);
    ctx->pc = 0x20ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACA8u;
    // 0x20acac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CD8u, 0x20ACA8u, 0x20ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACB0u;
label_20acb0:
    // 0x20acb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20acb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20acb4:
    // 0x20acb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20acb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20acb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20acb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20acbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20acbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20acc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20acc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20acc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20acc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20acc8: 0x80a10c0  j           func_284300
    ctx->pc = 0x20ACC8u;
    ctx->pc = 0x20ACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACC8u;
    // 0x20accc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284300u;
    sub_00284300_0x284300(rdram, ctx, runtime); return;
    ctx->pc = 0x20ACD0u;
label_20acd0:
    // 0x20acd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acd4: 0xc09861a  jal         func_261868
    ctx->pc = 0x20ACD4u;
    SET_GPR_U32(ctx, 31, 0x20ACDCu);
    ctx->pc = 0x20ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACD4u;
    // 0x20acd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261868u, 0x20ACD4u, 0x20ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACDCu;
label_20acdc:
    // 0x20acdc: 0xc098804  jal         func_262010
    ctx->pc = 0x20ACDCu;
    SET_GPR_U32(ctx, 31, 0x20ACE4u);
    ctx->pc = 0x262010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262010u, 0x20ACDCu, 0x20ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACE4u;
label_20ace4:
    // 0x20ace4: 0xc093796  jal         func_24DE58
    ctx->pc = 0x20ACE4u;
    SET_GPR_U32(ctx, 31, 0x20ACECu);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x20ACE4u, 0x20ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACECu;
label_20acec:
    // 0x20acec: 0xc0a946e  jal         func_2A51B8
    ctx->pc = 0x20ACECu;
    SET_GPR_U32(ctx, 31, 0x20ACF4u);
    ctx->pc = 0x2A51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51B8u, 0x20ACECu, 0x20ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACF4u;
label_20acf4:
    // 0x20acf4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20ACF4u;
    {
        const bool branch_taken_0x20acf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20acf4) {
            ctx->pc = 0x20ACF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ACF4u;
            // 0x20acf8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AD18u;
            goto label_20ad18;
        }
    }
    ctx->pc = 0x20ACFCu;
    // 0x20acfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad00: 0xc0a3abe  jal         func_28EAF8
    ctx->pc = 0x20AD00u;
    SET_GPR_U32(ctx, 31, 0x20AD08u);
    ctx->pc = 0x20AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD00u;
    // 0x20ad04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EAF8u, 0x20AD00u, 0x20AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD08u;
label_20ad08:
    // 0x20ad08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad0c: 0xc0a3abe  jal         func_28EAF8
    ctx->pc = 0x20AD0Cu;
    SET_GPR_U32(ctx, 31, 0x20AD14u);
    ctx->pc = 0x20AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD0Cu;
    // 0x20ad10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EAF8u, 0x20AD0Cu, 0x20AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD14u;
label_20ad14:
    // 0x20ad14: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x20ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20ad18:
    // 0x20ad18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ad1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad20: 0xaf8298ac  sw          $v0, -0x6754($gp)
    ctx->pc = 0x20ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940844), GPR_U32(ctx, 2));
    // 0x20ad24: 0xaf8098d4  sw          $zero, -0x672C($gp)
    ctx->pc = 0x20ad24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 0));
    // 0x20ad28: 0xc082fd8  jal         func_20BF60
    ctx->pc = 0x20AD28u;
    SET_GPR_U32(ctx, 31, 0x20AD30u);
    ctx->pc = 0x20AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD28u;
    // 0x20ad2c: 0xaf8098d8  sw          $zero, -0x6728($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940888), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF60u, 0x20AD28u, 0x20AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD30u;
label_20ad30:
    // 0x20ad30: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x20AD30u;
    {
        const bool branch_taken_0x20ad30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ad30) {
            ctx->pc = 0x20AD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AD30u;
            // 0x20ad34: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AD80u;
            goto label_20ad80;
        }
    }
    ctx->pc = 0x20AD38u;
    // 0x20ad38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ad38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad3c: 0xc08224c  jal         func_208930
    ctx->pc = 0x20AD3Cu;
    SET_GPR_U32(ctx, 31, 0x20AD44u);
    ctx->pc = 0x20AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD3Cu;
    // 0x20ad40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208930u, 0x20AD3Cu, 0x20AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD44u;
label_20ad44:
    // 0x20ad44: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x20AD44u;
    SET_GPR_U32(ctx, 31, 0x20AD4Cu);
    ctx->pc = 0x20AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD44u;
    // 0x20ad48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x20AD44u, 0x20AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD4Cu;
label_20ad4c:
    // 0x20ad4c: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x20AD4Cu;
    SET_GPR_U32(ctx, 31, 0x20AD54u);
    ctx->pc = 0x20AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD4Cu;
    // 0x20ad50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x20AD4Cu, 0x20AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD54u;
label_20ad54:
    // 0x20ad54: 0xc07c67e  jal         func_1F19F8
    ctx->pc = 0x20AD54u;
    SET_GPR_U32(ctx, 31, 0x20AD5Cu);
    ctx->pc = 0x20AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD54u;
    // 0x20ad58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F19F8u, 0x20AD54u, 0x20AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD5Cu;
label_20ad5c:
    // 0x20ad5c: 0xc07c67e  jal         func_1F19F8
    ctx->pc = 0x20AD5Cu;
    SET_GPR_U32(ctx, 31, 0x20AD64u);
    ctx->pc = 0x20AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD5Cu;
    // 0x20ad60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F19F8u, 0x20AD5Cu, 0x20AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD64u;
label_20ad64:
    // 0x20ad64: 0xc082162  jal         func_208588
    ctx->pc = 0x20AD64u;
    SET_GPR_U32(ctx, 31, 0x20AD6Cu);
    ctx->pc = 0x20AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD64u;
    // 0x20ad68: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20AD64u, 0x20AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD6Cu;
label_20ad6c:
    // 0x20ad6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad70: 0xc0829e0  jal         func_20A780
    ctx->pc = 0x20AD70u;
    SET_GPR_U32(ctx, 31, 0x20AD78u);
    ctx->pc = 0x20AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD70u;
    // 0x20ad74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A780u, 0x20AD70u, 0x20AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD78u;
label_20ad78:
    // 0x20ad78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20AD78u;
    {
        const bool branch_taken_0x20ad78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD78u;
        // 0x20ad7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad78) {
            ctx->pc = 0x20ADB8u;
            goto label_20adb8;
        }
    }
    ctx->pc = 0x20AD80u;
label_20ad80:
    // 0x20ad80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ad80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad84: 0xc085238  jal         func_2148E0
    ctx->pc = 0x20AD84u;
    SET_GPR_U32(ctx, 31, 0x20AD8Cu);
    ctx->pc = 0x20AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD84u;
    // 0x20ad88: 0x248483c0  addiu       $a0, $a0, -0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x20AD84u, 0x20AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD8Cu;
label_20ad8c:
    // 0x20ad8c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AD8Cu;
    {
        const bool branch_taken_0x20ad8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20ad8c) {
            ctx->pc = 0x20ADA0u;
            goto label_20ada0;
        }
    }
    ctx->pc = 0x20AD94u;
    // 0x20ad94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad98: 0xc08224c  jal         func_208930
    ctx->pc = 0x20AD98u;
    SET_GPR_U32(ctx, 31, 0x20ADA0u);
    ctx->pc = 0x20AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD98u;
    // 0x20ad9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208930u, 0x20AD98u, 0x20ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADA0u;
label_20ada0:
    // 0x20ada0: 0xc082162  jal         func_208588
    ctx->pc = 0x20ADA0u;
    SET_GPR_U32(ctx, 31, 0x20ADA8u);
    ctx->pc = 0x20ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADA0u;
    // 0x20ada4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20ADA0u, 0x20ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADA8u;
label_20ada8:
    // 0x20ada8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20adac: 0xc08299a  jal         func_20A668
    ctx->pc = 0x20ADACu;
    SET_GPR_U32(ctx, 31, 0x20ADB4u);
    ctx->pc = 0x20ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADACu;
    // 0x20adb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A668u, 0x20ADACu, 0x20ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADB4u;
label_20adb4:
    // 0x20adb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20adb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20adb8:
    // 0x20adb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20adb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20adbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20adbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20adc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20adc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20adc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20adc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20adc8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20adc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x20ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADCCu;
        // 0x20add0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ADD4u;
    // 0x20add4: 0x0  nop
    ctx->pc = 0x20add4u;
    // NOP
    ctx->pc = 0x20add8u;
}
