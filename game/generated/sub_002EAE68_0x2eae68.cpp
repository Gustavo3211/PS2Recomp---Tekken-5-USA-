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

// Function: sub_002EAE68
// Address: 0x2eae68 - 0x2eb070
void sub_002EAE68_0x2eae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAE68_0x2eae68");
#endif

    switch (ctx->pc) {
        case 0x2eae68u: goto label_2eae68;
        case 0x2eae6cu: goto label_2eae6c;
        case 0x2eae70u: goto label_2eae70;
        case 0x2eae74u: goto label_2eae74;
        case 0x2eae78u: goto label_2eae78;
        case 0x2eae7cu: goto label_2eae7c;
        case 0x2eae80u: goto label_2eae80;
        case 0x2eae84u: goto label_2eae84;
        case 0x2eae88u: goto label_2eae88;
        case 0x2eae8cu: goto label_2eae8c;
        case 0x2eae90u: goto label_2eae90;
        case 0x2eae94u: goto label_2eae94;
        case 0x2eae98u: goto label_2eae98;
        case 0x2eae9cu: goto label_2eae9c;
        case 0x2eaea0u: goto label_2eaea0;
        case 0x2eaea4u: goto label_2eaea4;
        case 0x2eaea8u: goto label_2eaea8;
        case 0x2eaeacu: goto label_2eaeac;
        case 0x2eaeb0u: goto label_2eaeb0;
        case 0x2eaeb4u: goto label_2eaeb4;
        case 0x2eaeb8u: goto label_2eaeb8;
        case 0x2eaebcu: goto label_2eaebc;
        case 0x2eaec0u: goto label_2eaec0;
        case 0x2eaec4u: goto label_2eaec4;
        case 0x2eaec8u: goto label_2eaec8;
        case 0x2eaeccu: goto label_2eaecc;
        case 0x2eaed0u: goto label_2eaed0;
        case 0x2eaed4u: goto label_2eaed4;
        case 0x2eaed8u: goto label_2eaed8;
        case 0x2eaedcu: goto label_2eaedc;
        case 0x2eaee0u: goto label_2eaee0;
        case 0x2eaee4u: goto label_2eaee4;
        case 0x2eaee8u: goto label_2eaee8;
        case 0x2eaeecu: goto label_2eaeec;
        case 0x2eaef0u: goto label_2eaef0;
        case 0x2eaef4u: goto label_2eaef4;
        case 0x2eaef8u: goto label_2eaef8;
        case 0x2eaefcu: goto label_2eaefc;
        case 0x2eaf00u: goto label_2eaf00;
        case 0x2eaf04u: goto label_2eaf04;
        case 0x2eaf08u: goto label_2eaf08;
        case 0x2eaf0cu: goto label_2eaf0c;
        case 0x2eaf10u: goto label_2eaf10;
        case 0x2eaf14u: goto label_2eaf14;
        case 0x2eaf18u: goto label_2eaf18;
        case 0x2eaf1cu: goto label_2eaf1c;
        case 0x2eaf20u: goto label_2eaf20;
        case 0x2eaf24u: goto label_2eaf24;
        case 0x2eaf28u: goto label_2eaf28;
        case 0x2eaf2cu: goto label_2eaf2c;
        case 0x2eaf30u: goto label_2eaf30;
        case 0x2eaf34u: goto label_2eaf34;
        case 0x2eaf38u: goto label_2eaf38;
        case 0x2eaf3cu: goto label_2eaf3c;
        case 0x2eaf40u: goto label_2eaf40;
        case 0x2eaf44u: goto label_2eaf44;
        case 0x2eaf48u: goto label_2eaf48;
        case 0x2eaf4cu: goto label_2eaf4c;
        case 0x2eaf50u: goto label_2eaf50;
        case 0x2eaf54u: goto label_2eaf54;
        case 0x2eaf58u: goto label_2eaf58;
        case 0x2eaf5cu: goto label_2eaf5c;
        case 0x2eaf60u: goto label_2eaf60;
        case 0x2eaf64u: goto label_2eaf64;
        case 0x2eaf68u: goto label_2eaf68;
        case 0x2eaf6cu: goto label_2eaf6c;
        case 0x2eaf70u: goto label_2eaf70;
        case 0x2eaf74u: goto label_2eaf74;
        case 0x2eaf78u: goto label_2eaf78;
        case 0x2eaf7cu: goto label_2eaf7c;
        case 0x2eaf80u: goto label_2eaf80;
        case 0x2eaf84u: goto label_2eaf84;
        case 0x2eaf88u: goto label_2eaf88;
        case 0x2eaf8cu: goto label_2eaf8c;
        case 0x2eaf90u: goto label_2eaf90;
        case 0x2eaf94u: goto label_2eaf94;
        case 0x2eaf98u: goto label_2eaf98;
        case 0x2eaf9cu: goto label_2eaf9c;
        case 0x2eafa0u: goto label_2eafa0;
        case 0x2eafa4u: goto label_2eafa4;
        case 0x2eafa8u: goto label_2eafa8;
        case 0x2eafacu: goto label_2eafac;
        case 0x2eafb0u: goto label_2eafb0;
        case 0x2eafb4u: goto label_2eafb4;
        case 0x2eafb8u: goto label_2eafb8;
        case 0x2eafbcu: goto label_2eafbc;
        case 0x2eafc0u: goto label_2eafc0;
        case 0x2eafc4u: goto label_2eafc4;
        case 0x2eafc8u: goto label_2eafc8;
        case 0x2eafccu: goto label_2eafcc;
        case 0x2eafd0u: goto label_2eafd0;
        case 0x2eafd4u: goto label_2eafd4;
        case 0x2eafd8u: goto label_2eafd8;
        case 0x2eafdcu: goto label_2eafdc;
        case 0x2eafe0u: goto label_2eafe0;
        case 0x2eafe4u: goto label_2eafe4;
        case 0x2eafe8u: goto label_2eafe8;
        case 0x2eafecu: goto label_2eafec;
        case 0x2eaff0u: goto label_2eaff0;
        case 0x2eaff4u: goto label_2eaff4;
        case 0x2eaff8u: goto label_2eaff8;
        case 0x2eaffcu: goto label_2eaffc;
        case 0x2eb000u: goto label_2eb000;
        case 0x2eb004u: goto label_2eb004;
        case 0x2eb008u: goto label_2eb008;
        case 0x2eb00cu: goto label_2eb00c;
        case 0x2eb010u: goto label_2eb010;
        case 0x2eb014u: goto label_2eb014;
        case 0x2eb018u: goto label_2eb018;
        case 0x2eb01cu: goto label_2eb01c;
        case 0x2eb020u: goto label_2eb020;
        case 0x2eb024u: goto label_2eb024;
        case 0x2eb028u: goto label_2eb028;
        case 0x2eb02cu: goto label_2eb02c;
        case 0x2eb030u: goto label_2eb030;
        case 0x2eb034u: goto label_2eb034;
        case 0x2eb038u: goto label_2eb038;
        case 0x2eb03cu: goto label_2eb03c;
        case 0x2eb040u: goto label_2eb040;
        case 0x2eb044u: goto label_2eb044;
        case 0x2eb048u: goto label_2eb048;
        case 0x2eb04cu: goto label_2eb04c;
        case 0x2eb050u: goto label_2eb050;
        case 0x2eb054u: goto label_2eb054;
        case 0x2eb058u: goto label_2eb058;
        case 0x2eb05cu: goto label_2eb05c;
        case 0x2eb060u: goto label_2eb060;
        case 0x2eb064u: goto label_2eb064;
        case 0x2eb068u: goto label_2eb068;
        case 0x2eb06cu: goto label_2eb06c;
        default: break;
    }

    ctx->pc = 0x2eae68u;

