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

// Function: sub_001FA8E0
// Address: 0x1fa8e0 - 0x1faad0
void sub_001FA8E0_0x1fa8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA8E0_0x1fa8e0");
#endif

    switch (ctx->pc) {
        case 0x1fa8fcu: goto label_1fa8fc;
        case 0x1fa904u: goto label_1fa904;
        case 0x1fa914u: goto label_1fa914;
        case 0x1fa91cu: goto label_1fa91c;
        case 0x1fa92cu: goto label_1fa92c;
        case 0x1fa934u: goto label_1fa934;
        case 0x1fa944u: goto label_1fa944;
        case 0x1fa94cu: goto label_1fa94c;
        case 0x1fa958u: goto label_1fa958;
        case 0x1fa960u: goto label_1fa960;
        case 0x1fa968u: goto label_1fa968;
        case 0x1fa970u: goto label_1fa970;
        case 0x1fa978u: goto label_1fa978;
        case 0x1fa980u: goto label_1fa980;
        case 0x1fa988u: goto label_1fa988;
        case 0x1fa990u: goto label_1fa990;
        case 0x1fa998u: goto label_1fa998;
        case 0x1fa9a8u: goto label_1fa9a8;
        case 0x1fa9c0u: goto label_1fa9c0;
        case 0x1fa9ecu: goto label_1fa9ec;
        case 0x1faa30u: goto label_1faa30;
        case 0x1faa90u: goto label_1faa90;
        case 0x1faabcu: goto label_1faabc;
        default: break;
    }

    ctx->pc = 0x1fa8e0u;

    // 0x1fa8e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fa8e4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1fa8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1fa8e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa8ec: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1fa8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1fa8f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fa8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fa8f4: 0xc08f238  jal         func_23C8E0
    ctx->pc = 0x1FA8F4u;
    SET_GPR_U32(ctx, 31, 0x1FA8FCu);
    ctx->pc = 0x1FA8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8F4u;
    // 0x1fa8f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C8E0u, 0x1FA8F4u, 0x1FA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8FCu;
label_1fa8fc:
    // 0x1fa8fc: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FA8FCu;
    SET_GPR_U32(ctx, 31, 0x1FA904u);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FA8FCu, 0x1FA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA904u;
label_1fa904:
    // 0x1fa904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA904u;
    {
        const bool branch_taken_0x1fa904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa904) {
            ctx->pc = 0x1FA914u;
            goto label_1fa914;
        }
    }
    ctx->pc = 0x1FA90Cu;
    // 0x1fa90c: 0xc08f24a  jal         func_23C928
    ctx->pc = 0x1FA90Cu;
    SET_GPR_U32(ctx, 31, 0x1FA914u);
    ctx->pc = 0x23C928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C928u, 0x1FA90Cu, 0x1FA914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA914u;
label_1fa914:
    // 0x1fa914: 0xc08f280  jal         func_23CA00
    ctx->pc = 0x1FA914u;
    SET_GPR_U32(ctx, 31, 0x1FA91Cu);
    ctx->pc = 0x23CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA00u, 0x1FA914u, 0x1FA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA91Cu;
label_1fa91c:
    // 0x1fa91c: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FA91Cu;
    {
        const bool branch_taken_0x1fa91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa91c) {
            ctx->pc = 0x1FA920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA91Cu;
            // 0x1fa920: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA9ACu;
            goto label_1fa9ac;
        }
    }
    ctx->pc = 0x1FA924u;
    // 0x1fa924: 0xc07e252  jal         func_1F8948
    ctx->pc = 0x1FA924u;
    SET_GPR_U32(ctx, 31, 0x1FA92Cu);
    ctx->pc = 0x1FA928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA924u;
    // 0x1fa928: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8948u, 0x1FA924u, 0x1FA92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA92Cu;
label_1fa92c:
    // 0x1fa92c: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FA92Cu;
    SET_GPR_U32(ctx, 31, 0x1FA934u);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FA92Cu, 0x1FA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA934u;
label_1fa934:
    // 0x1fa934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fa934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fa938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa93c: 0xc07e668  jal         func_1F99A0
    ctx->pc = 0x1FA93Cu;
    SET_GPR_U32(ctx, 31, 0x1FA944u);
    ctx->pc = 0x1FA940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA93Cu;
    // 0x1fa940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99A0u, 0x1FA93Cu, 0x1FA944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA944u;
label_1fa944:
    // 0x1fa944: 0xc0404de  jal         func_101378
    ctx->pc = 0x1FA944u;
    SET_GPR_U32(ctx, 31, 0x1FA94Cu);
    ctx->pc = 0x101378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101378u, 0x1FA944u, 0x1FA94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA94Cu;
