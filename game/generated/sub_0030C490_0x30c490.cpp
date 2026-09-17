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

// Function: sub_0030C490
// Address: 0x30c490 - 0x30c848
void sub_0030C490_0x30c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C490_0x30c490");
#endif

    switch (ctx->pc) {
        case 0x30c4e8u: goto label_30c4e8;
        case 0x30c4fcu: goto label_30c4fc;
        case 0x30c518u: goto label_30c518;
        case 0x30c534u: goto label_30c534;
        case 0x30c5f0u: goto label_30c5f0;
        case 0x30c5fcu: goto label_30c5fc;
        case 0x30c614u: goto label_30c614;
        case 0x30c628u: goto label_30c628;
        case 0x30c630u: goto label_30c630;
        case 0x30c638u: goto label_30c638;
        case 0x30c640u: goto label_30c640;
        case 0x30c71cu: goto label_30c71c;
        case 0x30c754u: goto label_30c754;
        case 0x30c7dcu: goto label_30c7dc;
        case 0x30c814u: goto label_30c814;
        default: break;
    }

    ctx->pc = 0x30c490u;

    // 0x30c490: 0x8f86c538  lw          $a2, -0x3AC8($gp)
    ctx->pc = 0x30c490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952248)));
    // 0x30c494: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c498: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x30c498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x30c49c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c4a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30c4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30c4a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30c4a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4a8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x30c4a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30c4ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30c4acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30c4b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c4b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x30c4bc: 0x10c3002c  beq         $a2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x30C4BCu;
    {
        const bool branch_taken_0x30c4bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4BCu;
        // 0x30c4c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4bc) {
            ctx->pc = 0x30C570u;
            goto label_30c570;
        }
    }
    ctx->pc = 0x30C4C4u;
    // 0x30c4c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x30c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30c4c8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x30c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x30c4cc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x30C4CCu;
    {
        const bool branch_taken_0x30c4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4CCu;
        // 0x30c4d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4cc) {
            ctx->pc = 0x30C570u;
            goto label_30c570;
        }
    }
    ctx->pc = 0x30C4D4u;
    // 0x30c4d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30c4d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C4D8u;
    {
        const bool branch_taken_0x30c4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c4d8) {
            ctx->pc = 0x30C4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C4D8u;
            // 0x30c4dc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C4ECu;
            goto label_30c4ec;
        }
    }
    ctx->pc = 0x30C4E0u;
    // 0x30c4e0: 0xc0c4678  jal         func_3119E0
    ctx->pc = 0x30C4E0u;
    SET_GPR_U32(ctx, 31, 0x30C4E8u);
    ctx->pc = 0x30C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C4E0u;
    // 0x30c4e4: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119E0u, 0x30C4E0u, 0x30C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C4E8u;
label_30c4e8:
    // 0x30c4e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30c4ec:
    // 0x30c4ec: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x30c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x30c4f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30c4f4: 0xc0c4670  jal         func_3119C0
    ctx->pc = 0x30C4F4u;
    SET_GPR_U32(ctx, 31, 0x30C4FCu);
    ctx->pc = 0x30C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C4F4u;
    // 0x30c4f8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119C0u, 0x30C4F4u, 0x30C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C4FCu;
label_30c4fc:
    // 0x30c4fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30c4fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c500: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30c500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c504: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x30c504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c508: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30C508u;
    {
        const bool branch_taken_0x30c508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C508u;
        // 0x30c50c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c508) {
            ctx->pc = 0x30C570u;
            goto label_30c570;
        }
    }
    ctx->pc = 0x30C510u;
    // 0x30c510: 0xc0c4670  jal         func_3119C0
    ctx->pc = 0x30C510u;
    SET_GPR_U32(ctx, 31, 0x30C518u);
    ctx->pc = 0x3119C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119C0u, 0x30C510u, 0x30C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C518u;
label_30c518:
    // 0x30c518: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x30c518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x30c51c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30c51cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c524: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C524u;
    {
        const bool branch_taken_0x30c524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C524u;
        // 0x30c528: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c524) {
            ctx->pc = 0x30C540u;
            goto label_30c540;
        }
    }
    ctx->pc = 0x30C52Cu;
    // 0x30c52c: 0xc0c4678  jal         func_3119E0
    ctx->pc = 0x30C52Cu;
    SET_GPR_U32(ctx, 31, 0x30C534u);
    ctx->pc = 0x3119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119E0u, 0x30C52Cu, 0x30C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C534u;
