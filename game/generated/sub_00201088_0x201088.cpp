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

// Function: sub_00201088
// Address: 0x201088 - 0x2015d0
void sub_00201088_0x201088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201088_0x201088");
#endif

    switch (ctx->pc) {
        case 0x2010b0u: goto label_2010b0;
        case 0x201114u: goto label_201114;
        case 0x20113cu: goto label_20113c;
        case 0x201150u: goto label_201150;
        case 0x201418u: goto label_201418;
        case 0x20142cu: goto label_20142c;
        case 0x201440u: goto label_201440;
        case 0x201450u: goto label_201450;
        case 0x20147cu: goto label_20147c;
        case 0x201490u: goto label_201490;
        case 0x2014b0u: goto label_2014b0;
        case 0x2014c0u: goto label_2014c0;
        case 0x2014e8u: goto label_2014e8;
        case 0x2014fcu: goto label_2014fc;
        case 0x201510u: goto label_201510;
        case 0x201540u: goto label_201540;
        case 0x201550u: goto label_201550;
        case 0x201570u: goto label_201570;
        case 0x201580u: goto label_201580;
        default: break;
    }

    ctx->pc = 0x201088u;

    // 0x201088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x201088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20108c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201094: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x201094u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x201098: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20109c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20109cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2010a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2010a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2010a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2010a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2010a8: 0xc09ec7c  jal         func_27B1F0
    ctx->pc = 0x2010A8u;
    SET_GPR_U32(ctx, 31, 0x2010B0u);
    ctx->pc = 0x2010ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010A8u;
    // 0x2010ac: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1F0u, 0x2010A8u, 0x2010B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010B0u;
label_2010b0:
    // 0x2010b0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2010b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2010b4: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x2010B4u;
    {
        const bool branch_taken_0x2010b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2010B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010B4u;
        // 0x2010b8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010b4) {
            ctx->pc = 0x2015A8u;
            goto label_2015a8;
        }
    }
    ctx->pc = 0x2010BCu;
    // 0x2010bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2010bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2010c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2010c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2010c4: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x2010c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2010c8: 0x10640137  beq         $v1, $a0, . + 4 + (0x137 << 2)
    ctx->pc = 0x2010C8u;
    {
        const bool branch_taken_0x2010c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2010CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010C8u;
        // 0x2010cc: 0x26030870  addiu       $v1, $s0, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010c8) {
            ctx->pc = 0x2015A8u;
            goto label_2015a8;
        }
    }
    ctx->pc = 0x2010D0u;
    // 0x2010d0: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2010d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2010d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2010D4u;
    {
        const bool branch_taken_0x2010d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2010D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010D4u;
        // 0x2010d8: 0x26110868  addiu       $s1, $s0, 0x868 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010d4) {
            ctx->pc = 0x2010E8u;
            goto label_2010e8;
        }
    }
    ctx->pc = 0x2010DCu;
    // 0x2010dc: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x2010dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2010e0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2010e4: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2010e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_2010e8:
    // 0x2010e8: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x2010e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2010ec: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x2010ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x2010f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2010F0u;
    {
        const bool branch_taken_0x2010f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2010F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010F0u;
        // 0x2010f4: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010f0) {
            ctx->pc = 0x201120u;
            goto label_201120;
        }
    }
    ctx->pc = 0x2010F8u;
    // 0x2010f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2010fc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2010fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x201100: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x201100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201104: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x201104u;
    {
        const bool branch_taken_0x201104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201104) {
            ctx->pc = 0x201108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201104u;
            // 0x201108: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
            ctx->in_delay_slot = false;
            ctx->pc = 0x201148u;
            goto label_201148;
        }
    }
    ctx->pc = 0x20110Cu;
    // 0x20110c: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x20110Cu;
    SET_GPR_U32(ctx, 31, 0x201114u);
    ctx->pc = 0x201110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20110Cu;
    // 0x201110: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x20110Cu, 0x201114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201114u;
label_201114:
    // 0x201114: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x201114u;
    {
        const bool branch_taken_0x201114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201114u;
        // 0x201118: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201114) {
            ctx->pc = 0x201154u;
            goto label_201154;
        }
    }
    ctx->pc = 0x20111Cu;
    // 0x20111c: 0x0  nop
    ctx->pc = 0x20111cu;
    // NOP