label_1fa94c:
    // 0x1fa94c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fa94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa950: 0xc07ce36  jal         func_1F38D8
    ctx->pc = 0x1FA950u;
    SET_GPR_U32(ctx, 31, 0x1FA958u);
    ctx->pc = 0x1FA954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA950u;
    // 0x1fa954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38D8u, 0x1FA950u, 0x1FA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA958u;
label_1fa958:
    // 0x1fa958: 0xc07e624  jal         func_1F9890
    ctx->pc = 0x1FA958u;
    SET_GPR_U32(ctx, 31, 0x1FA960u);
    ctx->pc = 0x1FA95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA958u;
    // 0x1fa95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9890u, 0x1FA958u, 0x1FA960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA960u;
label_1fa960:
    // 0x1fa960: 0xc07ed26  jal         func_1FB498
    ctx->pc = 0x1FA960u;
    SET_GPR_U32(ctx, 31, 0x1FA968u);
    ctx->pc = 0x1FB498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB498u, 0x1FA960u, 0x1FA968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA968u;
label_1fa968:
    // 0x1fa968: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x1FA968u;
    SET_GPR_U32(ctx, 31, 0x1FA970u);
    ctx->pc = 0x1FA96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA968u;
    // 0x1fa96c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x1FA968u, 0x1FA970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA970u;
label_1fa970:
    // 0x1fa970: 0xc07f858  jal         func_1FE160
    ctx->pc = 0x1FA970u;
    SET_GPR_U32(ctx, 31, 0x1FA978u);
    ctx->pc = 0x1FA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA970u;
    // 0x1fa974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE160u, 0x1FA970u, 0x1FA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA978u;
label_1fa978:
    // 0x1fa978: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FA978u;
    SET_GPR_U32(ctx, 31, 0x1FA980u);
    ctx->pc = 0x1FA97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA978u;
    // 0x1fa97c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FA978u, 0x1FA980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA980u;
label_1fa980:
    // 0x1fa980: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FA980u;
    SET_GPR_U32(ctx, 31, 0x1FA988u);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FA980u, 0x1FA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA988u;
label_1fa988:
    // 0x1fa988: 0xc07f106  jal         func_1FC418
    ctx->pc = 0x1FA988u;
    SET_GPR_U32(ctx, 31, 0x1FA990u);
    ctx->pc = 0x1FA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA988u;
    // 0x1fa98c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC418u, 0x1FA988u, 0x1FA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA990u;
label_1fa990:
    // 0x1fa990: 0xc07f0fe  jal         func_1FC3F8
    ctx->pc = 0x1FA990u;
    SET_GPR_U32(ctx, 31, 0x1FA998u);
    ctx->pc = 0x1FA994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA990u;
    // 0x1fa994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3F8u, 0x1FA990u, 0x1FA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA998u;
label_1fa998:
    // 0x1fa998: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fa998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fa99c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fa99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa9a0: 0xc08f206  jal         func_23C818
    ctx->pc = 0x1FA9A0u;
    SET_GPR_U32(ctx, 31, 0x1FA9A8u);
    ctx->pc = 0x1FA9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA9A0u;
    // 0x1fa9a4: 0xa04083c4  sb          $zero, -0x7C3C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294935492), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C818u, 0x1FA9A0u, 0x1FA9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA9A8u;
label_1fa9a8:
    // 0x1fa9a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fa9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1fa9ac:
    // 0x1fa9ac: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x1fa9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936748)));
    // 0x1fa9b0: 0x50600043  beql        $v1, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x1FA9B0u;
    {
        const bool branch_taken_0x1fa9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9b0) {
            ctx->pc = 0x1FA9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA9B0u;
            // 0x1fa9b4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAAC0u;
            goto label_1faac0;
        }
    }
    ctx->pc = 0x1FA9B8u;
    // 0x1fa9b8: 0xc07f10a  jal         func_1FC428
    ctx->pc = 0x1FA9B8u;
    SET_GPR_U32(ctx, 31, 0x1FA9C0u);
    ctx->pc = 0x1FC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC428u, 0x1FA9B8u, 0x1FA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA9C0u;
label_1fa9c0:
    // 0x1fa9c0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FA9C0u;
    {
        const bool branch_taken_0x1fa9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9C0u;
        // 0x1fa9c4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9c0) {
            ctx->pc = 0x1FAABCu;
            goto label_1faabc;
        }
    }
    ctx->pc = 0x1FA9C8u;
    // 0x1fa9c8: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x1fa9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1fa9cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa9d0: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x1fa9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1fa9d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA9D4u;
    {
        const bool branch_taken_0x1fa9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9D4u;
        // 0x1fa9d8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9d4) {
            ctx->pc = 0x1FA9E0u;
            goto label_1fa9e0;
        }
    }
    ctx->pc = 0x1FA9DCu;
    // 0x1fa9dc: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1fa9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fa9e0:
    // 0x1fa9e0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1fa9e4: 0xc07f10a  jal         func_1FC428
    ctx->pc = 0x1FA9E4u;
    SET_GPR_U32(ctx, 31, 0x1FA9ECu);
    ctx->pc = 0x1FA9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA9E4u;
    // 0x1fa9e8: 0x8c5001f8  lw          $s0, 0x1F8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC428u, 0x1FA9E4u, 0x1FA9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA9ECu;