label_2eae68:
    // 0x2eae68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2eae6c:
    // 0x2eae6c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eae70:
    // 0x2eae70: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eae70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2eae74:
    // 0x2eae74: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2eae74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2eae78:
    // 0x2eae78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2eae7c:
    // 0x2eae7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eae7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eae80:
    // 0x2eae80: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x2eae80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
label_2eae84:
    // 0x2eae84: 0x34c600a1  ori         $a2, $a2, 0xA1
    ctx->pc = 0x2eae84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)161);
label_2eae88:
    // 0x2eae88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eae8c:
    // 0x2eae8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2eae90:
    // 0x2eae90: 0xc0bbe04  jal         func_2EF810
label_2eae94:
    if (ctx->pc == 0x2EAE94u) {
        ctx->pc = 0x2EAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE90u;
        // 0x2eae94: 0x34e700a2  ori         $a3, $a3, 0xA2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)162);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE98u;
        goto label_2eae98;
    }
    ctx->pc = 0x2EAE90u;
    SET_GPR_U32(ctx, 31, 0x2EAE98u);
    ctx->pc = 0x2EAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE90u;
    // 0x2eae94: 0x34e700a2  ori         $a3, $a3, 0xA2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)162);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2EAE90u, 0x2EAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE98u;
label_2eae98:
    // 0x2eae98: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x2eae98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2eae9c:
    // 0x2eae9c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eaea0:
    // 0x2eaea0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eaea4:
    if (ctx->pc == 0x2EAEA4u) {
        ctx->pc = 0x2EAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEA0u;
        // 0x2eaea4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEA8u;
        goto label_2eaea8;
    }
    ctx->pc = 0x2EAEA0u;
    {
        const bool branch_taken_0x2eaea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaea0) {
            ctx->pc = 0x2EAEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAEA0u;
            // 0x2eaea4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAEBCu;
            goto label_2eaebc;
        }
    }
    ctx->pc = 0x2EAEA8u;
