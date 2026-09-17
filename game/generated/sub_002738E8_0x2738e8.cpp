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

// Function: sub_002738E8
// Address: 0x2738e8 - 0x273af0
void sub_002738E8_0x2738e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002738E8_0x2738e8");
#endif

    switch (ctx->pc) {
        case 0x273928u: goto label_273928;
        case 0x273944u: goto label_273944;
        case 0x273980u: goto label_273980;
        case 0x273990u: goto label_273990;
        case 0x273998u: goto label_273998;
        case 0x2739b4u: goto label_2739b4;
        case 0x2739d0u: goto label_2739d0;
        case 0x273a00u: goto label_273a00;
        case 0x273a10u: goto label_273a10;
        case 0x273a24u: goto label_273a24;
        case 0x273a4cu: goto label_273a4c;
        case 0x273a60u: goto label_273a60;
        case 0x273accu: goto label_273acc;
        default: break;
    }

    ctx->pc = 0x2738e8u;

    // 0x2738e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2738e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2738ec: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2738ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2738f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2738f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2738f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2738f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2738f8: 0x8c82029c  lw          $v0, 0x29C($a0)
    ctx->pc = 0x2738f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x2738fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2738FCu;
    {
        const bool branch_taken_0x2738fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2738fc) {
            ctx->pc = 0x273920u;
            goto label_273920;
        }
    }
    ctx->pc = 0x273904u;
    // 0x273904: 0x8c8202b0  lw          $v0, 0x2B0($a0)
    ctx->pc = 0x273904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x273908: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273908u;
    {
        const bool branch_taken_0x273908 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x273908) {
            ctx->pc = 0x273920u;
            goto label_273920;
        }
    }
    ctx->pc = 0x273910u;
    // 0x273910: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x273910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x273914: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x273914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x273918: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x273918u;
    {
        const bool branch_taken_0x273918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273918) {
            ctx->pc = 0x27391Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273918u;
            // 0x27391c: 0x8c8200dc  lw          $v0, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273934u;
            goto label_273934;
        }
    }
    ctx->pc = 0x273920u;
label_273920:
    // 0x273920: 0xc099bd8  jal         func_266F60
    ctx->pc = 0x273920u;
    SET_GPR_U32(ctx, 31, 0x273928u);
    ctx->pc = 0x266F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266F60u, 0x273920u, 0x273928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273928u;
label_273928:
    // 0x273928: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x273928u;
    {
        const bool branch_taken_0x273928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273928u;
        // 0x27392c: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273928) {
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273930u;
    // 0x273930: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x273930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_273934:
    // 0x273934: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x273934u;
    {
        const bool branch_taken_0x273934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273934) {
            ctx->pc = 0x273938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273934u;
            // 0x273938: 0x8c830298  lw          $v1, 0x298($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273960u;
            goto label_273960;
        }
    }
    ctx->pc = 0x27393Cu;
    // 0x27393c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x27393Cu;
    SET_GPR_U32(ctx, 31, 0x273944u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x27393Cu, 0x273944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273944u;
label_273944:
    // 0x273944: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x273944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273948: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x273948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27394c: 0x84830360  lh          $v1, 0x360($a0)
    ctx->pc = 0x27394cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 864)));
    // 0x273950: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273954: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x273954u;
    {
        const bool branch_taken_0x273954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273954) {
            ctx->pc = 0x273958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273954u;
            // 0x273958: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2739A4u;
            goto label_2739a4;
        }
    }
    ctx->pc = 0x27395Cu;
    // 0x27395c: 0x8c830298  lw          $v1, 0x298($a0)
    ctx->pc = 0x27395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
label_273960:
    // 0x273960: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x273960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x273964: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x273964u;
    {
        const bool branch_taken_0x273964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273964) {
            ctx->pc = 0x273968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273964u;
            // 0x273968: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2739A4u;
            goto label_2739a4;
        }
    }
    ctx->pc = 0x27396Cu;
    // 0x27396c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x27396cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273970: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x273970u;
    {
        const bool branch_taken_0x273970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273970) {
            ctx->pc = 0x273974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273970u;
            // 0x273974: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2739A4u;
            goto label_2739a4;
        }
    }
    ctx->pc = 0x273978u;
    // 0x273978: 0xc09ce32  jal         func_2738C8
    ctx->pc = 0x273978u;
    SET_GPR_U32(ctx, 31, 0x273980u);
    ctx->pc = 0x2738C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2738C8u, 0x273978u, 0x273980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273980u;