label_201120:
    // 0x201120: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x201120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x201124: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x201124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x201128: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x201128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20112c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20112Cu;
    {
        const bool branch_taken_0x20112c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20112c) {
            ctx->pc = 0x201148u;
            goto label_201148;
        }
    }
    ctx->pc = 0x201134u;
    // 0x201134: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x201134u;
    SET_GPR_U32(ctx, 31, 0x20113Cu);
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x201134u, 0x20113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20113Cu;
label_20113c:
    // 0x20113c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20113Cu;
    {
        const bool branch_taken_0x20113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20113Cu;
        // 0x201140: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20113c) {
            ctx->pc = 0x201154u;
            goto label_201154;
        }
    }
    ctx->pc = 0x201144u;
    // 0x201144: 0x0  nop
    ctx->pc = 0x201144u;
    // NOP
label_201148:
    // 0x201148: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x201148u;
    SET_GPR_U32(ctx, 31, 0x201150u);
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x201148u, 0x201150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201150u;
label_201150:
    // 0x201150: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x201150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201154:
    // 0x201154: 0x86030040  lh          $v1, 0x40($s0)
    ctx->pc = 0x201154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x201158: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x201158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20115c: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x20115Cu;
    {
        const bool branch_taken_0x20115c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20115Cu;
        // 0x201160: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20115c) {
            ctx->pc = 0x201308u;
            goto label_201308;
        }
    }
    ctx->pc = 0x201164u;
    // 0x201164: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x201164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x201168: 0x86040096  lh          $a0, 0x96($s0)
    ctx->pc = 0x201168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x20116c: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x20116cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x201170: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x201170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x201174: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x201174u;
    {
        const bool branch_taken_0x201174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201174) {
            ctx->pc = 0x201178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201174u;
            // 0x201178: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201190u;
            goto label_201190;
        }
    }
    ctx->pc = 0x20117Cu;
    // 0x20117c: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x20117cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x201180: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x201180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x201184: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201184u;
    {
        const bool branch_taken_0x201184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201184u;
        // 0x201188: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201184) {
            ctx->pc = 0x20119Cu;
            goto label_20119c;
        }
    }
    ctx->pc = 0x20118Cu;
    // 0x20118c: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x20118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_201190:
    // 0x201190: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x201190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x201194: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x201194u;
    {
        const bool branch_taken_0x201194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201194u;
        // 0x201198: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201194) {
            ctx->pc = 0x2012A0u;
            goto label_2012a0;
        }
    }
    ctx->pc = 0x20119Cu;
label_20119c:
    // 0x20119c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2011a0: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x2011a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2011a4: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2011A4u;
    {
        const bool branch_taken_0x2011a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2011A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011A4u;
        // 0x2011a8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011a4) {
            ctx->pc = 0x201258u;
            goto label_201258;
        }
    }
    ctx->pc = 0x2011ACu;
    // 0x2011ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2011ACu;
    {
        const bool branch_taken_0x2011ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011ACu;
        // 0x2011b0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011ac) {
            ctx->pc = 0x2011C8u;
            goto label_2011c8;
        }
    }
    ctx->pc = 0x2011B4u;
    // 0x2011b4: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2011B4u;
    {
        const bool branch_taken_0x2011b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011B4u;
        // 0x2011b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011b4) {
            ctx->pc = 0x201290u;
            goto label_201290;
        }
    }
    ctx->pc = 0x2011BCu;
    // 0x2011bc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2011BCu;
    {
        const bool branch_taken_0x2011bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011BCu;
        // 0x2011c0: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011bc) {
            ctx->pc = 0x201408u;
            goto label_201408;
        }
    }
    ctx->pc = 0x2011C4u;
    // 0x2011c4: 0x0  nop
    ctx->pc = 0x2011c4u;
    // NOP
