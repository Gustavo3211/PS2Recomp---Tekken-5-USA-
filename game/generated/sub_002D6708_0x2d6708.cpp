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

// Function: sub_002D6708
// Address: 0x2d6708 - 0x2d69b0
void sub_002D6708_0x2d6708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6708_0x2d6708");
#endif

    switch (ctx->pc) {
        case 0x2d67e8u: goto label_2d67e8;
        case 0x2d67f0u: goto label_2d67f0;
        case 0x2d67fcu: goto label_2d67fc;
        case 0x2d6810u: goto label_2d6810;
        case 0x2d681cu: goto label_2d681c;
        case 0x2d682cu: goto label_2d682c;
        case 0x2d6838u: goto label_2d6838;
        case 0x2d6850u: goto label_2d6850;
        case 0x2d68e0u: goto label_2d68e0;
        case 0x2d6978u: goto label_2d6978;
        case 0x2d699cu: goto label_2d699c;
        default: break;
    }

    ctx->pc = 0x2d6708u;

    // 0x2d6708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d670c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6714: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d6714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d6718: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d6718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d671c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d6720: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d6720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d6724: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d6724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6728: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d672c: 0x5440009c  bnel        $v0, $zero, . + 4 + (0x9C << 2)
    ctx->pc = 0x2D672Cu;
    {
        const bool branch_taken_0x2d672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d672c) {
            ctx->pc = 0x2D6730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D672Cu;
            // 0x2d6730: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D69A0u;
            goto label_2d69a0;
        }
    }
    ctx->pc = 0x2D6734u;
    // 0x2d6734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d6734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d6738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d6738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d673c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d673cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6740: 0x3c0142dc  lui         $at, 0x42DC
    ctx->pc = 0x2d6740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17116 << 16));
    // 0x2d6744: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d6744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6748: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d674c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d674cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6750: 0xe4209510  swc1        $f0, -0x6AF0($at)
    ctx->pc = 0x2d6750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939920), bits); }
    // 0x2d6754: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6758: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6758u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d675c: 0xe42194f8  swc1        $f1, -0x6B08($at)
    ctx->pc = 0x2d675cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939896), bits); }
    // 0x2d6760: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6764: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6764u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6768: 0xe4209508  swc1        $f0, -0x6AF8($at)
    ctx->pc = 0x2d6768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939912), bits); }
    // 0x2d676c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d676cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6770: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6770u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6774: 0xe4209504  swc1        $f0, -0x6AFC($at)
    ctx->pc = 0x2d6774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939908), bits); }
    // 0x2d6778: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d677c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d677cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6780: 0xe4209500  swc1        $f0, -0x6B00($at)
    ctx->pc = 0x2d6780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939904), bits); }
    // 0x2d6784: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6788: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6788u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d678c: 0xe420950c  swc1        $f0, -0x6AF4($at)
    ctx->pc = 0x2d678cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939916), bits); }
    // 0x2d6790: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6794: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6794u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6798: 0xe4209514  swc1        $f0, -0x6AEC($at)
    ctx->pc = 0x2d6798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939924), bits); }
    // 0x2d679c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d679cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d67a0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d67a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d67a4: 0xa42294e0  sh          $v0, -0x6B20($at)
    ctx->pc = 0x2d67a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939872), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d67a8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d67a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d67ac: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d67acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d67b0: 0xac2094f0  sw          $zero, -0x6B10($at)
    ctx->pc = 0x2d67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939888), GPR_U32(ctx, 0));
    // 0x2d67b4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d67b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d67b8: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d67b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d67bc: 0xac2094f4  sw          $zero, -0x6B0C($at)
    ctx->pc = 0x2d67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939892), GPR_U32(ctx, 0));
    // 0x2d67c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d67c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d67c4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d67c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d67c8: 0xac2090d0  sw          $zero, -0x6F30($at)
    ctx->pc = 0x2d67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938832), GPR_U32(ctx, 0));
    // 0x2d67cc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d67ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d67d0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d67d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d67d4: 0xac209518  sw          $zero, -0x6AE8($at)
    ctx->pc = 0x2d67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939928), GPR_U32(ctx, 0));
    // 0x2d67d8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d67d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d67dc: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d67dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d67e0: 0xc0b5a6c  jal         func_2D69B0
    ctx->pc = 0x2D67E0u;
    SET_GPR_U32(ctx, 31, 0x2D67E8u);
    ctx->pc = 0x2D67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D67E0u;
    // 0x2d67e4: 0xac2094e8  sw          $zero, -0x6B18($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D69B0u, 0x2D67E0u, 0x2D67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67E8u;
label_2d67e8:
    // 0x2d67e8: 0xc040568  jal         func_1015A0
    ctx->pc = 0x2D67E8u;
    SET_GPR_U32(ctx, 31, 0x2D67F0u);
    ctx->pc = 0x1015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1015A0u, 0x2D67E8u, 0x2D67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67F0u;