label_2eaea8:
    // 0x2eaea8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eaea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eaeac:
    // 0x2eaeac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eaeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eaeb0:
    // 0x2eaeb0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2eaeb4:
    if (ctx->pc == 0x2EAEB4u) {
        ctx->pc = 0x2EAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEB0u;
        // 0x2eaeb4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEB8u;
        goto label_2eaeb8;
    }
    ctx->pc = 0x2EAEB0u;
    {
        const bool branch_taken_0x2eaeb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eaeb0) {
            ctx->pc = 0x2EAEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAEB0u;
            // 0x2eaeb4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAEC8u;
            goto label_2eaec8;
        }
    }
    ctx->pc = 0x2EAEB8u;
label_2eaeb8:
    // 0x2eaeb8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eaeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eaebc:
    // 0x2eaebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eaebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eaec0:
    // 0x2eaec0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eaec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eaec4:
    // 0x2eaec4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eaec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eaec8:
    // 0x2eaec8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eaec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2eaecc:
    // 0x2eaecc: 0x34a5009a  ori         $a1, $a1, 0x9A
    ctx->pc = 0x2eaeccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)154);
label_2eaed0:
    // 0x2eaed0: 0xc0bb966  jal         func_2EE598
label_2eaed4:
    if (ctx->pc == 0x2EAED4u) {
        ctx->pc = 0x2EAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAED0u;
        // 0x2eaed4: 0x34c60121  ori         $a2, $a2, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)289);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAED8u;
        goto label_2eaed8;
    }
    ctx->pc = 0x2EAED0u;
    SET_GPR_U32(ctx, 31, 0x2EAED8u);
    ctx->pc = 0x2EAED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAED0u;
    // 0x2eaed4: 0x34c60121  ori         $a2, $a2, 0x121 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)289);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EAED0u, 0x2EAED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAED8u;
label_2eaed8:
    // 0x2eaed8: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x2eaed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2eaedc:
    // 0x2eaedc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eaedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eaee0:
    // 0x2eaee0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eaee4:
    if (ctx->pc == 0x2EAEE4u) {
        ctx->pc = 0x2EAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEE0u;
        // 0x2eaee4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEE8u;
        goto label_2eaee8;
    }
    ctx->pc = 0x2EAEE0u;
    {
        const bool branch_taken_0x2eaee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaee0) {
            ctx->pc = 0x2EAEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAEE0u;
            // 0x2eaee4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAEFCu;
            goto label_2eaefc;
        }
    }
    ctx->pc = 0x2EAEE8u;
label_2eaee8:
    // 0x2eaee8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eaee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eaeec:
    // 0x2eaeec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eaeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eaef0:
    // 0x2eaef0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2eaef4:
    if (ctx->pc == 0x2EAEF4u) {
        ctx->pc = 0x2EAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEF0u;
        // 0x2eaef4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEF8u;
        goto label_2eaef8;
    }
    ctx->pc = 0x2EAEF0u;
    {
        const bool branch_taken_0x2eaef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eaef0) {
            ctx->pc = 0x2EAEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAEF0u;
            // 0x2eaef4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF08u;
            goto label_2eaf08;
        }
    }
    ctx->pc = 0x2EAEF8u;
label_2eaef8:
    // 0x2eaef8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eaef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eaefc:
    // 0x2eaefc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eaefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eaf00:
    // 0x2eaf00: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eaf00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eaf04:
    // 0x2eaf04: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eaf04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eaf08:
    // 0x2eaf08: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eaf08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2eaf0c:
    // 0x2eaf0c: 0x34a5009b  ori         $a1, $a1, 0x9B
    ctx->pc = 0x2eaf0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)155);
