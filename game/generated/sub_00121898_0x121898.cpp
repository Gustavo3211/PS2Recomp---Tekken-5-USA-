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

// Function: sub_00121898
// Address: 0x121898 - 0x1219b0
void sub_00121898_0x121898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121898_0x121898");
#endif

    switch (ctx->pc) {
        case 0x1218bcu: goto label_1218bc;
        case 0x1218d8u: goto label_1218d8;
        case 0x1218e4u: goto label_1218e4;
        case 0x121900u: goto label_121900;
        case 0x121910u: goto label_121910;
        case 0x121920u: goto label_121920;
        case 0x121930u: goto label_121930;
        case 0x121948u: goto label_121948;
        case 0x121964u: goto label_121964;
        case 0x121970u: goto label_121970;
        case 0x121988u: goto label_121988;
        default: break;
    }

    ctx->pc = 0x121898u;

    // 0x121898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12189c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12189cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1218a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1218a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1218a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1218a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1218ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1218acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1218b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1218b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1218b4: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x1218B4u;
    SET_GPR_U32(ctx, 31, 0x1218BCu);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x1218B4u, 0x1218BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218BCu;
label_1218bc:
    // 0x1218bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1218bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218c0: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x1218c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x1218c4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1218c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1218c8: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1218C8u;
    {
        const bool branch_taken_0x1218c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1218CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218C8u;
        // 0x1218cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218c8) {
            ctx->pc = 0x121998u;
            goto label_121998;
        }
    }
    ctx->pc = 0x1218D0u;
    // 0x1218d0: 0xc048cc0  jal         func_123300
    ctx->pc = 0x1218D0u;
    SET_GPR_U32(ctx, 31, 0x1218D8u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x1218D0u, 0x1218D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218D8u;
label_1218d8:
    // 0x1218d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1218d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218dc: 0xc048e16  jal         func_123858
    ctx->pc = 0x1218DCu;
    SET_GPR_U32(ctx, 31, 0x1218E4u);
    ctx->pc = 0x123858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123858u, 0x1218DCu, 0x1218E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218E4u;
label_1218e4:
    // 0x1218e4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1218e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1218e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1218e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1218ec: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x1218ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x1218f0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1218F0u;
    {
        const bool branch_taken_0x1218f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1218F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218F0u;
        // 0x1218f4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218f0) {
            ctx->pc = 0x121908u;
            goto label_121908;
        }
    }
    ctx->pc = 0x1218F8u;
    // 0x1218f8: 0xc049c20  jal         func_127080
    ctx->pc = 0x1218F8u;
    SET_GPR_U32(ctx, 31, 0x121900u);
    ctx->pc = 0x1218FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218F8u;
    // 0x1218fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127080u, 0x1218F8u, 0x121900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121900u;
label_121900:
    // 0x121900: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x121900u;
    {
        const bool branch_taken_0x121900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121900) {
            ctx->pc = 0x121920u;
            goto label_121920;
        }
    }
    ctx->pc = 0x121908u;
label_121908:
    // 0x121908: 0xc049c20  jal         func_127080
    ctx->pc = 0x121908u;
    SET_GPR_U32(ctx, 31, 0x121910u);
    ctx->pc = 0x127080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127080u, 0x121908u, 0x121910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121910u;
label_121910:
    // 0x121910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121914: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x121914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121918: 0xc048c90  jal         func_123240
    ctx->pc = 0x121918u;
    SET_GPR_U32(ctx, 31, 0x121920u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x121918u, 0x121920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121920u;
label_121920:
    // 0x121920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121924: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121928: 0xc048ca6  jal         func_123298
    ctx->pc = 0x121928u;
    SET_GPR_U32(ctx, 31, 0x121930u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x121928u, 0x121930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121930u;
label_121930:
    // 0x121930: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x121930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x121938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12193c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121940: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x121940u;
    SET_GPR_U32(ctx, 31, 0x121948u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x121940u, 0x121948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121948u;
label_121948:
    // 0x121948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12194c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121950: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121950u;
    {
        const bool branch_taken_0x121950 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x121950) {
            ctx->pc = 0x121980u;
            goto label_121980;
        }
    }
    ctx->pc = 0x121958u;
    // 0x121958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12195c: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12195Cu;
    SET_GPR_U32(ctx, 31, 0x121964u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12195Cu, 0x121964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121964u;
label_121964:
    // 0x121964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121968: 0xc048e16  jal         func_123858
    ctx->pc = 0x121968u;
    SET_GPR_U32(ctx, 31, 0x121970u);
    ctx->pc = 0x123858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123858u, 0x121968u, 0x121970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121970u;
label_121970:
    // 0x121970: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121974: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x121974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121978: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x121978u;
    {
        const bool branch_taken_0x121978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121978u;
        // 0x12197c: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121978) {
            ctx->pc = 0x121994u;
            goto label_121994;
        }
    }
    ctx->pc = 0x121980u;
label_121980:
    // 0x121980: 0xc048e16  jal         func_123858
    ctx->pc = 0x121980u;
    SET_GPR_U32(ctx, 31, 0x121988u);
    ctx->pc = 0x123858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123858u, 0x121980u, 0x121988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121988u;
label_121988:
    // 0x121988: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12198c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121990: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x121990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_121994:
    // 0x121994: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121998:
    // 0x121998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12199c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12199cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1219a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1219a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1219a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1219a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1219a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1219A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1219ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219A8u;
        // 0x1219ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1219A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1219B0u;
}
