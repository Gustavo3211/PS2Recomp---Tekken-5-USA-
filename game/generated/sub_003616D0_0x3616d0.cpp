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

// Function: sub_003616D0
// Address: 0x3616d0 - 0x361ef0
void sub_003616D0_0x3616d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003616D0_0x3616d0");
#endif

    switch (ctx->pc) {
        case 0x361708u: goto label_361708;
        case 0x361710u: goto label_361710;
        case 0x361728u: goto label_361728;
        case 0x361738u: goto label_361738;
        case 0x361750u: goto label_361750;
        case 0x361770u: goto label_361770;
        case 0x3617b8u: goto label_3617b8;
        case 0x3617fcu: goto label_3617fc;
        case 0x361810u: goto label_361810;
        case 0x36182cu: goto label_36182c;
        case 0x361844u: goto label_361844;
        case 0x36185cu: goto label_36185c;
        case 0x361888u: goto label_361888;
        case 0x3618b8u: goto label_3618b8;
        case 0x3618f8u: goto label_3618f8;
        case 0x361910u: goto label_361910;
        case 0x36192cu: goto label_36192c;
        case 0x36193cu: goto label_36193c;
        case 0x361954u: goto label_361954;
        case 0x361978u: goto label_361978;
        case 0x3619acu: goto label_3619ac;
        case 0x3619e8u: goto label_3619e8;
        case 0x361a00u: goto label_361a00;
        case 0x361a1cu: goto label_361a1c;
        case 0x361a2cu: goto label_361a2c;
        case 0x361a44u: goto label_361a44;
        case 0x361a68u: goto label_361a68;
        case 0x361a9cu: goto label_361a9c;
        case 0x361ad8u: goto label_361ad8;
        case 0x361af0u: goto label_361af0;
        case 0x361b0cu: goto label_361b0c;
        case 0x361b1cu: goto label_361b1c;
        case 0x361b34u: goto label_361b34;
        case 0x361b58u: goto label_361b58;
        case 0x361b88u: goto label_361b88;
        case 0x361ba4u: goto label_361ba4;
        case 0x361bb8u: goto label_361bb8;
        case 0x361bd0u: goto label_361bd0;
        case 0x361becu: goto label_361bec;
        case 0x361c10u: goto label_361c10;
        case 0x361c40u: goto label_361c40;
        case 0x361c5cu: goto label_361c5c;
        case 0x361c70u: goto label_361c70;
        case 0x361c88u: goto label_361c88;
        case 0x361ca8u: goto label_361ca8;
        case 0x361cc8u: goto label_361cc8;
        case 0x361cf8u: goto label_361cf8;
        case 0x361d14u: goto label_361d14;
        case 0x361d28u: goto label_361d28;
        case 0x361d40u: goto label_361d40;
        case 0x361d5cu: goto label_361d5c;
        case 0x361d80u: goto label_361d80;
        case 0x361db0u: goto label_361db0;
        case 0x361dccu: goto label_361dcc;
        case 0x361de0u: goto label_361de0;
        case 0x361df8u: goto label_361df8;
        case 0x361e18u: goto label_361e18;
        case 0x361e38u: goto label_361e38;
        case 0x361e68u: goto label_361e68;
        case 0x361e84u: goto label_361e84;
        case 0x361e98u: goto label_361e98;
        case 0x361eb0u: goto label_361eb0;
        case 0x361eccu: goto label_361ecc;
        default: break;
    }

    ctx->pc = 0x3616d0u;

    // 0x3616d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3616d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3616d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3616d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3616d8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x3616d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x3616dc: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x3616dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3616e0: 0x2e230040  sltiu       $v1, $s1, 0x40
    ctx->pc = 0x3616e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x3616e4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x3616e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x3616e8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x3616e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x3616ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3616ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3616f0: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x3616f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x3616f4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3616F4u;
    {
        const bool branch_taken_0x3616f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616F4u;
        // 0x3616f8: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3616f4) {
            ctx->pc = 0x361754u;
            goto label_361754;
        }
    }
    ctx->pc = 0x3616FCu;
    // 0x3616fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3616fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361700: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x361700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_361708:
    // 0x361708: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361708u;
    SET_GPR_U32(ctx, 31, 0x361710u);
    ctx->pc = 0x36170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361708u;
    // 0x36170c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361708u, 0x361710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361710u;
label_361710:
    // 0x361710: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x361710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361714: 0x97a2004e  lhu         $v0, 0x4E($sp)
    ctx->pc = 0x361714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 78)));
    // 0x361718: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x361718u;
    {
        const bool branch_taken_0x361718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x36171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361718u;
        // 0x36171c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361718) {
            ctx->pc = 0x361738u;
            goto label_361738;
        }
    }
    ctx->pc = 0x361720u;
    // 0x361720: 0xc0d87bc  jal         func_361EF0
    ctx->pc = 0x361720u;
    SET_GPR_U32(ctx, 31, 0x361728u);
    ctx->pc = 0x361EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361EF0u, 0x361720u, 0x361728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361728u;
label_361728:
    // 0x361728: 0x2131804  sllv        $v1, $s3, $s0
    ctx->pc = 0x361728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
    // 0x36172c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x36172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x361730: 0xc0d92c8  jal         func_364B20
    ctx->pc = 0x361730u;
    SET_GPR_U32(ctx, 31, 0x361738u);
    ctx->pc = 0x361734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361730u;
    // 0x361734: 0x729025  or          $s2, $v1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x361730u, 0x361738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361738u;