label_2011c8:
    // 0x2011c8: 0x10a70013  beq         $a1, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2011C8u;
    {
        const bool branch_taken_0x2011c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x2011CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011C8u;
        // 0x2011cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011c8) {
            ctx->pc = 0x201218u;
            goto label_201218;
        }
    }
    ctx->pc = 0x2011D0u;
    // 0x2011d0: 0x14a2008b  bne         $a1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2011D0u;
    {
        const bool branch_taken_0x2011d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2011D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011D0u;
        // 0x2011d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011d0) {
            ctx->pc = 0x201400u;
            goto label_201400;
        }
    }
    ctx->pc = 0x2011D8u;
    // 0x2011d8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2011d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2011dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2011dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2011e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2011e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2011e4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2011e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2011e8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2011e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2011ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2011ECu;
    {
        const bool branch_taken_0x2011ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2011F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011ECu;
        // 0x2011f0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011ec) {
            ctx->pc = 0x2011F8u;
            goto label_2011f8;
        }
    }
    ctx->pc = 0x2011F4u;
    // 0x2011f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2011f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2011f8:
    // 0x2011f8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2011f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2011fc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2011fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x201200: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x201200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x201204: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x201204u;
    {
        const bool branch_taken_0x201204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201204u;
        // 0x201208: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201204) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x20120Cu;
    // 0x20120c: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x20120cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x201210: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x201210u;
    {
        const bool branch_taken_0x201210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201210u;
        // 0x201214: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201210) {
            ctx->pc = 0x20140Cu;
            goto label_20140c;
        }
    }
    ctx->pc = 0x201218u;
label_201218:
    // 0x201218: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x201218u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20121c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20121cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201220: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x201220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201224: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x201224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x201228: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x201228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20122c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20122Cu;
    {
        const bool branch_taken_0x20122c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20122Cu;
        // 0x201230: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20122c) {
            ctx->pc = 0x201238u;
            goto label_201238;
        }
    }
    ctx->pc = 0x201234u;
    // 0x201234: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x201234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_201238:
    // 0x201238: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x201238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x20123c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x20123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x201240: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x201240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x201244: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x201244u;
    {
        const bool branch_taken_0x201244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201244u;
        // 0x201248: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201244) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x20124Cu;
    // 0x20124c: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x20124cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x201250: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x201250u;
    {
        const bool branch_taken_0x201250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201250u;
        // 0x201254: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201250) {
            ctx->pc = 0x20140Cu;
            goto label_20140c;
        }
    }
    ctx->pc = 0x201258u;
label_201258:
    // 0x201258: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x201258u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20125c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20125cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201260: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x201260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201264: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x201264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x201268: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x201268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20126c: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x20126Cu;
    {
        const bool branch_taken_0x20126c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20126Cu;
        // 0x201270: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20126c) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x201274u;
    // 0x201274: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x201274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x201278: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x201278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x20127c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20127cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x201280: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x201280u;
    {
        const bool branch_taken_0x201280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201280u;
        // 0x201284: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201280) {
            ctx->pc = 0x20138Cu;
            goto label_20138c;
        }
    }
    ctx->pc = 0x201288u;
    // 0x201288: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x201288u;
    {
        const bool branch_taken_0x201288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201288u;
        // 0x20128c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201288) {
            ctx->pc = 0x201404u;
            goto label_201404;
        }
    }
    ctx->pc = 0x201290u;
label_201290:
    // 0x201290: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x201290u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x201294: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x201294u;
    {
        const bool branch_taken_0x201294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201294u;
        // 0x201298: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201294) {
            ctx->pc = 0x20140Cu;
            goto label_20140c;
        }
    }
    ctx->pc = 0x20129Cu;
    // 0x20129c: 0x0  nop
    ctx->pc = 0x20129cu;
    // NOP
label_2012a0:
    // 0x2012a0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2012a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2012a4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2012a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2012a8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2012A8u;
    {
        const bool branch_taken_0x2012a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A8u;
        // 0x2012ac: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012a8) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x2012B0u;
    // 0x2012b0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2012b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2012b8: 0x8c6339b0  lw          $v1, 0x39B0($v1)
    ctx->pc = 0x2012b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14768)));
    // 0x2012bc: 0x600008  jr          $v1
    ctx->pc = 0x2012BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2012C8u: goto label_2012c8;
            case 0x2012D0u: goto label_2012d0;
            case 0x2012D8u: goto label_2012d8;
            case 0x2013C8u: goto label_2013c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2012BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2012C4u;
    // 0x2012c4: 0x0  nop
    ctx->pc = 0x2012c4u;
    // NOP
label_2012c8:
    // 0x2012c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2012C8u;
    {
        const bool branch_taken_0x2012c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012C8u;
        // 0x2012cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012c8) {
            ctx->pc = 0x2012F8u;
            goto label_2012f8;
        }
    }
    ctx->pc = 0x2012D0u;