label_273980:
    // 0x273980: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273980u;
    {
        const bool branch_taken_0x273980 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x273984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273980u;
        // 0x273984: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273980) {
            ctx->pc = 0x2739A0u;
            goto label_2739a0;
        }
    }
    ctx->pc = 0x273988u;
    // 0x273988: 0xc09b492  jal         func_26D248
    ctx->pc = 0x273988u;
    SET_GPR_U32(ctx, 31, 0x273990u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x273988u, 0x273990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273990u;
label_273990:
    // 0x273990: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273990u;
    {
        const bool branch_taken_0x273990 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x273994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273990u;
        // 0x273994: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273990) {
            ctx->pc = 0x2739A0u;
            goto label_2739a0;
        }
    }
    ctx->pc = 0x273998u;
label_273998:
    // 0x273998: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x273998u;
    {
        const bool branch_taken_0x273998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273998u;
        // 0x27399c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273998) {
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x2739A0u;
label_2739a0:
    // 0x2739a0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2739a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2739a4:
    // 0x2739a4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2739A4u;
    {
        const bool branch_taken_0x2739a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2739a4) {
            ctx->pc = 0x2739F8u;
            goto label_2739f8;
        }
    }
    ctx->pc = 0x2739ACu;
    // 0x2739ac: 0xc09ca28  jal         func_2728A0
    ctx->pc = 0x2739ACu;
    SET_GPR_U32(ctx, 31, 0x2739B4u);
    ctx->pc = 0x2728A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2728A0u, 0x2739ACu, 0x2739B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739B4u;
label_2739b4:
    // 0x2739b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2739B4u;
    {
        const bool branch_taken_0x2739b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739B4u;
        // 0x2739b8: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739b4) {
            ctx->pc = 0x2739F8u;
            goto label_2739f8;
        }
    }
    ctx->pc = 0x2739BCu;
    // 0x2739bc: 0x8c4300e8  lw          $v1, 0xE8($v0)
    ctx->pc = 0x2739bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x2739c0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2739C0u;
    {
        const bool branch_taken_0x2739c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2739C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739C0u;
        // 0x2739c4: 0x8f83aa80  lw          $v1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739c0) {
            ctx->pc = 0x2739E8u;
            goto label_2739e8;
        }
    }
    ctx->pc = 0x2739C8u;
    // 0x2739c8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2739C8u;
    SET_GPR_U32(ctx, 31, 0x2739D0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2739C8u, 0x2739D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739D0u;
label_2739d0:
    // 0x2739d0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2739d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2739d4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2739d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2739d8: 0x84640364  lh          $a0, 0x364($v1)
    ctx->pc = 0x2739d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x2739dc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2739dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2739e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2739E0u;
    {
        const bool branch_taken_0x2739e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739E0u;
        // 0x2739e4: 0x8f83aa80  lw          $v1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739e0) {
            ctx->pc = 0x2739F8u;
            goto label_2739f8;
        }
    }
    ctx->pc = 0x2739E8u;
label_2739e8:
    // 0x2739e8: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x2739e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2739ec: 0x28425000  slti        $v0, $v0, 0x5000
    ctx->pc = 0x2739ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20480) ? 1 : 0);
    // 0x2739f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2739F0u;
    {
        const bool branch_taken_0x2739f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2739f0) {
            ctx->pc = 0x273A08u;
            goto label_273a08;
        }
    }
    ctx->pc = 0x2739F8u;
label_2739f8:
    // 0x2739f8: 0xc099b3e  jal         func_266CF8
    ctx->pc = 0x2739F8u;
    SET_GPR_U32(ctx, 31, 0x273A00u);
    ctx->pc = 0x266CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266CF8u, 0x2739F8u, 0x273A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A00u;
label_273a00:
    // 0x273a00: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x273A00u;
    {
        const bool branch_taken_0x273a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a00) {
            ctx->pc = 0x273A58u;
            goto label_273a58;
        }
    }
    ctx->pc = 0x273A08u;