label_361738:
    // 0x361738: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x361738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36173c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x36173cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x361740: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x361740u;
    {
        const bool branch_taken_0x361740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361740u;
        // 0x361744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361740) {
            ctx->pc = 0x361708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361708;
        }
    }
    ctx->pc = 0x361748u;
    // 0x361748: 0xc0d8574  jal         func_3615D0
    ctx->pc = 0x361748u;
    SET_GPR_U32(ctx, 31, 0x361750u);
    ctx->pc = 0x36174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361748u;
    // 0x36174c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3615D0u, 0x361748u, 0x361750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361750u;
label_361750:
    // 0x361750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361754:
    // 0x361754: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361758: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x36175c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x36175cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361760: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x361760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361764: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x361764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361768: 0x3e00008  jr          $ra
    ctx->pc = 0x361768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361768u;
        // 0x36176c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361770u;
label_361770:
    // 0x361770: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x361770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x361774: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x361774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x361778: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x361778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x36177c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36177cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361780: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x361780u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x361784: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x361788: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x361788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x36178c: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x36178cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x361790: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x361790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x361794: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x361794u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x361798: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x36179c: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x36179cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3617a0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x3617a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x3617a4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3617A4u;
    {
        const bool branch_taken_0x3617a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3617A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3617A4u;
        // 0x3617a8: 0xffbf0098  sd          $ra, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3617a4) {
            ctx->pc = 0x3617C8u;
            goto label_3617c8;
        }
    }
    ctx->pc = 0x3617ACu;
    // 0x3617ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3617acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3617b0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3617B0u;
    SET_GPR_U32(ctx, 31, 0x3617B8u);
    ctx->pc = 0x3617B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3617B0u;
    // 0x3617b4: 0x24846eb0  addiu       $a0, $a0, 0x6EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3617B0u, 0x3617B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617B8u;
label_3617b8:
    // 0x3617b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3617b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3617bc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3617BCu;
    {
        const bool branch_taken_0x3617bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3617C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3617BCu;
        // 0x3617c0: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3617bc) {
            ctx->pc = 0x361860u;
            goto label_361860;
        }
    }
    ctx->pc = 0x3617C4u;
    // 0x3617c4: 0x0  nop
    ctx->pc = 0x3617c4u;
    // NOP
label_3617c8:
    // 0x3617c8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3617c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3617cc: 0x8f82c7f0  lw          $v0, -0x3810($gp)
    ctx->pc = 0x3617ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952944)));
    // 0x3617d0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3617d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3617d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3617D4u;
    {
        const bool branch_taken_0x3617d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3617d4) {
            ctx->pc = 0x3617E4u;
            goto label_3617e4;
        }
    }
    ctx->pc = 0x3617DCu;
    // 0x3617dc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3617DCu;
    {
        const bool branch_taken_0x3617dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3617dc) {
            ctx->pc = 0x3617E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3617DCu;
            // 0x3617e0: 0xe6540010  swc1        $f20, 0x10($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3617F0u;
            goto label_3617f0;
        }
    }
    ctx->pc = 0x3617E4u;
label_3617e4:
    // 0x3617e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3617e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3617e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3617E8u;
    {
        const bool branch_taken_0x3617e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3617ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3617E8u;
        // 0x3617ec: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3617e8) {
            ctx->pc = 0x361860u;
            goto label_361860;
        }
    }
    ctx->pc = 0x3617F0u;
label_3617f0:
    // 0x3617f0: 0xa6540014  sh          $s4, 0x14($s2)
    ctx->pc = 0x3617f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 20));
    // 0x3617f4: 0xc0d751a  jal         func_35D468
    ctx->pc = 0x3617F4u;
    SET_GPR_U32(ctx, 31, 0x3617FCu);
    ctx->pc = 0x3617F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3617F4u;
    // 0x3617f8: 0xa653001c  sh          $s3, 0x1C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D468u, 0x3617F4u, 0x3617FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617FCu;
label_3617fc:
    // 0x3617fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3617fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361800: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x361800u;
    {
        const bool branch_taken_0x361800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x361800) {
            ctx->pc = 0x361854u;
            goto label_361854;
        }
    }
    ctx->pc = 0x361808u;
    // 0x361808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x361808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36180c: 0x2111017  dsrav       $v0, $s1, $s0
    ctx->pc = 0x36180cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
label_361810:
    // 0x361810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361814: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x361814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x361818: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x361818u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x36181c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36181Cu;
    {
        const bool branch_taken_0x36181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36181Cu;
        // 0x361820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36181c) {
            ctx->pc = 0x361844u;
            goto label_361844;
        }
    }
    ctx->pc = 0x361824u;
    // 0x361824: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361824u;
    SET_GPR_U32(ctx, 31, 0x36182Cu);
    ctx->pc = 0x361828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361824u;
    // 0x361828: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361824u, 0x36182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36182Cu;
label_36182c:
    // 0x36182c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361830: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x361830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x361834: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x361834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x361838: 0xa7b4005c  sh          $s4, 0x5C($sp)
    ctx->pc = 0x361838u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 20));
    // 0x36183c: 0xc0d738c  jal         func_35CE30
    ctx->pc = 0x36183Cu;
    SET_GPR_U32(ctx, 31, 0x361844u);
    ctx->pc = 0x361840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36183Cu;
    // 0x361840: 0xa7b30064  sh          $s3, 0x64($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE30u, 0x36183Cu, 0x361844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361844u;
label_361844:
    // 0x361844: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x361844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x361848: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x361848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x36184c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x36184Cu;
    {
        const bool branch_taken_0x36184c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36184Cu;
        // 0x361850: 0x2111017  dsrav       $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36184c) {
            ctx->pc = 0x361810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361810;
        }
    }
    ctx->pc = 0x361854u;
label_361854:
    // 0x361854: 0xc0d92b8  jal         func_364AE0
    ctx->pc = 0x361854u;
    SET_GPR_U32(ctx, 31, 0x36185Cu);
    ctx->pc = 0x361858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361854u;
    // 0x361858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364AE0u, 0x361854u, 0x36185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36185Cu;