label_2012d0:
    // 0x2012d0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2012D0u;
    {
        const bool branch_taken_0x2012d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012D0u;
        // 0x2012d4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012d0) {
            ctx->pc = 0x201400u;
            goto label_201400;
        }
    }
    ctx->pc = 0x2012D8u;
label_2012d8:
    // 0x2012d8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2012d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2012dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2012dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2012e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2012e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2012e4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2012e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2012e8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2012e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2012ec: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x2012ECu;
    {
        const bool branch_taken_0x2012ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2012F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012ECu;
        // 0x2012f0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012ec) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x2012F4u;
    // 0x2012f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2012f8:
    // 0x2012f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2012f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2012fc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2012fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x201300: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x201300u;
    {
        const bool branch_taken_0x201300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201300u;
        // 0x201304: 0xa4800004  sh          $zero, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201300) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x201308u;
label_201308:
    // 0x201308: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x201308u;
    {
        const bool branch_taken_0x201308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201308) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x201310u;
    // 0x201310: 0xde0200c8  ld          $v0, 0xC8($s0)
    ctx->pc = 0x201310u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x201314: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x201314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x201318: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x201318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x20131c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x20131cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x201320: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x201320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x201324: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201328: 0x1444001f  bne         $v0, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x201328u;
    {
        const bool branch_taken_0x201328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201328u;
        // 0x20132c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201328) {
            ctx->pc = 0x2013A8u;
            goto label_2013a8;
        }
    }
    ctx->pc = 0x201330u;
    // 0x201330: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x201334: 0x86040096  lh          $a0, 0x96($s0)
    ctx->pc = 0x201334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x201338: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x201338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x20133c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20133cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x201340: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x201340u;
    {
        const bool branch_taken_0x201340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201340) {
            ctx->pc = 0x201344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201340u;
            // 0x201344: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20135Cu;
            goto label_20135c;
        }
    }
    ctx->pc = 0x201348u;
    // 0x201348: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x201348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x20134c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x20134cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x201350: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x201350u;
    {
        const bool branch_taken_0x201350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201350u;
        // 0x201354: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201350) {
            ctx->pc = 0x2013A8u;
            goto label_2013a8;
        }
    }
    ctx->pc = 0x201358u;
    // 0x201358: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_20135c:
    // 0x20135c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x20135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x201360: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x201360u;
    {
        const bool branch_taken_0x201360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201360u;
        // 0x201364: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201360) {
            ctx->pc = 0x2013A8u;
            goto label_2013a8;
        }
    }
    ctx->pc = 0x201368u;
    // 0x201368: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x201368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20136c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20136Cu;
    {
        const bool branch_taken_0x20136c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20136Cu;
        // 0x201370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20136c) {
            ctx->pc = 0x201388u;
            goto label_201388;
        }
    }
    ctx->pc = 0x201374u;
    // 0x201374: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201374u;
    {
        const bool branch_taken_0x201374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201374) {
            ctx->pc = 0x201378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201374u;
            // 0x201378: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2013A0u;
            goto label_2013a0;
        }
    }
    ctx->pc = 0x20137Cu;
    // 0x20137c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20137Cu;
    {
        const bool branch_taken_0x20137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20137c) {
            ctx->pc = 0x2013E0u;
            goto label_2013e0;
        }
    }
    ctx->pc = 0x201384u;
    // 0x201384: 0x0  nop
    ctx->pc = 0x201384u;
    // NOP
label_201388:
    // 0x201388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x201388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20138c:
    // 0x20138c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20138cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x201390: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x201390u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x201394: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x201394u;
    {
        const bool branch_taken_0x201394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201394u;
        // 0x201398: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201394) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x20139Cu;
    // 0x20139c: 0x0  nop
    ctx->pc = 0x20139cu;
    // NOP
label_2013a0:
    // 0x2013a0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2013A0u;
    {
        const bool branch_taken_0x2013a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013A0u;
        // 0x2013a4: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013a0) {
            ctx->pc = 0x20140Cu;
            goto label_20140c;
        }
    }
    ctx->pc = 0x2013A8u;