label_273a08:
    // 0x273a08: 0xc09b2aa  jal         func_26CAA8
    ctx->pc = 0x273A08u;
    SET_GPR_U32(ctx, 31, 0x273A10u);
    ctx->pc = 0x26CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CAA8u, 0x273A08u, 0x273A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A10u;
label_273a10:
    // 0x273a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a14: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273A14u;
    {
        const bool branch_taken_0x273a14 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x273a14) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x273A1Cu;
    // 0x273a1c: 0xc09b492  jal         func_26D248
    ctx->pc = 0x273A1Cu;
    SET_GPR_U32(ctx, 31, 0x273A24u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x273A1Cu, 0x273A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A24u;
label_273a24:
    // 0x273a24: 0x441002e  bgez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x273A24u;
    {
        const bool branch_taken_0x273a24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x273A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A24u;
        // 0x273a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a24) {
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273A2Cu;
label_273a2c:
    // 0x273a2c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273A2Cu;
    {
        const bool branch_taken_0x273a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A2Cu;
        // 0x273a30: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a2c) {
            ctx->pc = 0x273A44u;
            goto label_273a44;
        }
    }
    ctx->pc = 0x273A34u;
    // 0x273a34: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x273a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x273a38: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x273a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x273a3c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x273A3Cu;
    {
        const bool branch_taken_0x273a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a3c) {
            ctx->pc = 0x273A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273A3Cu;
            // 0x273a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273A44u;
label_273a44:
    // 0x273a44: 0xc09bb60  jal         func_26ED80
    ctx->pc = 0x273A44u;
    SET_GPR_U32(ctx, 31, 0x273A4Cu);
    ctx->pc = 0x26ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ED80u, 0x273A44u, 0x273A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A4Cu;
label_273a4c:
    // 0x273a4c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273a50: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x273A50u;
    {
        const bool branch_taken_0x273a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A50u;
        // 0x273a54: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a50) {
            ctx->pc = 0x273998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273998;
        }
    }
    ctx->pc = 0x273A58u;
label_273a58:
    // 0x273a58: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273A58u;
    SET_GPR_U32(ctx, 31, 0x273A60u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273A58u, 0x273A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A60u;
label_273a60:
    // 0x273a60: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x273a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273a64: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x273a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x273a68: 0x8483035e  lh          $v1, 0x35E($a0)
    ctx->pc = 0x273a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 862)));
    // 0x273a6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273a70: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x273A70u;
    {
        const bool branch_taken_0x273a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A70u;
        // 0x273a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a70) {
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273A78u;
    // 0x273a78: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x273a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x273a7c: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x273a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x273a80: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x273a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x273a84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x273A84u;
    {
        const bool branch_taken_0x273a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A84u;
        // 0x273a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a84) {
            ctx->pc = 0x273AACu;
            goto label_273aac;
        }
    }
    ctx->pc = 0x273A8Cu;
    // 0x273a8c: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x273a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x273a90: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x273a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x273a94: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x273a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x273a98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273A98u;
    {
        const bool branch_taken_0x273a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A98u;
        // 0x273a9c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a98) {
            ctx->pc = 0x273AACu;
            goto label_273aac;
        }
    }
    ctx->pc = 0x273AA0u;
    // 0x273aa0: 0x8c820320  lw          $v0, 0x320($a0)
    ctx->pc = 0x273aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x273aa4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x273aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x273aa8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x273aa8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_273aac:
    // 0x273aac: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x273AACu;
    {
        const bool branch_taken_0x273aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x273AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AACu;
        // 0x273ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273aac) {
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273AB4u;
    // 0x273ab4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x273ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x273ab8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x273ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273abc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x273ABCu;
    {
        const bool branch_taken_0x273abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273abc) {
            ctx->pc = 0x273AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273ABCu;
            // 0x273ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273AC4u;
    // 0x273ac4: 0xc09d14c  jal         func_274530
    ctx->pc = 0x273AC4u;
    SET_GPR_U32(ctx, 31, 0x273ACCu);
    ctx->pc = 0x273AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AC4u;
    // 0x273ac8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274530u, 0x273AC4u, 0x273ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273ACCu;
label_273acc:
    // 0x273acc: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x273accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273ad4: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x273ad8: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x273ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x273adc: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x273adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
label_273ae0:
    // 0x273ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x273ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x273ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x273ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x273AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AE8u;
        // 0x273aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273AF0u;
}