label_36185c:
    // 0x36185c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36185cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361860:
    // 0x361860: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361864: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361868: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36186c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x36186cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361870: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x361870u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361874: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x361874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x361878: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x361878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36187c: 0x3e00008  jr          $ra
    ctx->pc = 0x36187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36187Cu;
        // 0x361880: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361884u;
    // 0x361884: 0x0  nop
    ctx->pc = 0x361884u;
    // NOP
label_361888:
    // 0x361888: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36188c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x36188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361890: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x361890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361894: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x361894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x361898: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x361898u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x36189c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x36189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x3618a0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x3618a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x3618a4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3618A4u;
    {
        const bool branch_taken_0x3618a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3618A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3618A4u;
        // 0x3618a8: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3618a4) {
            ctx->pc = 0x3618C8u;
            goto label_3618c8;
        }
    }
    ctx->pc = 0x3618ACu;
    // 0x3618ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3618acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3618b0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3618B0u;
    SET_GPR_U32(ctx, 31, 0x3618B8u);
    ctx->pc = 0x3618B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618B0u;
    // 0x3618b4: 0x24846ef0  addiu       $a0, $a0, 0x6EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3618B0u, 0x3618B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618B8u;
label_3618b8:
    // 0x3618b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3618b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3618bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3618BCu;
    {
        const bool branch_taken_0x3618bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3618C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3618BCu;
        // 0x3618c0: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3618bc) {
            ctx->pc = 0x361958u;
            goto label_361958;
        }
    }
    ctx->pc = 0x3618C4u;
    // 0x3618c4: 0x0  nop
    ctx->pc = 0x3618c4u;
    // NOP
label_3618c8:
    // 0x3618c8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3618c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3618cc: 0x8f82c7f0  lw          $v0, -0x3810($gp)
    ctx->pc = 0x3618ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952944)));
    // 0x3618d0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3618d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3618d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3618D4u;
    {
        const bool branch_taken_0x3618d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3618d4) {
            ctx->pc = 0x3618E4u;
            goto label_3618e4;
        }
    }
    ctx->pc = 0x3618DCu;
    // 0x3618dc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3618DCu;
    {
        const bool branch_taken_0x3618dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3618dc) {
            ctx->pc = 0x3618F0u;
            goto label_3618f0;
        }
    }
    ctx->pc = 0x3618E4u;
label_3618e4:
    // 0x3618e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3618e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3618e8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3618E8u;
    {
        const bool branch_taken_0x3618e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3618ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3618E8u;
        // 0x3618ec: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3618e8) {
            ctx->pc = 0x361958u;
            goto label_361958;
        }
    }
    ctx->pc = 0x3618F0u;
label_3618f0:
    // 0x3618f0: 0xc0d751a  jal         func_35D468
    ctx->pc = 0x3618F0u;
    SET_GPR_U32(ctx, 31, 0x3618F8u);
    ctx->pc = 0x3618F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618F0u;
    // 0x3618f4: 0xe6540010  swc1        $f20, 0x10($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D468u, 0x3618F0u, 0x3618F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618F8u;
label_3618f8:
    // 0x3618f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3618f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618fc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3618FCu;
    {
        const bool branch_taken_0x3618fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3618fc) {
            ctx->pc = 0x36194Cu;
            goto label_36194c;
        }
    }
    ctx->pc = 0x361904u;
    // 0x361904: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x361904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361908: 0x2111017  dsrav       $v0, $s1, $s0
    ctx->pc = 0x361908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
    // 0x36190c: 0x0  nop
    ctx->pc = 0x36190cu;
    // NOP
label_361910:
    // 0x361910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x361914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x361918: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x361918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x36191c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36191Cu;
    {
        const bool branch_taken_0x36191c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36191Cu;
        // 0x361920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36191c) {
            ctx->pc = 0x36193Cu;
            goto label_36193c;
        }
    }
    ctx->pc = 0x361924u;
    // 0x361924: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361924u;
    SET_GPR_U32(ctx, 31, 0x36192Cu);
    ctx->pc = 0x361928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361924u;
    // 0x361928: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361924u, 0x36192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36192Cu;
label_36192c:
    // 0x36192c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36192cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361930: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x361930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x361934: 0xc0d738c  jal         func_35CE30
    ctx->pc = 0x361934u;
    SET_GPR_U32(ctx, 31, 0x36193Cu);
    ctx->pc = 0x361938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361934u;
    // 0x361938: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE30u, 0x361934u, 0x36193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36193Cu;
label_36193c:
    // 0x36193c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36193cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x361940: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x361940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x361944: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x361944u;
    {
        const bool branch_taken_0x361944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361944u;
        // 0x361948: 0x2111017  dsrav       $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361944) {
            ctx->pc = 0x361910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361910;
        }
    }
    ctx->pc = 0x36194Cu;
label_36194c:
    // 0x36194c: 0xc0d92b8  jal         func_364AE0
    ctx->pc = 0x36194Cu;
    SET_GPR_U32(ctx, 31, 0x361954u);
    ctx->pc = 0x361950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36194Cu;
    // 0x361950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364AE0u, 0x36194Cu, 0x361954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361954u;
label_361954:
    // 0x361954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361958:
    // 0x361958: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36195c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x36195cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361960: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361964: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x361964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361968: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x361968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36196c: 0x3e00008  jr          $ra
    ctx->pc = 0x36196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36196Cu;
        // 0x361970: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361974u;
    // 0x361974: 0x0  nop
    ctx->pc = 0x361974u;
    // NOP