label_2013a8:
    // 0x2013a8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2013a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2013ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2013ACu;
    {
        const bool branch_taken_0x2013ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013ACu;
        // 0x2013b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013ac) {
            ctx->pc = 0x2013C8u;
            goto label_2013c8;
        }
    }
    ctx->pc = 0x2013B4u;
    // 0x2013b4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2013B4u;
    {
        const bool branch_taken_0x2013b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2013b4) {
            ctx->pc = 0x2013B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2013B4u;
            // 0x2013b8: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2013D8u;
            goto label_2013d8;
        }
    }
    ctx->pc = 0x2013BCu;
    // 0x2013bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2013BCu;
    {
        const bool branch_taken_0x2013bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013bc) {
            ctx->pc = 0x2013E0u;
            goto label_2013e0;
        }
    }
    ctx->pc = 0x2013C4u;
    // 0x2013c4: 0x0  nop
    ctx->pc = 0x2013c4u;
    // NOP
label_2013c8:
    // 0x2013c8: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x2013c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x2013cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2013ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2013d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2013D0u;
    {
        const bool branch_taken_0x2013d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013D0u;
        // 0x2013d4: 0xa4800004  sh          $zero, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013d0) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x2013D8u;
label_2013d8:
    // 0x2013d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2013D8u;
    {
        const bool branch_taken_0x2013d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013D8u;
        // 0x2013dc: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013d8) {
            ctx->pc = 0x20140Cu;
            goto label_20140c;
        }
    }
    ctx->pc = 0x2013E0u;
label_2013e0:
    // 0x2013e0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2013e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2013e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2013e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2013e8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2013e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2013ec: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2013ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2013f0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2013f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2013f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2013F4u;
    {
        const bool branch_taken_0x2013f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2013F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013F4u;
        // 0x2013f8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013f4) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x2013FCu;
    // 0x2013fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2013fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201400:
    // 0x201400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x201400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201404:
    // 0x201404: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x201404u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_201408:
    // 0x201408: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x201408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_20140c:
    // 0x20140c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20140cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_201410:
    // 0x201410: 0xc08215c  jal         func_208570
    ctx->pc = 0x201410u;
    SET_GPR_U32(ctx, 31, 0x201418u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x201410u, 0x201418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201418u;
label_201418:
    // 0x201418: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x201418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20141c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20141Cu;
    {
        const bool branch_taken_0x20141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20141c) {
            ctx->pc = 0x201438u;
            goto label_201438;
        }
    }
    ctx->pc = 0x201424u;
    // 0x201424: 0xc08215c  jal         func_208570
    ctx->pc = 0x201424u;
    SET_GPR_U32(ctx, 31, 0x20142Cu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x201424u, 0x20142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20142Cu;
label_20142c:
    // 0x20142c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20142cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x201430: 0x5443005e  bnel        $v0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x201430u;
    {
        const bool branch_taken_0x201430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201430) {
            ctx->pc = 0x201434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201430u;
            // 0x201434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2015ACu;
            goto label_2015ac;
        }
    }
    ctx->pc = 0x201438u;
label_201438:
    // 0x201438: 0xc08441a  jal         func_211068
    ctx->pc = 0x201438u;
    SET_GPR_U32(ctx, 31, 0x201440u);
    ctx->pc = 0x20143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201438u;
    // 0x20143c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211068u, 0x201438u, 0x201440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201440u;
label_201440:
    // 0x201440: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x201440u;
    {
        const bool branch_taken_0x201440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201440) {
            ctx->pc = 0x201444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201440u;
            // 0x201444: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2015ACu;
            goto label_2015ac;
        }
    }
    ctx->pc = 0x201448u;
    // 0x201448: 0xc08d748  jal         func_235D20
    ctx->pc = 0x201448u;
    SET_GPR_U32(ctx, 31, 0x201450u);
    ctx->pc = 0x20144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201448u;
    // 0x20144c: 0x2611087c  addiu       $s1, $s0, 0x87C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D20u, 0x201448u, 0x201450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201450u;
label_201450:
    // 0x201450: 0x96050888  lhu         $a1, 0x888($s0)
    ctx->pc = 0x201450u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2184)));
    // 0x201454: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x201454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201458: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x201458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x20145c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20145Cu;
    {
        const bool branch_taken_0x20145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20145Cu;
        // 0x201460: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20145c) {
            ctx->pc = 0x201498u;
            goto label_201498;
        }
    }
    ctx->pc = 0x201464u;
    // 0x201464: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x201464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x201468: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x201468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20146c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20146Cu;
    {
        const bool branch_taken_0x20146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20146c) {
            ctx->pc = 0x201488u;
            goto label_201488;
        }
    }
    ctx->pc = 0x201474u;
    // 0x201474: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x201474u;
    SET_GPR_U32(ctx, 31, 0x20147Cu);
    ctx->pc = 0x201478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201474u;
    // 0x201478: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x201474u, 0x20147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20147Cu;
