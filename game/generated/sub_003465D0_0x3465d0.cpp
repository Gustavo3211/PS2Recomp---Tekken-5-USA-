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

// Function: sub_003465D0
// Address: 0x3465d0 - 0x346740
void sub_003465D0_0x3465d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003465D0_0x3465d0");
#endif

    switch (ctx->pc) {
        case 0x346638u: goto label_346638;
        case 0x346660u: goto label_346660;
        case 0x346678u: goto label_346678;
        case 0x34669cu: goto label_34669c;
        case 0x3466c4u: goto label_3466c4;
        case 0x3466dcu: goto label_3466dc;
        case 0x34671cu: goto label_34671c;
        default: break;
    }

    ctx->pc = 0x3465d0u;

    // 0x3465d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3465d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3465d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3465d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3465d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3465d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3465dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3465dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3465e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3465e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3465e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465e8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3465e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3465ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3465ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3465f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3465f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3465f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3465f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3465f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3465fc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3465fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x346600: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x346600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x346604: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x346604u;
    {
        const bool branch_taken_0x346604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x346608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346604u;
        // 0x346608: 0xc6340020  lwc1        $f20, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346604) {
            ctx->pc = 0x346614u;
            goto label_346614;
        }
    }
    ctx->pc = 0x34660Cu;
    // 0x34660c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x346610: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x346610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_346614:
    // 0x346614: 0xc7809680  lwc1        $f0, -0x6980($gp)
    ctx->pc = 0x346614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346618: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x346618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34661c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x34661Cu;
    {
        const bool branch_taken_0x34661c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x346620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34661Cu;
        // 0x346620: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34661c) {
            ctx->pc = 0x346720u;
            goto label_346720;
        }
    }
    ctx->pc = 0x346624u;
    // 0x346624: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x346624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x346628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x346628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34662c: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x34662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x346630: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x346630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x346634: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x346634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_346638:
    // 0x346638: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x346638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34663c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x34663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x346640: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x346640u;
    {
        const bool branch_taken_0x346640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346640u;
        // 0x346644: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346640) {
            ctx->pc = 0x3466E8u;
            goto label_3466e8;
        }
    }
    ctx->pc = 0x346648u;
    // 0x346648: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x346648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34664c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x34664cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x346650: 0x0  nop
    ctx->pc = 0x346650u;
    // NOP
    // 0x346654: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x346654u;
    {
        const bool branch_taken_0x346654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346654u;
        // 0x346658: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346654) {
            ctx->pc = 0x346638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346638;
        }
    }
    ctx->pc = 0x34665Cu;
    // 0x34665c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34665cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346660:
    // 0x346660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x346664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346668: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x346668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34666c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x34666cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346670: 0xc0d25b4  jal         func_3496D0
    ctx->pc = 0x346670u;
    SET_GPR_U32(ctx, 31, 0x346678u);
    ctx->pc = 0x346674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346670u;
    // 0x346674: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496D0u, 0x346670u, 0x346678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346678u;
label_346678:
    // 0x346678: 0x9223001e  lbu         $v1, 0x1E($s1)
    ctx->pc = 0x346678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x34667c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34667cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346680: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x346680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x346684: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346684u;
    {
        const bool branch_taken_0x346684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x346688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346684u;
        // 0x346688: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346684) {
            ctx->pc = 0x3466A0u;
            goto label_3466a0;
        }
    }
    ctx->pc = 0x34668Cu;
    // 0x34668c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x34668cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346694: 0xc0d242c  jal         func_3490B0
    ctx->pc = 0x346694u;
    SET_GPR_U32(ctx, 31, 0x34669Cu);
    ctx->pc = 0x346698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346694u;
    // 0x346698: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3490B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3490B0u, 0x346694u, 0x34669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34669Cu;
label_34669c:
    // 0x34669c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34669cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3466a0:
    // 0x3466a0: 0xc7809684  lwc1        $f0, -0x697C($gp)
    ctx->pc = 0x3466a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3466a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3466a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3466a8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3466A8u;
    {
        const bool branch_taken_0x3466a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3466ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3466A8u;
        // 0x3466ac: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3466a8) {
            ctx->pc = 0x346708u;
            goto label_346708;
        }
    }
    ctx->pc = 0x3466B0u;
    // 0x3466b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3466b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3466b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3466b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3466b8: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x3466b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x3466bc: 0xc0d1ce0  jal         func_347380
    ctx->pc = 0x3466BCu;
    SET_GPR_U32(ctx, 31, 0x3466C4u);
    ctx->pc = 0x3466C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3466BCu;
    // 0x3466c0: 0x248401f4  addiu       $a0, $a0, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347380u, 0x3466BCu, 0x3466C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3466C4u;
label_3466c4:
    // 0x3466c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3466c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3466c8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3466c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3466cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3466ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3466d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3466d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3466d4: 0xc0d28e8  jal         func_34A3A0
    ctx->pc = 0x3466D4u;
    SET_GPR_U32(ctx, 31, 0x3466DCu);
    ctx->pc = 0x3466D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3466D4u;
    // 0x3466d8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A3A0u, 0x3466D4u, 0x3466DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3466DCu;
label_3466dc:
    // 0x3466dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3466DCu;
    {
        const bool branch_taken_0x3466dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3466E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3466DCu;
        // 0x3466e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3466dc) {
            ctx->pc = 0x346720u;
            goto label_346720;
        }
    }
    ctx->pc = 0x3466E4u;
    // 0x3466e4: 0x0  nop
    ctx->pc = 0x3466e4u;
    // NOP
label_3466e8:
    // 0x3466e8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3466e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3466ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3466ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3466f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3466f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3466f4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3466f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3466f8: 0x3c127000  lui         $s2, 0x7000
    ctx->pc = 0x3466f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28672 << 16));
    // 0x3466fc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3466fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x346700: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x346700u;
    {
        const bool branch_taken_0x346700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346700u;
        // 0x346704: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346700) {
            ctx->pc = 0x346660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346660;
        }
    }
    ctx->pc = 0x346708u;
label_346708:
    // 0x346708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34670c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34670cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346710: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x346710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346714: 0xc0d27f2  jal         func_349FC8
    ctx->pc = 0x346714u;
    SET_GPR_U32(ctx, 31, 0x34671Cu);
    ctx->pc = 0x346718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346714u;
    // 0x346718: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FC8u, 0x346714u, 0x34671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34671Cu;
label_34671c:
    // 0x34671c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34671cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_346720:
    // 0x346720: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x346720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346724: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x346724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346728: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x346728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34672c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34672cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346730: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x346730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x346734: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x346734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x346738: 0x3e00008  jr          $ra
    ctx->pc = 0x346738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346738u;
        // 0x34673c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346740u;
}