label_361978:
    // 0x361978: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36197c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x36197cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x361980: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x361980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361984: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x361984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361988: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x36198c: 0x49c03  sra         $s3, $a0, 16
    ctx->pc = 0x36198cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 16));
    // 0x361990: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361994: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361998: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x361998u;
    {
        const bool branch_taken_0x361998 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x36199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361998u;
        // 0x36199c: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361998) {
            ctx->pc = 0x3619B8u;
            goto label_3619b8;
        }
    }
    ctx->pc = 0x3619A0u;
    // 0x3619a0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3619a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3619a4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3619A4u;
    SET_GPR_U32(ctx, 31, 0x3619ACu);
    ctx->pc = 0x3619A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619A4u;
    // 0x3619a8: 0x24846f28  addiu       $a0, $a0, 0x6F28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3619A4u, 0x3619ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619ACu;
label_3619ac:
    // 0x3619ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3619acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3619b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3619B0u;
    {
        const bool branch_taken_0x3619b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3619B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3619B0u;
        // 0x3619b4: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3619b0) {
            ctx->pc = 0x361A48u;
            goto label_361a48;
        }
    }
    ctx->pc = 0x3619B8u;
label_3619b8:
    // 0x3619b8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3619b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3619bc: 0x8f82c7f0  lw          $v0, -0x3810($gp)
    ctx->pc = 0x3619bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952944)));
    // 0x3619c0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3619c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3619c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3619C4u;
    {
        const bool branch_taken_0x3619c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3619c4) {
            ctx->pc = 0x3619D4u;
            goto label_3619d4;
        }
    }
    ctx->pc = 0x3619CCu;
    // 0x3619cc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3619CCu;
    {
        const bool branch_taken_0x3619cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3619cc) {
            ctx->pc = 0x3619E0u;
            goto label_3619e0;
        }
    }
    ctx->pc = 0x3619D4u;
label_3619d4:
    // 0x3619d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3619d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3619d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3619D8u;
    {
        const bool branch_taken_0x3619d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3619DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3619D8u;
        // 0x3619dc: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3619d8) {
            ctx->pc = 0x361A48u;
            goto label_361a48;
        }
    }
    ctx->pc = 0x3619E0u;
label_3619e0:
    // 0x3619e0: 0xc0d751a  jal         func_35D468
    ctx->pc = 0x3619E0u;
    SET_GPR_U32(ctx, 31, 0x3619E8u);
    ctx->pc = 0x3619E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619E0u;
    // 0x3619e4: 0xa6530014  sh          $s3, 0x14($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D468u, 0x3619E0u, 0x3619E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619E8u;
label_3619e8:
    // 0x3619e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3619e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3619ec: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3619ECu;
    {
        const bool branch_taken_0x3619ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3619ec) {
            ctx->pc = 0x361A3Cu;
            goto label_361a3c;
        }
    }
    ctx->pc = 0x3619F4u;
    // 0x3619f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3619f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3619f8: 0x2111017  dsrav       $v0, $s1, $s0
    ctx->pc = 0x3619f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
    // 0x3619fc: 0x0  nop
    ctx->pc = 0x3619fcu;
    // NOP
label_361a00:
    // 0x361a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361a04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x361a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x361a08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x361a08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x361a0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x361A0Cu;
    {
        const bool branch_taken_0x361a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A0Cu;
        // 0x361a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361a0c) {
            ctx->pc = 0x361A2Cu;
            goto label_361a2c;
        }
    }
    ctx->pc = 0x361A14u;
    // 0x361a14: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361A14u;
    SET_GPR_U32(ctx, 31, 0x361A1Cu);
    ctx->pc = 0x361A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A14u;
    // 0x361a18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361A14u, 0x361A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A1Cu;
label_361a1c:
    // 0x361a1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x361a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a20: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x361a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x361a24: 0xc0d738c  jal         func_35CE30
    ctx->pc = 0x361A24u;
    SET_GPR_U32(ctx, 31, 0x361A2Cu);
    ctx->pc = 0x361A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A24u;
    // 0x361a28: 0xa7b3005c  sh          $s3, 0x5C($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE30u, 0x361A24u, 0x361A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A2Cu;
label_361a2c:
    // 0x361a2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x361a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x361a30: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x361a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x361a34: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x361A34u;
    {
        const bool branch_taken_0x361a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A34u;
        // 0x361a38: 0x2111017  dsrav       $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361a34) {
            ctx->pc = 0x361A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361a00;
        }
    }
    ctx->pc = 0x361A3Cu;
label_361a3c:
    // 0x361a3c: 0xc0d92b8  jal         func_364AE0
    ctx->pc = 0x361A3Cu;
    SET_GPR_U32(ctx, 31, 0x361A44u);
    ctx->pc = 0x361A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A3Cu;
    // 0x361a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364AE0u, 0x361A3Cu, 0x361A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A44u;
label_361a44:
    // 0x361a44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361a48:
    // 0x361a48: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361a4c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361a50: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361a54: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x361a54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361a58: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x361a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x361A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A5Cu;
        // 0x361a60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361A64u;
    // 0x361a64: 0x0  nop
    ctx->pc = 0x361a64u;
    // NOP
label_361a68:
    // 0x361a68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x361a6c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x361a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x361a70: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x361a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361a74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x361a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a78: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x361a7c: 0x49c03  sra         $s3, $a0, 16
    ctx->pc = 0x361a7cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 16));
    // 0x361a80: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361a84: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361a88: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x361A88u;
    {
        const bool branch_taken_0x361a88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x361A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A88u;
        // 0x361a8c: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361a88) {
            ctx->pc = 0x361AA8u;
            goto label_361aa8;
        }
    }
    ctx->pc = 0x361A90u;
    // 0x361a90: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361a94: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361A94u;
    SET_GPR_U32(ctx, 31, 0x361A9Cu);
    ctx->pc = 0x361A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A94u;
    // 0x361a98: 0x24846f60  addiu       $a0, $a0, 0x6F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361A94u, 0x361A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A9Cu;