label_20147c:
    // 0x20147c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20147Cu;
    {
        const bool branch_taken_0x20147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20147Cu;
        // 0x201480: 0x2442ffdf  addiu       $v0, $v0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20147c) {
            ctx->pc = 0x2014C4u;
            goto label_2014c4;
        }
    }
    ctx->pc = 0x201484u;
    // 0x201484: 0x0  nop
    ctx->pc = 0x201484u;
    // NOP
label_201488:
    // 0x201488: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x201488u;
    SET_GPR_U32(ctx, 31, 0x201490u);
    ctx->pc = 0x20148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201488u;
    // 0x20148c: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x201488u, 0x201490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201490u;
label_201490:
    // 0x201490: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x201490u;
    {
        const bool branch_taken_0x201490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201490u;
        // 0x201494: 0x2442ffdf  addiu       $v0, $v0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201490) {
            ctx->pc = 0x2014C4u;
            goto label_2014c4;
        }
    }
    ctx->pc = 0x201498u;
label_201498:
    // 0x201498: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x201498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20149c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x20149cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2014a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2014A0u;
    {
        const bool branch_taken_0x2014a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2014a0) {
            ctx->pc = 0x2014B8u;
            goto label_2014b8;
        }
    }
    ctx->pc = 0x2014A8u;
    // 0x2014a8: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x2014A8u;
    SET_GPR_U32(ctx, 31, 0x2014B0u);
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x2014A8u, 0x2014B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014B0u;
label_2014b0:
    // 0x2014b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2014B0u;
    {
        const bool branch_taken_0x2014b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014B0u;
        // 0x2014b4: 0x2442ffdf  addiu       $v0, $v0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014b0) {
            ctx->pc = 0x2014C4u;
            goto label_2014c4;
        }
    }
    ctx->pc = 0x2014B8u;
label_2014b8:
    // 0x2014b8: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x2014B8u;
    SET_GPR_U32(ctx, 31, 0x2014C0u);
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x2014B8u, 0x2014C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014C0u;
label_2014c0:
    // 0x2014c0: 0x2442ffdf  addiu       $v0, $v0, -0x21
    ctx->pc = 0x2014c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967263));
label_2014c4:
    // 0x2014c4: 0x56620013  bnel        $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2014C4u;
    {
        const bool branch_taken_0x2014c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2014c4) {
            ctx->pc = 0x2014C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2014C4u;
            // 0x2014c8: 0x9625000c  lhu         $a1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201514u;
            goto label_201514;
        }
    }
    ctx->pc = 0x2014CCu;
    // 0x2014cc: 0x8f82c8a0  lw          $v0, -0x3760($gp)
    ctx->pc = 0x2014ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953120)));
    // 0x2014d0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2014d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2014d4: 0x247283c0  addiu       $s2, $v1, -0x7C40
    ctx->pc = 0x2014d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x2014d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2014d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2014dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2014dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014e0: 0xc0852d0  jal         func_214B40
    ctx->pc = 0x2014E0u;
    SET_GPR_U32(ctx, 31, 0x2014E8u);
    ctx->pc = 0x2014E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014E0u;
    // 0x2014e4: 0xaf82c8a0  sw          $v0, -0x3760($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B40u, 0x2014E0u, 0x2014E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014E8u;
label_2014e8:
    // 0x2014e8: 0x8f83c8a0  lw          $v1, -0x3760($gp)
    ctx->pc = 0x2014e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953120)));
    // 0x2014ec: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2014ECu;
    {
        const bool branch_taken_0x2014ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2014ec) {
            ctx->pc = 0x2014F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2014ECu;
            // 0x2014f0: 0x9625000c  lhu         $a1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201514u;
            goto label_201514;
        }
    }
    ctx->pc = 0x2014F4u;
    // 0x2014f4: 0xc08528a  jal         func_214A28
    ctx->pc = 0x2014F4u;
    SET_GPR_U32(ctx, 31, 0x2014FCu);
    ctx->pc = 0x2014F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014F4u;
    // 0x2014f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214A28u, 0x2014F4u, 0x2014FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014FCu;