label_2d67f0:
    // 0x2d67f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d67f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d67f4: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2D67F4u;
    SET_GPR_U32(ctx, 31, 0x2D67FCu);
    ctx->pc = 0x2D67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D67F4u;
    // 0x2d67f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2D67F4u, 0x2D67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67FCu;
label_2d67fc:
    // 0x2d67fc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d67fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6800: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6800u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6804: 0xac2294ec  sw          $v0, -0x6B14($at)
    ctx->pc = 0x2d6804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939884), GPR_U32(ctx, 2));
    // 0x2d6808: 0xc040564  jal         func_101590
    ctx->pc = 0x2D6808u;
    SET_GPR_U32(ctx, 31, 0x2D6810u);
    ctx->pc = 0x2D680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6808u;
    // 0x2d680c: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101590u, 0x2D6808u, 0x2D6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6810u;
label_2d6810:
    // 0x2d6810: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d6810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d6814: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2D6814u;
    SET_GPR_U32(ctx, 31, 0x2D681Cu);
    ctx->pc = 0x2D6818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6814u;
    // 0x2d6818: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2D6814u, 0x2D681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D681Cu;
label_2d681c:
    // 0x2d681c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d681cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6820: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6820u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6824: 0xc040564  jal         func_101590
    ctx->pc = 0x2D6824u;
    SET_GPR_U32(ctx, 31, 0x2D682Cu);
    ctx->pc = 0x2D6828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6824u;
    // 0x2d6828: 0xac2290d8  sw          $v0, -0x6F28($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101590u, 0x2D6824u, 0x2D682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D682Cu;
label_2d682c:
    // 0x2d682c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d6830: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2D6830u;
    SET_GPR_U32(ctx, 31, 0x2D6838u);
    ctx->pc = 0x2D6834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6830u;
    // 0x2d6834: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2D6830u, 0x2D6838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6838u;
label_2d6838:
    // 0x2d6838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d6838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d683c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2d683cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2d6840: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6844: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6844u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6848: 0xac2290dc  sw          $v0, -0x6F24($at)
    ctx->pc = 0x2d6848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938844), GPR_U32(ctx, 2));
    // 0x2d684c: 0x34a590e0  ori         $a1, $a1, 0x90E0
    ctx->pc = 0x2d684cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37088);
label_2d6850:
    // 0x2d6850: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d6850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d6854: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d6854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d6858: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d6858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d685c: 0x28830100  slti        $v1, $a0, 0x100
    ctx->pc = 0x2d685cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d6860: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d6860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d6864: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D6864u;
    {
        const bool branch_taken_0x2d6864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6864u;
        // 0x2d6868: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6864) {
            ctx->pc = 0x2D6850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6850;
        }
    }
    ctx->pc = 0x2D686Cu;
    // 0x2d686c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d686cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d6870: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2d6870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2d6874: 0x8cc690dc  lw          $a2, -0x6F24($a2)
    ctx->pc = 0x2d6874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938844)));
    // 0x2d6878: 0x58c00049  blezl       $a2, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D6878u;
    {
        const bool branch_taken_0x2d6878 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2d6878) {
            ctx->pc = 0x2D687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6878u;
            // 0x2d687c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D69A0u;
            goto label_2d69a0;
        }
    }
    ctx->pc = 0x2D6880u;
    // 0x2d6880: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2d6880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2d6884: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2d6884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2d6888: 0x8ca590d8  lw          $a1, -0x6F28($a1)
    ctx->pc = 0x2d6888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294938840)));
    // 0x2d688c: 0x3403feff  ori         $v1, $zero, 0xFEFF
    ctx->pc = 0x2d688cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65279);
    // 0x2d6890: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d6890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6894: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2d6894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6898: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6898u;
    {
        const bool branch_taken_0x2d6898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6898u;
        // 0x2d689c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6898) {
            ctx->pc = 0x2D68BCu;
            goto label_2d68bc;
        }
    }
    ctx->pc = 0x2D68A0u;
    // 0x2d68a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d68a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d68a8: 0x8c4290e0  lw          $v0, -0x6F20($v0)
    ctx->pc = 0x2d68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938848)));
    // 0x2d68ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d68acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d68b0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d68b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d68b4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d68b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d68b8: 0xac2290e0  sw          $v0, -0x6F20($at)
    ctx->pc = 0x2d68b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938848), GPR_U32(ctx, 2));