label_1fa9ec:
    // 0x1fa9ec: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1fa9ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa9f0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1fa9f4: 0x85440020  lh          $a0, 0x20($t2)
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x1fa9f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fa9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fa9fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fa9fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa00: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FAA00u;
    {
        const bool branch_taken_0x1faa00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FAA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA00u;
        // 0x1faa04: 0x8c4b0210  lw          $t3, 0x210($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa00) {
            ctx->pc = 0x1FAA74u;
            goto label_1faa74;
        }
    }
    ctx->pc = 0x1FAA08u;
    // 0x1faa08: 0x95430026  lhu         $v1, 0x26($t2)
    ctx->pc = 0x1faa08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 38)));
    // 0x1faa0c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1faa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1faa10: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FAA10u;
    {
        const bool branch_taken_0x1faa10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA10u;
        // 0x1faa14: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa10) {
            ctx->pc = 0x1FAA78u;
            goto label_1faa78;
        }
    }
    ctx->pc = 0x1FAA18u;
    // 0x1faa18: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1faa18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa1c: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x1faa1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1faa20: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x1faa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1faa24: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1faa24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1faa28: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FAA28u;
    {
        const bool branch_taken_0x1faa28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA28u;
        // 0x1faa2c: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa28) {
            ctx->pc = 0x1FAA78u;
            goto label_1faa78;
        }
    }
    ctx->pc = 0x1FAA30u;
label_1faa30:
    // 0x1faa30: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x1faa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1faa34: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1faa34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1faa38: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x1faa38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1faa3c: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x1faa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1faa40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1faa40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1faa44: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1faa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1faa48: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x1faa48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1faa4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1faa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1faa50: 0xf02821  addu        $a1, $a3, $s0
    ctx->pc = 0x1faa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1faa54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faa58: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1faa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1faa5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faa60: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1faa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1faa64: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1faa64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1faa68: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1faa68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faa6c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FAA6Cu;
    {
        const bool branch_taken_0x1faa6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA6Cu;
        // 0x1faa70: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa6c) {
            ctx->pc = 0x1FAA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faa30;
        }
    }
    ctx->pc = 0x1FAA74u;
label_1faa74:
    // 0x1faa74: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1faa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1faa78:
    // 0x1faa78: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x1faa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1faa7c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1faa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1faa80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1faa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa84: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1faa84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1faa88: 0xc07eab4  jal         func_1FAAD0
    ctx->pc = 0x1FAA88u;
    SET_GPR_U32(ctx, 31, 0x1FAA90u);
    ctx->pc = 0x1FAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA88u;
    // 0x1faa8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAAD0u, 0x1FAA88u, 0x1FAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA90u;
label_1faa90:
    // 0x1faa90: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x1faa90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1faa94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faa98: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x1faa98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x1faa9c: 0x8c22a850  lw          $v0, -0x57B0($at)
    ctx->pc = 0x1faa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944848)));
    // 0x1faaa0: 0x30430090  andi        $v1, $v0, 0x90
    ctx->pc = 0x1faaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x1faaa4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAAA4u;
    {
        const bool branch_taken_0x1faaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAA4u;
        // 0x1faaa8: 0x30420800  andi        $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faaa4) {
            ctx->pc = 0x1FAAB4u;
            goto label_1faab4;
        }
    }
    ctx->pc = 0x1FAAACu;
    // 0x1faaac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAAACu;
    {
        const bool branch_taken_0x1faaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faaac) {
            ctx->pc = 0x1FAAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAAACu;
            // 0x1faab0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAAC0u;
            goto label_1faac0;
        }
    }
    ctx->pc = 0x1FAAB4u;
label_1faab4:
    // 0x1faab4: 0xc08f264  jal         func_23C990
    ctx->pc = 0x1FAAB4u;
    SET_GPR_U32(ctx, 31, 0x1FAABCu);
    ctx->pc = 0x23C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C990u, 0x1FAAB4u, 0x1FAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAABCu;
label_1faabc:
    // 0x1faabc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1faabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1faac0:
    // 0x1faac0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1faac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1faac4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1faac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1faac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAC8u;
        // 0x1faacc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAAD0u;
}