label_30c534:
    // 0x30c534: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30C534u;
    {
        const bool branch_taken_0x30c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C534u;
        // 0x30c538: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c534) {
            ctx->pc = 0x30C570u;
            goto label_30c570;
        }
    }
    ctx->pc = 0x30C53Cu;
    // 0x30c53c: 0x0  nop
    ctx->pc = 0x30c53cu;
    // NOP
label_30c540:
    // 0x30c540: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x30c540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30c544: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x30c544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30c548: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x30c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x30c54c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x30c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x30c550: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x30c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c554: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x30c554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30c558: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x30c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c55c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x30c55cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x30c560: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x30c560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c564: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x30c564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x30c568: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x30c568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c56c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x30c56cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_30c570:
    // 0x30c570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30c578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c57c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30c57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c580: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x30c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c584: 0x3e00008  jr          $ra
    ctx->pc = 0x30C584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C584u;
        // 0x30c588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C58Cu;
    // 0x30c58c: 0x0  nop
    ctx->pc = 0x30c58cu;
    // NOP
    // 0x30c590: 0x8f87c538  lw          $a3, -0x3AC8($gp)
    ctx->pc = 0x30c590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952248)));
    // 0x30c594: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c598: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x30c598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x30c59c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30c5a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x30c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x30c5a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x30c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x30c5ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30c5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5b0: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x30c5b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x30c5b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30c5b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30c5b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x30c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30c5bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30c5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30c5c4: 0x10e30038  beq         $a3, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x30C5C4u;
    {
        const bool branch_taken_0x30c5c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5C4u;
        // 0x30c5c8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5c4) {
            ctx->pc = 0x30C6A8u;
            goto label_30c6a8;
        }
    }
    ctx->pc = 0x30C5CCu;
    // 0x30c5cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x30c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30c5d0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x30c5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x30c5d4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x30C5D4u;
    {
        const bool branch_taken_0x30c5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5D4u;
        // 0x30c5d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5d4) {
            ctx->pc = 0x30C6A8u;
            goto label_30c6a8;
        }
    }
    ctx->pc = 0x30C5DCu;
    // 0x30c5dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30c5e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C5E0u;
    {
        const bool branch_taken_0x30c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c5e0) {
            ctx->pc = 0x30C5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C5E0u;
            // 0x30c5e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C5F4u;
            goto label_30c5f4;
        }
    }
    ctx->pc = 0x30C5E8u;
    // 0x30c5e8: 0xc0c4678  jal         func_3119E0
    ctx->pc = 0x30C5E8u;
    SET_GPR_U32(ctx, 31, 0x30C5F0u);
    ctx->pc = 0x30C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C5E8u;
    // 0x30c5ec: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119E0u, 0x30C5E8u, 0x30C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5F0u;
label_30c5f0:
    // 0x30c5f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30c5f4:
    // 0x30c5f4: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x30C5F4u;
    SET_GPR_U32(ctx, 31, 0x30C5FCu);
    ctx->pc = 0x30C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C5F4u;
    // 0x30c5f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x30C5F4u, 0x30C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5FCu;
label_30c5fc:
    // 0x30c5fc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x30c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30c600: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x30c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x30c604: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30c604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c608: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30c608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c60c: 0xc0c4670  jal         func_3119C0
    ctx->pc = 0x30C60Cu;
    SET_GPR_U32(ctx, 31, 0x30C614u);
    ctx->pc = 0x30C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C60Cu;
    // 0x30c610: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119C0u, 0x30C60Cu, 0x30C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C614u;
label_30c614:
    // 0x30c614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c618: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C618u;
    {
        const bool branch_taken_0x30c618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C618u;
        // 0x30c61c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c618) {
            ctx->pc = 0x30C638u;
            goto label_30c638;
        }
    }
    ctx->pc = 0x30C620u;
    // 0x30c620: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x30C620u;
    {
        const bool branch_taken_0x30c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C620u;
        // 0x30c624: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c620) {
            ctx->pc = 0x30C6A8u;
            goto label_30c6a8;
        }
    }
    ctx->pc = 0x30C628u;
label_30c628:
    // 0x30c628: 0xc0c4678  jal         func_3119E0
    ctx->pc = 0x30C628u;
    SET_GPR_U32(ctx, 31, 0x30C630u);
    ctx->pc = 0x30C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C628u;
    // 0x30c62c: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119E0u, 0x30C628u, 0x30C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C630u;
label_30c630:
    // 0x30c630: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30C630u;
    {
        const bool branch_taken_0x30c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C630u;
        // 0x30c634: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c630) {
            ctx->pc = 0x30C6A8u;
            goto label_30c6a8;
        }
    }
    ctx->pc = 0x30C638u;