label_2eaf10:
    // 0x2eaf10: 0x34c60122  ori         $a2, $a2, 0x122
    ctx->pc = 0x2eaf10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)290);
label_2eaf14:
    // 0x2eaf14: 0xc0bb966  jal         func_2EE598
label_2eaf18:
    if (ctx->pc == 0x2EAF18u) {
        ctx->pc = 0x2EAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF14u;
        // 0x2eaf18: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF1Cu;
        goto label_2eaf1c;
    }
    ctx->pc = 0x2EAF14u;
    SET_GPR_U32(ctx, 31, 0x2EAF1Cu);
    ctx->pc = 0x2EAF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF14u;
    // 0x2eaf18: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EAF14u, 0x2EAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF1Cu;
label_2eaf1c:
    // 0x2eaf1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eaf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eaf20:
    // 0x2eaf20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eaf24:
    if (ctx->pc == 0x2EAF24u) {
        ctx->pc = 0x2EAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF20u;
        // 0x2eaf24: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF28u;
        goto label_2eaf28;
    }
    ctx->pc = 0x2EAF20u;
    {
        const bool branch_taken_0x2eaf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf20) {
            ctx->pc = 0x2EAF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF20u;
            // 0x2eaf24: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF3Cu;
            goto label_2eaf3c;
        }
    }
    ctx->pc = 0x2EAF28u;
label_2eaf28:
    // 0x2eaf28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eaf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eaf2c:
    // 0x2eaf2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eaf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2eaf30:
    // 0x2eaf30: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2eaf34:
    if (ctx->pc == 0x2EAF34u) {
        ctx->pc = 0x2EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF30u;
        // 0x2eaf34: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF38u;
        goto label_2eaf38;
    }
    ctx->pc = 0x2EAF30u;
    {
        const bool branch_taken_0x2eaf30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eaf30) {
            ctx->pc = 0x2EAF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF30u;
            // 0x2eaf34: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF48u;
            goto label_2eaf48;
        }
    }
    ctx->pc = 0x2EAF38u;
label_2eaf38:
    // 0x2eaf38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eaf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2eaf3c:
    // 0x2eaf3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eaf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eaf40:
    // 0x2eaf40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eaf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2eaf44:
    // 0x2eaf44: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eaf44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eaf48:
    // 0x2eaf48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2eaf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2eaf4c:
    // 0x2eaf4c: 0xc0bb966  jal         func_2EE598
label_2eaf50:
    if (ctx->pc == 0x2EAF50u) {
        ctx->pc = 0x2EAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF4Cu;
        // 0x2eaf50: 0x34a5009c  ori         $a1, $a1, 0x9C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)156);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF54u;
        goto label_2eaf54;
    }
    ctx->pc = 0x2EAF4Cu;
    SET_GPR_U32(ctx, 31, 0x2EAF54u);
    ctx->pc = 0x2EAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF4Cu;
    // 0x2eaf50: 0x34a5009c  ori         $a1, $a1, 0x9C (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)156);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EAF4Cu, 0x2EAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF54u;
label_2eaf54:
    // 0x2eaf54: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x2eaf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2eaf58:
    // 0x2eaf58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eaf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eaf5c:
    // 0x2eaf5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eaf60:
    if (ctx->pc == 0x2EAF60u) {
        ctx->pc = 0x2EAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF5Cu;
        // 0x2eaf60: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF64u;
        goto label_2eaf64;
    }
    ctx->pc = 0x2EAF5Cu;
    {
        const bool branch_taken_0x2eaf5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf5c) {
            ctx->pc = 0x2EAF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF5Cu;
            // 0x2eaf60: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF78u;
            goto label_2eaf78;
        }
    }
    ctx->pc = 0x2EAF64u;
label_2eaf64:
    // 0x2eaf64: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eaf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eaf68:
    // 0x2eaf68: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eaf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eaf6c:
    // 0x2eaf6c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2eaf70:
    if (ctx->pc == 0x2EAF70u) {
        ctx->pc = 0x2EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF6Cu;
        // 0x2eaf70: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF74u;
        goto label_2eaf74;
    }
    ctx->pc = 0x2EAF6Cu;
    {
        const bool branch_taken_0x2eaf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eaf6c) {
            ctx->pc = 0x2EAF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF6Cu;
            // 0x2eaf70: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF84u;
            goto label_2eaf84;
        }
    }
    ctx->pc = 0x2EAF74u;