label_361a9c:
    // 0x361a9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361aa0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x361AA0u;
    {
        const bool branch_taken_0x361aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361AA0u;
        // 0x361aa4: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361aa0) {
            ctx->pc = 0x361B38u;
            goto label_361b38;
        }
    }
    ctx->pc = 0x361AA8u;
label_361aa8:
    // 0x361aa8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x361aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x361aac: 0x8f82c7f0  lw          $v0, -0x3810($gp)
    ctx->pc = 0x361aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952944)));
    // 0x361ab0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x361ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361ab4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x361AB4u;
    {
        const bool branch_taken_0x361ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361ab4) {
            ctx->pc = 0x361AC4u;
            goto label_361ac4;
        }
    }
    ctx->pc = 0x361ABCu;
    // 0x361abc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361ABCu;
    {
        const bool branch_taken_0x361abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x361abc) {
            ctx->pc = 0x361AD0u;
            goto label_361ad0;
        }
    }
    ctx->pc = 0x361AC4u;
label_361ac4:
    // 0x361ac4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361ac8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x361AC8u;
    {
        const bool branch_taken_0x361ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361AC8u;
        // 0x361acc: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ac8) {
            ctx->pc = 0x361B38u;
            goto label_361b38;
        }
    }
    ctx->pc = 0x361AD0u;
label_361ad0:
    // 0x361ad0: 0xc0d751a  jal         func_35D468
    ctx->pc = 0x361AD0u;
    SET_GPR_U32(ctx, 31, 0x361AD8u);
    ctx->pc = 0x361AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AD0u;
    // 0x361ad4: 0xa653001c  sh          $s3, 0x1C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D468u, 0x361AD0u, 0x361AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AD8u;
label_361ad8:
    // 0x361ad8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361adc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x361ADCu;
    {
        const bool branch_taken_0x361adc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x361adc) {
            ctx->pc = 0x361B2Cu;
            goto label_361b2c;
        }
    }
    ctx->pc = 0x361AE4u;
    // 0x361ae4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x361ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ae8: 0x2111017  dsrav       $v0, $s1, $s0
    ctx->pc = 0x361ae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
    // 0x361aec: 0x0  nop
    ctx->pc = 0x361aecu;
    // NOP
label_361af0:
    // 0x361af0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361af4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x361af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x361af8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x361af8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x361afc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x361AFCu;
    {
        const bool branch_taken_0x361afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361AFCu;
        // 0x361b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361afc) {
            ctx->pc = 0x361B1Cu;
            goto label_361b1c;
        }
    }
    ctx->pc = 0x361B04u;
    // 0x361b04: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361B04u;
    SET_GPR_U32(ctx, 31, 0x361B0Cu);
    ctx->pc = 0x361B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B04u;
    // 0x361b08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361B04u, 0x361B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B0Cu;
label_361b0c:
    // 0x361b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x361b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b10: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x361b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x361b14: 0xc0d738c  jal         func_35CE30
    ctx->pc = 0x361B14u;
    SET_GPR_U32(ctx, 31, 0x361B1Cu);
    ctx->pc = 0x361B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B14u;
    // 0x361b18: 0xa7b30064  sh          $s3, 0x64($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE30u, 0x361B14u, 0x361B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B1Cu;
label_361b1c:
    // 0x361b1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x361b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x361b20: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x361b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x361b24: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x361B24u;
    {
        const bool branch_taken_0x361b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361B24u;
        // 0x361b28: 0x2111017  dsrav       $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361b24) {
            ctx->pc = 0x361AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361af0;
        }
    }
    ctx->pc = 0x361B2Cu;
label_361b2c:
    // 0x361b2c: 0xc0d92b8  jal         func_364AE0
    ctx->pc = 0x361B2Cu;
    SET_GPR_U32(ctx, 31, 0x361B34u);
    ctx->pc = 0x361B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B2Cu;
    // 0x361b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364AE0u, 0x361B2Cu, 0x361B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B34u;
label_361b34:
    // 0x361b34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361b38:
    // 0x361b38: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361b3c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361b40: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361b44: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x361b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361b48: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x361b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x361B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361B4Cu;
        // 0x361b50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361B54u;
    // 0x361b54: 0x0  nop
    ctx->pc = 0x361b54u;
    // NOP
label_361b58:
    // 0x361b58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x361b5c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361b60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x361b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b64: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x361b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361b68: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x361b68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x361b6c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361b70: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x361b74: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x361B74u;
    {
        const bool branch_taken_0x361b74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x361B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361B74u;
        // 0x361b78: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361b74) {
            ctx->pc = 0x361B98u;
            goto label_361b98;
        }
    }
    ctx->pc = 0x361B7Cu;
    // 0x361b7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361b80: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361B80u;
    SET_GPR_U32(ctx, 31, 0x361B88u);
    ctx->pc = 0x361B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B80u;
    // 0x361b84: 0x24846f98  addiu       $a0, $a0, 0x6F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361B80u, 0x361B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B88u;
label_361b88:
    // 0x361b88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361b8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x361B8Cu;
    {
        const bool branch_taken_0x361b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361B8Cu;
        // 0x361b90: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361b8c) {
            ctx->pc = 0x361BF0u;
            goto label_361bf0;
        }
    }
    ctx->pc = 0x361B94u;
    // 0x361b94: 0x0  nop
    ctx->pc = 0x361b94u;
    // NOP