label_30c638:
    // 0x30c638: 0xc0c4670  jal         func_3119C0
    ctx->pc = 0x30C638u;
    SET_GPR_U32(ctx, 31, 0x30C640u);
    ctx->pc = 0x3119C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119C0u, 0x30C638u, 0x30C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C640u;
label_30c640:
    // 0x30c640: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30c640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x30c644: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c648: 0x1200fff7  beqz        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30C648u;
    {
        const bool branch_taken_0x30c648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C648u;
        // 0x30c64c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c648) {
            ctx->pc = 0x30C628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c628;
        }
    }
    ctx->pc = 0x30C650u;
    // 0x30c650: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x30c650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30c654: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30C654u;
    {
        const bool branch_taken_0x30c654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C654u;
        // 0x30c658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c654) {
            ctx->pc = 0x30C638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c638;
        }
    }
    ctx->pc = 0x30C65Cu;
    // 0x30c65c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x30c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30c660: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x30c660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30c664: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30c664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30c668: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x30c668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x30c66c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x30c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c670: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x30c670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30c674: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x30c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c678: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x30c678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x30c67c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x30c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c680: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x30c680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x30c684: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x30c684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c688: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x30c688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c68c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x30c68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30c690: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x30c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c694: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x30c694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x30c698: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x30c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c69c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x30c69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x30c6a0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x30c6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c6a4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x30c6a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_30c6a8:
    // 0x30c6a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30c6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c6ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x30c6acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c6b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30c6b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c6b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x30c6b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c6b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30c6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c6bc: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x30c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30C6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6C0u;
        // 0x30c6c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C6C8u;
    // 0x30c6c8: 0x8f87c538  lw          $a3, -0x3AC8($gp)
    ctx->pc = 0x30c6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952248)));
    // 0x30c6cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c6ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c6d0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x30c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x30c6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c6d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c6dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30c6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30c6e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30c6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x30c6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6f0: 0x10e3001f  beq         $a3, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x30C6F0u;
    {
        const bool branch_taken_0x30c6f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6F0u;
        // 0x30c6f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6f0) {
            ctx->pc = 0x30C770u;
            goto label_30c770;
        }
    }
    ctx->pc = 0x30C6F8u;
    // 0x30c6f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x30c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c6fc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x30c6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x30c700: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x30C700u;
    {
        const bool branch_taken_0x30c700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C700u;
        // 0x30c704: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c700) {
            ctx->pc = 0x30C770u;
            goto label_30c770;
        }
    }
    ctx->pc = 0x30C708u;
    // 0x30c708: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x30c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30c70c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C70Cu;
    {
        const bool branch_taken_0x30c70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c70c) {
            ctx->pc = 0x30C710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C70Cu;
            // 0x30c710: 0x2e230003  sltiu       $v1, $s1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C720u;
            goto label_30c720;
        }
    }
    ctx->pc = 0x30C714u;
    // 0x30c714: 0xc0c4678  jal         func_3119E0
    ctx->pc = 0x30C714u;
    SET_GPR_U32(ctx, 31, 0x30C71Cu);
    ctx->pc = 0x30C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C714u;
    // 0x30c718: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119E0u, 0x30C714u, 0x30C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C71Cu;
label_30c71c:
    // 0x30c71c: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x30c71cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_30c720:
    // 0x30c720: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30C720u;
    {
        const bool branch_taken_0x30c720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C720u;
        // 0x30c724: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c720) {
            ctx->pc = 0x30C770u;
            goto label_30c770;
        }
    }
    ctx->pc = 0x30C728u;
    // 0x30c728: 0x2e230021  sltiu       $v1, $s1, 0x21
    ctx->pc = 0x30c728u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x30c72c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x30C72Cu;
    {
        const bool branch_taken_0x30c72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C72Cu;
        // 0x30c730: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c72c) {
            ctx->pc = 0x30C770u;
            goto label_30c770;
        }
    }
    ctx->pc = 0x30C734u;
    // 0x30c734: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c738: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x30c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x30c73c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30c73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30c740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c744: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30c744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30c748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c74c: 0xc0c3334  jal         func_30CCD0
    ctx->pc = 0x30C74Cu;
    SET_GPR_U32(ctx, 31, 0x30C754u);
    ctx->pc = 0x30C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C74Cu;
    // 0x30c750: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CCD0u, 0x30C74Cu, 0x30C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C754u;