label_2eaf74:
    // 0x2eaf74: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eaf74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eaf78:
    // 0x2eaf78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eaf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eaf7c:
    // 0x2eaf7c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eaf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eaf80:
    // 0x2eaf80: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eaf80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eaf84:
    // 0x2eaf84: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eaf84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2eaf88:
    // 0x2eaf88: 0x34a5009f  ori         $a1, $a1, 0x9F
    ctx->pc = 0x2eaf88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)159);
label_2eaf8c:
    // 0x2eaf8c: 0xc0bb966  jal         func_2EE598
label_2eaf90:
    if (ctx->pc == 0x2EAF90u) {
        ctx->pc = 0x2EAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF8Cu;
        // 0x2eaf90: 0x34c60125  ori         $a2, $a2, 0x125 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF94u;
        goto label_2eaf94;
    }
    ctx->pc = 0x2EAF8Cu;
    SET_GPR_U32(ctx, 31, 0x2EAF94u);
    ctx->pc = 0x2EAF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF8Cu;
    // 0x2eaf90: 0x34c60125  ori         $a2, $a2, 0x125 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)293);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EAF8Cu, 0x2EAF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF94u;
label_2eaf94:
    // 0x2eaf94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eaf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eaf98:
    // 0x2eaf98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eaf9c:
    if (ctx->pc == 0x2EAF9Cu) {
        ctx->pc = 0x2EAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF98u;
        // 0x2eaf9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFA0u;
        goto label_2eafa0;
    }
    ctx->pc = 0x2EAF98u;
    {
        const bool branch_taken_0x2eaf98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf98) {
            ctx->pc = 0x2EAF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF98u;
            // 0x2eaf9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFB4u;
            goto label_2eafb4;
        }
    }
    ctx->pc = 0x2EAFA0u;
label_2eafa0:
    // 0x2eafa0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eafa4:
    // 0x2eafa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2eafa8:
    // 0x2eafa8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2eafac:
    if (ctx->pc == 0x2EAFACu) {
        ctx->pc = 0x2EAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFA8u;
        // 0x2eafac: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFB0u;
        goto label_2eafb0;
    }
    ctx->pc = 0x2EAFA8u;
    {
        const bool branch_taken_0x2eafa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFA8u;
        // 0x2eafac: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafa8) {
            ctx->pc = 0x2EAFC0u;
            goto label_2eafc0;
        }
    }
    ctx->pc = 0x2EAFB0u;
label_2eafb0:
    // 0x2eafb0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eafb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2eafb4:
    // 0x2eafb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eafb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eafb8:
    // 0x2eafb8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2eafbc:
    // 0x2eafbc: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eafbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2eafc0:
    // 0x2eafc0: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2eafc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2eafc4:
    // 0x2eafc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eafc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eafc8:
    // 0x2eafc8: 0x34c6009e  ori         $a2, $a2, 0x9E
    ctx->pc = 0x2eafc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)158);
label_2eafcc:
    // 0x2eafcc: 0xc0bb96a  jal         func_2EE5A8
label_2eafd0:
    if (ctx->pc == 0x2EAFD0u) {
        ctx->pc = 0x2EAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFCCu;
        // 0x2eafd0: 0x34e70124  ori         $a3, $a3, 0x124 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)292);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFD4u;
        goto label_2eafd4;
    }
    ctx->pc = 0x2EAFCCu;
    SET_GPR_U32(ctx, 31, 0x2EAFD4u);
    ctx->pc = 0x2EAFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFCCu;
    // 0x2eafd0: 0x34e70124  ori         $a3, $a3, 0x124 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)292);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EAFCCu, 0x2EAFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFD4u;
label_2eafd4:
    // 0x2eafd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eafd8:
    // 0x2eafd8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eafdc:
    if (ctx->pc == 0x2EAFDCu) {
        ctx->pc = 0x2EAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFD8u;
        // 0x2eafdc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFE0u;
        goto label_2eafe0;
    }
    ctx->pc = 0x2EAFD8u;
    {
        const bool branch_taken_0x2eafd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eafd8) {
            ctx->pc = 0x2EAFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAFD8u;
            // 0x2eafdc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFF4u;
            goto label_2eaff4;
        }
    }
    ctx->pc = 0x2EAFE0u;