label_361b98:
    // 0x361b98: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x361b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x361b9c: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x361B9Cu;
    SET_GPR_U32(ctx, 31, 0x361BA4u);
    ctx->pc = 0x361BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B9Cu;
    // 0x361ba0: 0x3c138000  lui         $s3, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x361B9Cu, 0x361BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BA4u;
label_361ba4:
    // 0x361ba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x361ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ba8: 0x12130011  beq         $s0, $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x361BA8u;
    {
        const bool branch_taken_0x361ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x361BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361BA8u;
        // 0x361bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ba8) {
            ctx->pc = 0x361BF0u;
            goto label_361bf0;
        }
    }
    ctx->pc = 0x361BB0u;
    // 0x361bb0: 0xc0d8e1a  jal         func_363868
    ctx->pc = 0x361BB0u;
    SET_GPR_U32(ctx, 31, 0x361BB8u);
    ctx->pc = 0x361BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361BB0u;
    // 0x361bb4: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363868u, 0x361BB0u, 0x361BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BB8u;
label_361bb8:
    // 0x361bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361bbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361bc0: 0x1233000b  beq         $s1, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x361BC0u;
    {
        const bool branch_taken_0x361bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x361BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361BC0u;
        // 0x361bc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361bc0) {
            ctx->pc = 0x361BF0u;
            goto label_361bf0;
        }
    }
    ctx->pc = 0x361BC8u;
    // 0x361bc8: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361BC8u;
    SET_GPR_U32(ctx, 31, 0x361BD0u);
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361BC8u, 0x361BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BD0u;
label_361bd0:
    // 0x361bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361bd4: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x361bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361bd8: 0x3225007f  andi        $a1, $s1, 0x7F
    ctx->pc = 0x361bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x361bdc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x361bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x361be0: 0x97a60032  lhu         $a2, 0x32($sp)
    ctx->pc = 0x361be0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x361be4: 0xc0d73bc  jal         func_35CEF0
    ctx->pc = 0x361BE4u;
    SET_GPR_U32(ctx, 31, 0x361BECu);
    ctx->pc = 0x361BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361BE4u;
    // 0x361be8: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CEF0u, 0x361BE4u, 0x361BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BECu;
label_361bec:
    // 0x361bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361bf0:
    // 0x361bf0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361bf4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361bf8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361bfc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x361bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361c00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x361c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361c04: 0x3e00008  jr          $ra
    ctx->pc = 0x361C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C04u;
        // 0x361c08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361C0Cu;
    // 0x361c0c: 0x0  nop
    ctx->pc = 0x361c0cu;
    // NOP
label_361c10:
    // 0x361c10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x361c14: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361c18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x361c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c1c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x361c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361c20: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x361c20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x361c24: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361c28: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x361c2c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x361C2Cu;
    {
        const bool branch_taken_0x361c2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x361C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C2Cu;
        // 0x361c30: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c2c) {
            ctx->pc = 0x361C50u;
            goto label_361c50;
        }
    }
    ctx->pc = 0x361C34u;
    // 0x361c34: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361c38: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361C38u;
    SET_GPR_U32(ctx, 31, 0x361C40u);
    ctx->pc = 0x361C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C38u;
    // 0x361c3c: 0x24846fd0  addiu       $a0, $a0, 0x6FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361C38u, 0x361C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C40u;
label_361c40:
    // 0x361c40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361c44: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x361C44u;
    {
        const bool branch_taken_0x361c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C44u;
        // 0x361c48: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c44) {
            ctx->pc = 0x361CACu;
            goto label_361cac;
        }
    }
    ctx->pc = 0x361C4Cu;
    // 0x361c4c: 0x0  nop
    ctx->pc = 0x361c4cu;
    // NOP
label_361c50:
    // 0x361c50: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x361c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x361c54: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x361C54u;
    SET_GPR_U32(ctx, 31, 0x361C5Cu);
    ctx->pc = 0x361C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C54u;
    // 0x361c58: 0x3c138000  lui         $s3, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x361C54u, 0x361C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C5Cu;
label_361c5c:
    // 0x361c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x361c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c60: 0x12130012  beq         $s0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x361C60u;
    {
        const bool branch_taken_0x361c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x361C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C60u;
        // 0x361c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c60) {
            ctx->pc = 0x361CACu;
            goto label_361cac;
        }
    }
    ctx->pc = 0x361C68u;
    // 0x361c68: 0xc0d8e54  jal         func_363950
    ctx->pc = 0x361C68u;
    SET_GPR_U32(ctx, 31, 0x361C70u);
    ctx->pc = 0x361C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C68u;
    // 0x361c6c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363950u, 0x361C68u, 0x361C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C70u;
label_361c70:
    // 0x361c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c78: 0x1233000c  beq         $s1, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x361C78u;
    {
        const bool branch_taken_0x361c78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x361C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C78u;
        // 0x361c7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c78) {
            ctx->pc = 0x361CACu;
            goto label_361cac;
        }
    }
    ctx->pc = 0x361C80u;
    // 0x361c80: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361C80u;
    SET_GPR_U32(ctx, 31, 0x361C88u);
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361C80u, 0x361C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C88u;
label_361c88:
    // 0x361c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c8c: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x361c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361c90: 0x3225000f  andi        $a1, $s1, 0xF
    ctx->pc = 0x361c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x361c94: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x361c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x361c98: 0x97a60032  lhu         $a2, 0x32($sp)
    ctx->pc = 0x361c98u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x361c9c: 0x3042ff0f  andi        $v0, $v0, 0xFF0F
    ctx->pc = 0x361c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65295);
    // 0x361ca0: 0xc0d73bc  jal         func_35CEF0
    ctx->pc = 0x361CA0u;
    SET_GPR_U32(ctx, 31, 0x361CA8u);
    ctx->pc = 0x361CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CA0u;
    // 0x361ca4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CEF0u, 0x361CA0u, 0x361CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CA8u;