label_30c754:
    // 0x30c754: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C754u;
    {
        const bool branch_taken_0x30c754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c754) {
            ctx->pc = 0x30C758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C754u;
            // 0x30c758: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C768u;
            goto label_30c768;
        }
    }
    ctx->pc = 0x30C75Cu;
    // 0x30c75c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30C75Cu;
    {
        const bool branch_taken_0x30c75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C75Cu;
        // 0x30c760: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c75c) {
            ctx->pc = 0x30C770u;
            goto label_30c770;
        }
    }
    ctx->pc = 0x30C764u;
    // 0x30c764: 0x0  nop
    ctx->pc = 0x30c764u;
    // NOP
label_30c768:
    // 0x30c768: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30c768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30c76c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x30c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_30c770:
    // 0x30c770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30c778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c77c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30c77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c780: 0x3e00008  jr          $ra
    ctx->pc = 0x30C780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C780u;
        // 0x30c784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C788u;
    // 0x30c788: 0x8f87c538  lw          $a3, -0x3AC8($gp)
    ctx->pc = 0x30c788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952248)));
    // 0x30c78c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c78cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c790: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x30c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x30c794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c79c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30c79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30c7a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30c7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x30c7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7b0: 0x10e3001f  beq         $a3, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x30C7B0u;
    {
        const bool branch_taken_0x30c7b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7B0u;
        // 0x30c7b4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7b0) {
            ctx->pc = 0x30C830u;
            goto label_30c830;
        }
    }
    ctx->pc = 0x30C7B8u;
    // 0x30c7b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x30c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c7bc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x30c7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x30c7c0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x30C7C0u;
    {
        const bool branch_taken_0x30c7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7C0u;
        // 0x30c7c4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7c0) {
            ctx->pc = 0x30C830u;
            goto label_30c830;
        }
    }
    ctx->pc = 0x30C7C8u;
    // 0x30c7c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x30c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30c7cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C7CCu;
    {
        const bool branch_taken_0x30c7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c7cc) {
            ctx->pc = 0x30C7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C7CCu;
            // 0x30c7d0: 0x2e230003  sltiu       $v1, $s1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C7E0u;
            goto label_30c7e0;
        }
    }
    ctx->pc = 0x30C7D4u;
    // 0x30c7d4: 0xc0c4678  jal         func_3119E0
    ctx->pc = 0x30C7D4u;
    SET_GPR_U32(ctx, 31, 0x30C7DCu);
    ctx->pc = 0x30C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7D4u;
    // 0x30c7d8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119E0u, 0x30C7D4u, 0x30C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7DCu;
label_30c7dc:
    // 0x30c7dc: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x30c7dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_30c7e0:
    // 0x30c7e0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30C7E0u;
    {
        const bool branch_taken_0x30c7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7E0u;
        // 0x30c7e4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7e0) {
            ctx->pc = 0x30C830u;
            goto label_30c830;
        }
    }
    ctx->pc = 0x30C7E8u;
    // 0x30c7e8: 0x2e230021  sltiu       $v1, $s1, 0x21
    ctx->pc = 0x30c7e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x30c7ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x30C7ECu;
    {
        const bool branch_taken_0x30c7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7ECu;
        // 0x30c7f0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7ec) {
            ctx->pc = 0x30C830u;
            goto label_30c830;
        }
    }
    ctx->pc = 0x30C7F4u;
    // 0x30c7f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c7f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x30c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x30c7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c800: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30c800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c804: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30c804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30c808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c80c: 0xc0c3334  jal         func_30CCD0
    ctx->pc = 0x30C80Cu;
    SET_GPR_U32(ctx, 31, 0x30C814u);
    ctx->pc = 0x30C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C80Cu;
    // 0x30c810: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CCD0u, 0x30C80Cu, 0x30C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C814u;
label_30c814:
    // 0x30c814: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C814u;
    {
        const bool branch_taken_0x30c814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c814) {
            ctx->pc = 0x30C818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C814u;
            // 0x30c818: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C828u;
            goto label_30c828;
        }
    }
    ctx->pc = 0x30C81Cu;
    // 0x30c81c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30C81Cu;
    {
        const bool branch_taken_0x30c81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C81Cu;
        // 0x30c820: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c81c) {
            ctx->pc = 0x30C830u;
            goto label_30c830;
        }
    }
    ctx->pc = 0x30C824u;
    // 0x30c824: 0x0  nop
    ctx->pc = 0x30c824u;
    // NOP
label_30c828:
    // 0x30c828: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x30c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x30c82c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x30c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_30c830:
    // 0x30c830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c838: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30c838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c83c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30c83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c840: 0x3e00008  jr          $ra
    ctx->pc = 0x30C840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C840u;
        // 0x30c844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C848u;
}