label_2eafe0:
    // 0x2eafe0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eafe4:
    // 0x2eafe4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2eafe8:
    // 0x2eafe8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2eafec:
    if (ctx->pc == 0x2EAFECu) {
        ctx->pc = 0x2EAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE8u;
        // 0x2eafec: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFF0u;
        goto label_2eaff0;
    }
    ctx->pc = 0x2EAFE8u;
    {
        const bool branch_taken_0x2eafe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE8u;
        // 0x2eafec: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafe8) {
            ctx->pc = 0x2EB000u;
            goto label_2eb000;
        }
    }
    ctx->pc = 0x2EAFF0u;
label_2eaff0:
    // 0x2eaff0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eaff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2eaff4:
    // 0x2eaff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eaff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eaff8:
    // 0x2eaff8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eaff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2eaffc:
    // 0x2eaffc: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eaffcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2eb000:
    // 0x2eb000: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2eb000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2eb004:
    // 0x2eb004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb008:
    // 0x2eb008: 0x34c6009d  ori         $a2, $a2, 0x9D
    ctx->pc = 0x2eb008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)157);
label_2eb00c:
    // 0x2eb00c: 0xc0bb96a  jal         func_2EE5A8
label_2eb010:
    if (ctx->pc == 0x2EB010u) {
        ctx->pc = 0x2EB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB00Cu;
        // 0x2eb010: 0x34e70123  ori         $a3, $a3, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)291);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB014u;
        goto label_2eb014;
    }
    ctx->pc = 0x2EB00Cu;
    SET_GPR_U32(ctx, 31, 0x2EB014u);
    ctx->pc = 0x2EB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB00Cu;
    // 0x2eb010: 0x34e70123  ori         $a3, $a3, 0x123 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)291);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EB00Cu, 0x2EB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB014u;
label_2eb014:
    // 0x2eb014: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eb014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eb018:
    // 0x2eb018: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eb01c:
    if (ctx->pc == 0x2EB01Cu) {
        ctx->pc = 0x2EB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB018u;
        // 0x2eb01c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB020u;
        goto label_2eb020;
    }
    ctx->pc = 0x2EB018u;
    {
        const bool branch_taken_0x2eb018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb018) {
            ctx->pc = 0x2EB01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB018u;
            // 0x2eb01c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB034u;
            goto label_2eb034;
        }
    }
    ctx->pc = 0x2EB020u;
label_2eb020:
    // 0x2eb020: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eb024:
    // 0x2eb024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eb024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2eb028:
    // 0x2eb028: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2eb02c:
    if (ctx->pc == 0x2EB02Cu) {
        ctx->pc = 0x2EB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB028u;
        // 0x2eb02c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB030u;
        goto label_2eb030;
    }
    ctx->pc = 0x2EB028u;
    {
        const bool branch_taken_0x2eb028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB028u;
        // 0x2eb02c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb028) {
            ctx->pc = 0x2EB03Cu;
            goto label_2eb03c;
        }
    }
    ctx->pc = 0x2EB030u;
label_2eb030:
    // 0x2eb030: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eb030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2eb034:
    // 0x2eb034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb038:
    // 0x2eb038: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eb038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2eb03c:
    // 0x2eb03c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2eb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2eb040:
    // 0x2eb040: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2eb040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2eb044:
    // 0x2eb044: 0x24a5f4f0  addiu       $a1, $a1, -0xB10
    ctx->pc = 0x2eb044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964464));
label_2eb048:
    // 0x2eb048: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2eb048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2eb04c:
    // 0x2eb04c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eb04cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eb050:
    // 0x2eb050: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eb050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eb054:
    // 0x2eb054: 0x60f809  jalr        $v1
label_2eb058:
    if (ctx->pc == 0x2EB058u) {
        ctx->pc = 0x2EB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB054u;
        // 0x2eb058: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB05Cu;
        goto label_2eb05c;
    }
    ctx->pc = 0x2EB054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EB05Cu);
        ctx->pc = 0x2EB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB054u;
        // 0x2eb058: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB054u, 0x2EB05Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB05Cu;
label_2eb05c:
    // 0x2eb05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eb060:
    // 0x2eb060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2eb064:
    // 0x2eb064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eb064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eb068:
    // 0x2eb068: 0x3e00008  jr          $ra
label_2eb06c:
    if (ctx->pc == 0x2EB06Cu) {
        ctx->pc = 0x2EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB068u;
        // 0x2eb06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB070u;
        goto label_fallthrough_0x2eb068;
    }
    ctx->pc = 0x2EB068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB068u;
        // 0x2eb06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2eb068:
    ctx->pc = 0x2EB070u;
}