label_361ca8:
    // 0x361ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361cac:
    // 0x361cac: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361cb0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361cb4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361cb8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x361cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361cbc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x361cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x361CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CC0u;
        // 0x361cc4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361CC8u;
label_361cc8:
    // 0x361cc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x361ccc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361cd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x361cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361cd4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x361cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361cd8: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x361cd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x361cdc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361ce0: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x361ce4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x361CE4u;
    {
        const bool branch_taken_0x361ce4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x361CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CE4u;
        // 0x361ce8: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ce4) {
            ctx->pc = 0x361D08u;
            goto label_361d08;
        }
    }
    ctx->pc = 0x361CECu;
    // 0x361cec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361cf0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361CF0u;
    SET_GPR_U32(ctx, 31, 0x361CF8u);
    ctx->pc = 0x361CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CF0u;
    // 0x361cf4: 0x24847008  addiu       $a0, $a0, 0x7008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361CF0u, 0x361CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CF8u;
label_361cf8:
    // 0x361cf8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361cfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x361CFCu;
    {
        const bool branch_taken_0x361cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CFCu;
        // 0x361d00: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361cfc) {
            ctx->pc = 0x361D60u;
            goto label_361d60;
        }
    }
    ctx->pc = 0x361D04u;
    // 0x361d04: 0x0  nop
    ctx->pc = 0x361d04u;
    // NOP
label_361d08:
    // 0x361d08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x361d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x361d0c: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x361D0Cu;
    SET_GPR_U32(ctx, 31, 0x361D14u);
    ctx->pc = 0x361D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D0Cu;
    // 0x361d10: 0x3c138000  lui         $s3, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x361D0Cu, 0x361D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D14u;
label_361d14:
    // 0x361d14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x361d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d18: 0x12130011  beq         $s0, $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x361D18u;
    {
        const bool branch_taken_0x361d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x361D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D18u;
        // 0x361d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d18) {
            ctx->pc = 0x361D60u;
            goto label_361d60;
        }
    }
    ctx->pc = 0x361D20u;
    // 0x361d20: 0xc0d8e8e  jal         func_363A38
    ctx->pc = 0x361D20u;
    SET_GPR_U32(ctx, 31, 0x361D28u);
    ctx->pc = 0x361D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D20u;
    // 0x361d24: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A38u, 0x361D20u, 0x361D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D28u;
label_361d28:
    // 0x361d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d30: 0x1233000b  beq         $s1, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x361D30u;
    {
        const bool branch_taken_0x361d30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x361D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D30u;
        // 0x361d34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d30) {
            ctx->pc = 0x361D60u;
            goto label_361d60;
        }
    }
    ctx->pc = 0x361D38u;
    // 0x361d38: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361D38u;
    SET_GPR_U32(ctx, 31, 0x361D40u);
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361D38u, 0x361D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D40u;
label_361d40:
    // 0x361d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d44: 0x97a50030  lhu         $a1, 0x30($sp)
    ctx->pc = 0x361d44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361d48: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x361d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x361d4c: 0x97a60032  lhu         $a2, 0x32($sp)
    ctx->pc = 0x361d4cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x361d50: 0x30a5fff0  andi        $a1, $a1, 0xFFF0
    ctx->pc = 0x361d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65520);
    // 0x361d54: 0xc0d73bc  jal         func_35CEF0
    ctx->pc = 0x361D54u;
    SET_GPR_U32(ctx, 31, 0x361D5Cu);
    ctx->pc = 0x361D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D54u;
    // 0x361d58: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CEF0u, 0x361D54u, 0x361D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D5Cu;
label_361d5c:
    // 0x361d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361d60:
    // 0x361d60: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361d64: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361d68: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361d6c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x361d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361d70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x361d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361d74: 0x3e00008  jr          $ra
    ctx->pc = 0x361D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D74u;
        // 0x361d78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361D7Cu;
    // 0x361d7c: 0x0  nop
    ctx->pc = 0x361d7cu;
    // NOP
label_361d80:
    // 0x361d80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x361d84: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361d88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x361d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d8c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x361d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361d90: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x361d90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x361d94: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361d98: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x361d9c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x361D9Cu;
    {
        const bool branch_taken_0x361d9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x361DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D9Cu;
        // 0x361da0: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d9c) {
            ctx->pc = 0x361DC0u;
            goto label_361dc0;
        }
    }
    ctx->pc = 0x361DA4u;
    // 0x361da4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361da8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361DA8u;
    SET_GPR_U32(ctx, 31, 0x361DB0u);
    ctx->pc = 0x361DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DA8u;
    // 0x361dac: 0x24847040  addiu       $a0, $a0, 0x7040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361DA8u, 0x361DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DB0u;
label_361db0:
    // 0x361db0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361db4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x361DB4u;
    {
        const bool branch_taken_0x361db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361DB4u;
        // 0x361db8: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361db4) {
            ctx->pc = 0x361E1Cu;
            goto label_361e1c;
        }
    }
    ctx->pc = 0x361DBCu;
    // 0x361dbc: 0x0  nop
    ctx->pc = 0x361dbcu;
    // NOP
label_361dc0:
    // 0x361dc0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x361dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x361dc4: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x361DC4u;
    SET_GPR_U32(ctx, 31, 0x361DCCu);
    ctx->pc = 0x361DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DC4u;
    // 0x361dc8: 0x3c138000  lui         $s3, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x361DC4u, 0x361DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DCCu;
