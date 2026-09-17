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

// Function: sub_002DD508
// Address: 0x2dd508 - 0x2dd608
void sub_002DD508_0x2dd508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD508_0x2dd508");
#endif

    switch (ctx->pc) {
        case 0x2dd580u: goto label_2dd580;
        case 0x2dd58cu: goto label_2dd58c;
        case 0x2dd5a4u: goto label_2dd5a4;
        case 0x2dd5b0u: goto label_2dd5b0;
        case 0x2dd5bcu: goto label_2dd5bc;
        case 0x2dd5ccu: goto label_2dd5cc;
        case 0x2dd5f0u: goto label_2dd5f0;
        default: break;
    }

    ctx->pc = 0x2dd508u;

    // 0x2dd508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd50c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dd514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dd518: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dd518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dd51c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dd51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dd520: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2dd520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2dd524: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2dd524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2dd528: 0x3c0257ff  lui         $v0, 0x57FF
    ctx->pc = 0x2dd528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22527 << 16));
    // 0x2dd52c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dd52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dd530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd534: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2dd534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2dd538: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x2dd538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x2dd53c: 0x24a5e9f0  addiu       $a1, $a1, -0x1610
    ctx->pc = 0x2dd53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961648));
    // 0x2dd540: 0x2407fff6  addiu       $a3, $zero, -0xA
    ctx->pc = 0x2dd540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x2dd544: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2dd544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2dd548: 0x24c649e8  addiu       $a2, $a2, 0x49E8
    ctx->pc = 0x2dd548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18920));
    // 0x2dd54c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2dd54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x2dd550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd554: 0xae0700c4  sw          $a3, 0xC4($s0)
    ctx->pc = 0x2dd554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 7));
    // 0x2dd558: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x2dd558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x2dd55c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2dd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2dd560: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x2dd560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x2dd564: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2dd564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2dd568: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2dd568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2dd56c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x2dd56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x2dd570: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x2dd570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x2dd574: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x2dd574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x2dd578: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2DD578u;
    SET_GPR_U32(ctx, 31, 0x2DD580u);
    ctx->pc = 0x2DD57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD578u;
    // 0x2dd57c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DD578u, 0x2DD580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD580u;
label_2dd580:
    // 0x2dd580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd584: 0xc07c060  jal         func_1F0180
    ctx->pc = 0x2DD584u;
    SET_GPR_U32(ctx, 31, 0x2DD58Cu);
    ctx->pc = 0x2DD588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD584u;
    // 0x2dd588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0180u, 0x2DD584u, 0x2DD58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD58Cu;
label_2dd58c:
    // 0x2dd58c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2dd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2dd590: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dd590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd594: 0x245237e0  addiu       $s2, $v0, 0x37E0
    ctx->pc = 0x2dd594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    // 0x2dd598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dd598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd59c: 0xc0b7cfc  jal         func_2DF3F0
    ctx->pc = 0x2DD59Cu;
    SET_GPR_U32(ctx, 31, 0x2DD5A4u);
    ctx->pc = 0x2DD5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD59Cu;
    // 0x2dd5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3F0u, 0x2DD59Cu, 0x2DD5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5A4u;
label_2dd5a4:
    // 0x2dd5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5a8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2DD5A8u;
    SET_GPR_U32(ctx, 31, 0x2DD5B0u);
    ctx->pc = 0x2DD5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5A8u;
    // 0x2dd5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DD5A8u, 0x2DD5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5B0u;
label_2dd5b0:
    // 0x2dd5b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5b4: 0xc0b9354  jal         func_2E4D50
    ctx->pc = 0x2DD5B4u;
    SET_GPR_U32(ctx, 31, 0x2DD5BCu);
    ctx->pc = 0x2DD5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5B4u;
    // 0x2dd5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4D50u, 0x2DD5B4u, 0x2DD5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5BCu;
label_2dd5bc:
    // 0x2dd5bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dd5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5c4: 0xc0b7cfc  jal         func_2DF3F0
    ctx->pc = 0x2DD5C4u;
    SET_GPR_U32(ctx, 31, 0x2DD5CCu);
    ctx->pc = 0x2DD5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5C4u;
    // 0x2dd5c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3F0u, 0x2DD5C4u, 0x2DD5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5CCu;
label_2dd5cc:
    // 0x2dd5cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD5CCu;
    {
        const bool branch_taken_0x2dd5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5CCu;
        // 0x2dd5d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5cc) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD5D4u;
    // 0x2dd5d4: 0x0  nop
    ctx->pc = 0x2dd5d4u;
    // NOP
    // 0x2dd5d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dd5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2dd5dc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dd5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2dd5e0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2dd5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2dd5e4: 0x24840280  addiu       $a0, $a0, 0x280
    ctx->pc = 0x2dd5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x2dd5e8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2DD5E8u;
    SET_GPR_U32(ctx, 31, 0x2DD5F0u);
    ctx->pc = 0x2DD5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5E8u;
    // 0x2dd5ec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DD5E8u, 0x2DD5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5F0u;
label_2dd5f0:
    // 0x2dd5f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dd5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd5f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dd5f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd5f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dd5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dd5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5FCu;
        // 0x2dd600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD604u;
    // 0x2dd604: 0x0  nop
    ctx->pc = 0x2dd604u;
    // NOP
    ctx->pc = 0x2dd608u;
}