label_2d68bc:
    // 0x2d68bc: 0x18c0001e  blez        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D68BCu;
    {
        const bool branch_taken_0x2d68bc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2D68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68BCu;
        // 0x2d68c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68bc) {
            ctx->pc = 0x2D6938u;
            goto label_2d6938;
        }
    }
    ctx->pc = 0x2D68C4u;
    // 0x2d68c4: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x2d68c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x2d68c8: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2d68c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d68cc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2d68ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d68d0: 0x240b000d  addiu       $t3, $zero, 0xD
    ctx->pc = 0x2d68d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d68d4: 0x354a90e0  ori         $t2, $t2, 0x90E0
    ctx->pc = 0x2d68d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)37088);
    // 0x2d68d8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2d68d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d68dc: 0x0  nop
    ctx->pc = 0x2d68dcu;
    // NOP
label_2d68e0:
    // 0x2d68e0: 0x691026  xor         $v0, $v1, $t1
    ctx->pc = 0x2d68e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
    // 0x2d68e4: 0x182380a  movz        $a3, $t4, $v0
    ctx->pc = 0x2d68e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 12));
    // 0x2d68e8: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2D68E8u;
    {
        const bool branch_taken_0x2d68e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68E8u;
        // 0x2d68ec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68e8) {
            ctx->pc = 0x2D6928u;
            goto label_2d6928;
        }
    }
    ctx->pc = 0x2D68F0u;
    // 0x2d68f0: 0x5069000e  beql        $v1, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D68F0u;
    {
        const bool branch_taken_0x2d68f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x2d68f0) {
            ctx->pc = 0x2D68F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D68F0u;
            // 0x2d68f4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D692Cu;
            goto label_2d692c;
        }
    }
    ctx->pc = 0x2D68F8u;
    // 0x2d68f8: 0x106b000b  beq         $v1, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x2D68F8u;
    {
        const bool branch_taken_0x2d68f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x2D68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68F8u;
        // 0x2d68fc: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68f8) {
            ctx->pc = 0x2D6928u;
            goto label_2d6928;
        }
    }
    ctx->pc = 0x2D6900u;
    // 0x2d6900: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2d6900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d6904: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2d6904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2d6908: 0x29030100  slti        $v1, $t0, 0x100
    ctx->pc = 0x2d6908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d690c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d6910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6914: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D6914u;
    {
        const bool branch_taken_0x2d6914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6914u;
        // 0x2d6918: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6914) {
            ctx->pc = 0x2D699Cu;
            goto label_2d699c;
        }
    }
    ctx->pc = 0x2D691Cu;
    // 0x2d691c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d691cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d6920: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2d6920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2d6924: 0x8cc690dc  lw          $a2, -0x6F24($a2)
    ctx->pc = 0x2d6924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938844)));
label_2d6928:
    // 0x2d6928: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d6928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d692c:
    // 0x2d692c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2d692cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d6930: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2D6930u;
    {
        const bool branch_taken_0x2d6930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6930) {
            ctx->pc = 0x2D6934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6930u;
            // 0x2d6934: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D68E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d68e0;
        }
    }
    ctx->pc = 0x2D6938u;
label_2d6938:
    // 0x2d6938: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d6938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d693c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d6940: 0x946394e4  lhu         $v1, -0x6B1C($v1)
    ctx->pc = 0x2d6940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939876)));
    // 0x2d6944: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d6944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d6948: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2d6948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2d694c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d694cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6950: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6950u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6954: 0xa42294e2  sh          $v0, -0x6B1E($at)
    ctx->pc = 0x2d6954u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939874), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d6958: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d6958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d695c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x2d695cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2d6960: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6964: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d6964u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d6968: 0xa42394e4  sh          $v1, -0x6B1C($at)
    ctx->pc = 0x2d6968u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939876), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d696c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6970: 0x34a590a0  ori         $a1, $a1, 0x90A0
    ctx->pc = 0x2d6970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37024);
    // 0x2d6974: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2d6974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d6978:
    // 0x2d6978: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2d6978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d697c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d6980: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d6980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d6984: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x2d6984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2d6988: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d6988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d698c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D698Cu;
    {
        const bool branch_taken_0x2d698c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D698Cu;
        // 0x2d6990: 0xa4470000  sh          $a3, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d698c) {
            ctx->pc = 0x2D6978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6978;
        }
    }
    ctx->pc = 0x2D6994u;
    // 0x2d6994: 0xc0b6b48  jal         func_2DAD20
    ctx->pc = 0x2D6994u;
    SET_GPR_U32(ctx, 31, 0x2D699Cu);
    ctx->pc = 0x2DAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAD20u, 0x2D6994u, 0x2D699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D699Cu;
label_2d699c:
    // 0x2d699c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d699cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d69a0:
    // 0x2d69a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d69a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d69a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D69A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69A4u;
        // 0x2d69a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D69A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D69ACu;
    // 0x2d69ac: 0x0  nop
    ctx->pc = 0x2d69acu;
    // NOP
    ctx->pc = 0x2d69b0u;
}