label_361dcc:
    // 0x361dcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x361dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361dd0: 0x12130012  beq         $s0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x361DD0u;
    {
        const bool branch_taken_0x361dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x361DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361DD0u;
        // 0x361dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361dd0) {
            ctx->pc = 0x361E1Cu;
            goto label_361e1c;
        }
    }
    ctx->pc = 0x361DD8u;
    // 0x361dd8: 0xc0d8ec2  jal         func_363B08
    ctx->pc = 0x361DD8u;
    SET_GPR_U32(ctx, 31, 0x361DE0u);
    ctx->pc = 0x361DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DD8u;
    // 0x361ddc: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363B08u, 0x361DD8u, 0x361DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DE0u;
label_361de0:
    // 0x361de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361de4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361de8: 0x1233000c  beq         $s1, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x361DE8u;
    {
        const bool branch_taken_0x361de8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x361DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361DE8u;
        // 0x361dec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361de8) {
            ctx->pc = 0x361E1Cu;
            goto label_361e1c;
        }
    }
    ctx->pc = 0x361DF0u;
    // 0x361df0: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361DF0u;
    SET_GPR_U32(ctx, 31, 0x361DF8u);
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361DF0u, 0x361DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DF8u;
label_361df8:
    // 0x361df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361dfc: 0x97a20032  lhu         $v0, 0x32($sp)
    ctx->pc = 0x361dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x361e00: 0x3226007f  andi        $a2, $s1, 0x7F
    ctx->pc = 0x361e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x361e04: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x361e04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x361e08: 0x97a50030  lhu         $a1, 0x30($sp)
    ctx->pc = 0x361e08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361e0c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x361e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x361e10: 0xc0d73bc  jal         func_35CEF0
    ctx->pc = 0x361E10u;
    SET_GPR_U32(ctx, 31, 0x361E18u);
    ctx->pc = 0x361E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E10u;
    // 0x361e14: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CEF0u, 0x361E10u, 0x361E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E18u;
label_361e18:
    // 0x361e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361e1c:
    // 0x361e1c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361e20: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361e24: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361e28: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x361e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361e2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x361e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361e30: 0x3e00008  jr          $ra
    ctx->pc = 0x361E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E30u;
        // 0x361e34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361E38u;
label_361e38:
    // 0x361e38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x361e3c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361e40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x361e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e44: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x361e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361e48: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x361e48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x361e4c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361e50: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x361e54: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x361E54u;
    {
        const bool branch_taken_0x361e54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x361E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E54u;
        // 0x361e58: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e54) {
            ctx->pc = 0x361E78u;
            goto label_361e78;
        }
    }
    ctx->pc = 0x361E5Cu;
    // 0x361e5c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361e60: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361E60u;
    SET_GPR_U32(ctx, 31, 0x361E68u);
    ctx->pc = 0x361E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E60u;
    // 0x361e64: 0x24847078  addiu       $a0, $a0, 0x7078 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361E60u, 0x361E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E68u;
label_361e68:
    // 0x361e68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361e6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x361E6Cu;
    {
        const bool branch_taken_0x361e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E6Cu;
        // 0x361e70: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e6c) {
            ctx->pc = 0x361ED0u;
            goto label_361ed0;
        }
    }
    ctx->pc = 0x361E74u;
    // 0x361e74: 0x0  nop
    ctx->pc = 0x361e74u;
    // NOP
label_361e78:
    // 0x361e78: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x361e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x361e7c: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x361E7Cu;
    SET_GPR_U32(ctx, 31, 0x361E84u);
    ctx->pc = 0x361E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E7Cu;
    // 0x361e80: 0x3c138000  lui         $s3, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x361E7Cu, 0x361E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E84u;
label_361e84:
    // 0x361e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x361e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e88: 0x12130011  beq         $s0, $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x361E88u;
    {
        const bool branch_taken_0x361e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x361E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E88u;
        // 0x361e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e88) {
            ctx->pc = 0x361ED0u;
            goto label_361ed0;
        }
    }
    ctx->pc = 0x361E90u;
    // 0x361e90: 0xc0d8f00  jal         func_363C00
    ctx->pc = 0x361E90u;
    SET_GPR_U32(ctx, 31, 0x361E98u);
    ctx->pc = 0x361E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E90u;
    // 0x361e94: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363C00u, 0x361E90u, 0x361E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E98u;
label_361e98:
    // 0x361e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ea0: 0x1233000b  beq         $s1, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x361EA0u;
    {
        const bool branch_taken_0x361ea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x361EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361EA0u;
        // 0x361ea4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ea0) {
            ctx->pc = 0x361ED0u;
            goto label_361ed0;
        }
    }
    ctx->pc = 0x361EA8u;
    // 0x361ea8: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361EA8u;
    SET_GPR_U32(ctx, 31, 0x361EB0u);
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361EA8u, 0x361EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361EB0u;
label_361eb0:
    // 0x361eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361eb4: 0x97a60032  lhu         $a2, 0x32($sp)
    ctx->pc = 0x361eb4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x361eb8: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x361eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x361ebc: 0x97a50030  lhu         $a1, 0x30($sp)
    ctx->pc = 0x361ebcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361ec0: 0x30c6ffc0  andi        $a2, $a2, 0xFFC0
    ctx->pc = 0x361ec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65472);
    // 0x361ec4: 0xc0d73bc  jal         func_35CEF0
    ctx->pc = 0x361EC4u;
    SET_GPR_U32(ctx, 31, 0x361ECCu);
    ctx->pc = 0x361EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361EC4u;
    // 0x361ec8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CEF0u, 0x361EC4u, 0x361ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361ECCu;
label_361ecc:
    // 0x361ecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361ed0:
    // 0x361ed0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361ed4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361ed8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x361ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361edc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x361edcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x361ee0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x361ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x361EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361EE4u;
        // 0x361ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361EECu;
    // 0x361eec: 0x0  nop
    ctx->pc = 0x361eecu;
    // NOP
    ctx->pc = 0x361ef0u;
}