label_2014fc:
    // 0x2014fc: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2014fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x201500: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201500u;
    {
        const bool branch_taken_0x201500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x201500) {
            ctx->pc = 0x201504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201500u;
            // 0x201504: 0x9625000c  lhu         $a1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201514u;
            goto label_201514;
        }
    }
    ctx->pc = 0x201508u;
    // 0x201508: 0xc092486  jal         func_249218
    ctx->pc = 0x201508u;
    SET_GPR_U32(ctx, 31, 0x201510u);
    ctx->pc = 0x20150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201508u;
    // 0x20150c: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x201508u, 0x201510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201510u;
label_201510:
    // 0x201510: 0x9625000c  lhu         $a1, 0xC($s1)
    ctx->pc = 0x201510u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_201514:
    // 0x201514: 0x4493a000  mtc1        $s3, $f20
    ctx->pc = 0x201514u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x201518: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x201518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x20151c: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x20151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x201520: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x201520u;
    {
        const bool branch_taken_0x201520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201520u;
        // 0x201524: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201520) {
            ctx->pc = 0x201558u;
            goto label_201558;
        }
    }
    ctx->pc = 0x201528u;
    // 0x201528: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x201528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20152c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x20152cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201530: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201530u;
    {
        const bool branch_taken_0x201530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201530) {
            ctx->pc = 0x201548u;
            goto label_201548;
        }
    }
    ctx->pc = 0x201538u;
    // 0x201538: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x201538u;
    SET_GPR_U32(ctx, 31, 0x201540u);
    ctx->pc = 0x20153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201538u;
    // 0x20153c: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x201538u, 0x201540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201540u;
label_201540:
    // 0x201540: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x201540u;
    {
        const bool branch_taken_0x201540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201540) {
            ctx->pc = 0x201580u;
            goto label_201580;
        }
    }
    ctx->pc = 0x201548u;
label_201548:
    // 0x201548: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x201548u;
    SET_GPR_U32(ctx, 31, 0x201550u);
    ctx->pc = 0x20154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201548u;
    // 0x20154c: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x201548u, 0x201550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201550u;
label_201550:
    // 0x201550: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x201550u;
    {
        const bool branch_taken_0x201550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201550) {
            ctx->pc = 0x201580u;
            goto label_201580;
        }
    }
    ctx->pc = 0x201558u;
label_201558:
    // 0x201558: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x201558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20155c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x20155cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201560: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201560u;
    {
        const bool branch_taken_0x201560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201560) {
            ctx->pc = 0x201578u;
            goto label_201578;
        }
    }
    ctx->pc = 0x201568u;
    // 0x201568: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x201568u;
    SET_GPR_U32(ctx, 31, 0x201570u);
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x201568u, 0x201570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201570u;
label_201570:
    // 0x201570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x201570u;
    {
        const bool branch_taken_0x201570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201570) {
            ctx->pc = 0x201580u;
            goto label_201580;
        }
    }
    ctx->pc = 0x201578u;
label_201578:
    // 0x201578: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x201578u;
    SET_GPR_U32(ctx, 31, 0x201580u);
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x201578u, 0x201580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201580u;
label_201580:
    // 0x201580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201588: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x201588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x20158c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20158cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201590: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x201590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x201594: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x201594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201598: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x201598u;
    {
        const bool branch_taken_0x201598 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201598) {
            ctx->pc = 0x20159Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201598u;
            // 0x20159c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2015ACu;
            goto label_2015ac;
        }
    }
    ctx->pc = 0x2015A0u;
    // 0x2015a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2015a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2015a4: 0xa2020205  sb          $v0, 0x205($s0)
    ctx->pc = 0x2015a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 517), (uint8_t)GPR_U32(ctx, 2));
label_2015a8:
    // 0x2015a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2015a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2015ac:
    // 0x2015ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2015acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2015b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2015b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2015b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2015b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2015b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2015b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2015bc: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x2015bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2015c0: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2015c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2015c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2015C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015C4u;
        // 0x2015c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2015C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2015CCu;
    // 0x2015cc: 0x0  nop
    ctx->pc = 0x2015ccu;
    // NOP
    ctx->pc = 0x2015d0u;
}
