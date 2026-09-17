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

// Function: sub_0020D818
// Address: 0x20d818 - 0x20da48
void sub_0020D818_0x20d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D818_0x20d818");
#endif

    switch (ctx->pc) {
        case 0x20d83cu: goto label_20d83c;
        case 0x20d858u: goto label_20d858;
        case 0x20d890u: goto label_20d890;
        case 0x20d900u: goto label_20d900;
        case 0x20d958u: goto label_20d958;
        case 0x20d9a0u: goto label_20d9a0;
        default: break;
    }

    ctx->pc = 0x20d818u;

    // 0x20d818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20d818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20d81c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20d820: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20d824: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20d828: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20d82c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20d830: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20d834: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x20D834u;
    SET_GPR_U32(ctx, 31, 0x20D83Cu);
    ctx->pc = 0x20D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D834u;
    // 0x20d838: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x20D834u, 0x20D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D83Cu;
label_20d83c:
    // 0x20d83c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20d83cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d840: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x20D840u;
    {
        const bool branch_taken_0x20d840 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x20D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D840u;
        // 0x20d844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d840) {
            ctx->pc = 0x20D87Cu;
            goto label_20d87c;
        }
    }
    ctx->pc = 0x20D848u;
    // 0x20d848: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20d84c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d850: 0x244688d0  addiu       $a2, $v0, -0x7730
    ctx->pc = 0x20d850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20d854: 0x0  nop
    ctx->pc = 0x20d854u;
    // NOP
label_20d858:
    // 0x20d858: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20d858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20d85c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20d860: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20d864: 0xb2202a  slt         $a0, $a1, $s2
    ctx->pc = 0x20d864u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x20d868: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20d86c: 0xe4600690  swc1        $f0, 0x690($v1)
    ctx->pc = 0x20d86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1680), bits); }
    // 0x20d870: 0xe4600698  swc1        $f0, 0x698($v1)
    ctx->pc = 0x20d870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1688), bits); }
    // 0x20d874: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20D874u;
    {
        const bool branch_taken_0x20d874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D874u;
        // 0x20d878: 0xe4600694  swc1        $f0, 0x694($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1684), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d874) {
            ctx->pc = 0x20D858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d858;
        }
    }
    ctx->pc = 0x20D87Cu;
label_20d87c:
    // 0x20d87c: 0x1a400040  blez        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x20D87Cu;
    {
        const bool branch_taken_0x20d87c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x20D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D87Cu;
        // 0x20d880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d87c) {
            ctx->pc = 0x20D980u;
            goto label_20d980;
        }
    }
    ctx->pc = 0x20D884u;
    // 0x20d884: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20d888: 0x245488d0  addiu       $s4, $v0, -0x7730
    ctx->pc = 0x20d888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20d88c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20d890:
    // 0x20d890: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20d894: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x20d894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20d898: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20d898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x20d89c: 0x8c830898  lw          $v1, 0x898($a0)
    ctx->pc = 0x20d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x20d8a0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x20d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x20d8a4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x20D8A4u;
    {
        const bool branch_taken_0x20d8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8A4u;
        // 0x20d8a8: 0x24b10001  addiu       $s1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8a4) {
            ctx->pc = 0x20D970u;
            goto label_20d970;
        }
    }
    ctx->pc = 0x20D8ACu;
    // 0x20d8ac: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x20d8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d8b0: 0xc78083cc  lwc1        $f0, -0x7C34($gp)
    ctx->pc = 0x20d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d8b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20d8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d8b8: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x20D8B8u;
    {
        const bool branch_taken_0x20d8b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d8b8) {
            ctx->pc = 0x20D8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D8B8u;
            // 0x20d8bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D974u;
            goto label_20d974;
        }
    }
    ctx->pc = 0x20D8C0u;
    // 0x20d8c0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x20d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x20d8c4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20d8c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20d8c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D8C8u;
    {
        const bool branch_taken_0x20d8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8C8u;
        // 0x20d8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8c8) {
            ctx->pc = 0x20D8DCu;
            goto label_20d8dc;
        }
    }
    ctx->pc = 0x20D8D0u;
    // 0x20d8d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D8D0u;
    {
        const bool branch_taken_0x20d8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8D0u;
        // 0x20d8d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8d0) {
            ctx->pc = 0x20D8DCu;
            goto label_20d8dc;
        }
    }
    ctx->pc = 0x20D8D8u;
    // 0x20d8d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20d8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d8dc:
    // 0x20d8dc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20D8DCu;
    {
        const bool branch_taken_0x20d8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8DCu;
        // 0x20d8e0: 0x24b10001  addiu       $s1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8dc) {
            ctx->pc = 0x20D970u;
            goto label_20d970;
        }
    }
    ctx->pc = 0x20D8E4u;
    // 0x20d8e4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x20d8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x20d8e8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20D8E8u;
    {
        const bool branch_taken_0x20d8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E8u;
        // 0x20d8ec: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8e8) {
            ctx->pc = 0x20D970u;
            goto label_20d970;
        }
    }
    ctx->pc = 0x20D8F0u;
    // 0x20d8f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20d8f4: 0xc79483d0  lwc1        $f20, -0x7C30($gp)
    ctx->pc = 0x20d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d8f8: 0x245388d0  addiu       $s3, $v0, -0x7730
    ctx->pc = 0x20d8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20d8fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20d900:
    // 0x20d900: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20d904: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x20d904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20d908: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x20d908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x20d90c: 0x8c830898  lw          $v1, 0x898($a0)
    ctx->pc = 0x20d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x20d910: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x20d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x20d914: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D914u;
    {
        const bool branch_taken_0x20d914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D914u;
        // 0x20d918: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d914) {
            ctx->pc = 0x20D958u;
            goto label_20d958;
        }
    }
    ctx->pc = 0x20D91Cu;
    // 0x20d91c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x20d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d920: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x20d920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d924: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x20D924u;
    {
        const bool branch_taken_0x20d924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D924u;
        // 0x20d928: 0x212102a  slt         $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d924) {
            ctx->pc = 0x20D95Cu;
            goto label_20d95c;
        }
    }
    ctx->pc = 0x20D92Cu;
    // 0x20d92c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x20d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x20d930: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20d930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20d934: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D934u;
    {
        const bool branch_taken_0x20d934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D934u;
        // 0x20d938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d934) {
            ctx->pc = 0x20D948u;
            goto label_20d948;
        }
    }
    ctx->pc = 0x20D93Cu;
    // 0x20d93c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D93Cu;
    {
        const bool branch_taken_0x20d93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D93Cu;
        // 0x20d940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d93c) {
            ctx->pc = 0x20D948u;
            goto label_20d948;
        }
    }
    ctx->pc = 0x20D944u;
    // 0x20d944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20d944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d948:
    // 0x20d948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D948u;
    {
        const bool branch_taken_0x20d948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D948u;
        // 0x20d94c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d948) {
            ctx->pc = 0x20D958u;
            goto label_20d958;
        }
    }
    ctx->pc = 0x20D950u;
    // 0x20d950: 0xc0834fe  jal         func_20D3F8
    ctx->pc = 0x20D950u;
    SET_GPR_U32(ctx, 31, 0x20D958u);
    ctx->pc = 0x20D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D950u;
    // 0x20d954: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D3F8u, 0x20D950u, 0x20D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D958u;
label_20d958:
    // 0x20d958: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x20d958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_20d95c:
    // 0x20d95c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x20D95Cu;
    {
        const bool branch_taken_0x20d95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D95Cu;
        // 0x20d960: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d95c) {
            ctx->pc = 0x20D900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d900;
        }
    }
    ctx->pc = 0x20D964u;
    // 0x20d964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D964u;
    {
        const bool branch_taken_0x20d964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D964u;
        // 0x20d968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d964) {
            ctx->pc = 0x20D974u;
            goto label_20d974;
        }
    }
    ctx->pc = 0x20D96Cu;
    // 0x20d96c: 0x0  nop
    ctx->pc = 0x20d96cu;
    // NOP
label_20d970:
    // 0x20d970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20d970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d974:
    // 0x20d974: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x20d974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x20d978: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x20D978u;
    {
        const bool branch_taken_0x20d978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D978u;
        // 0x20d97c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d978) {
            ctx->pc = 0x20D890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d890;
        }
    }
    ctx->pc = 0x20D980u;
label_20d980:
    // 0x20d980: 0x1a400027  blez        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x20D980u;
    {
        const bool branch_taken_0x20d980 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x20D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D980u;
        // 0x20d984: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d980) {
            ctx->pc = 0x20DA20u;
            goto label_20da20;
        }
    }
    ctx->pc = 0x20D988u;
    // 0x20d988: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20d988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20d98c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x20d98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x20d990: 0x244688d0  addiu       $a2, $v0, -0x7730
    ctx->pc = 0x20d990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20d994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d998: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20d998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d99c: 0x0  nop
    ctx->pc = 0x20d99cu;
    // NOP
label_20d9a0:
    // 0x20d9a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d9a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20d9a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20d9ac: 0xc4450690  lwc1        $f5, 0x690($v0)
    ctx->pc = 0x20d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20d9b0: 0x46062832  c.eq.s      $f5, $f6
    ctx->pc = 0x20d9b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d9b4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x20D9B4u;
    {
        const bool branch_taken_0x20d9b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9B4u;
        // 0x20d9b8: 0x72202a  slt         $a0, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9b4) {
            ctx->pc = 0x20D9E0u;
            goto label_20d9e0;
        }
    }
    ctx->pc = 0x20D9BCu;
    // 0x20d9bc: 0xc4400694  lwc1        $f0, 0x694($v0)
    ctx->pc = 0x20d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d9c0: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x20d9c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d9c4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20D9C4u;
    {
        const bool branch_taken_0x20d9c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9C4u;
        // 0x20d9c8: 0xc4440698  lwc1        $f4, 0x698($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9c4) {
            ctx->pc = 0x20D9E4u;
            goto label_20d9e4;
        }
    }
    ctx->pc = 0x20D9CCu;
    // 0x20d9cc: 0x46062032  c.eq.s      $f4, $f6
    ctx->pc = 0x20d9ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d9d0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x20D9D0u;
    {
        const bool branch_taken_0x20d9d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d9d0) {
            ctx->pc = 0x20DA18u;
            goto label_20da18;
        }
    }
    ctx->pc = 0x20D9D8u;
    // 0x20d9d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D9D8u;
    {
        const bool branch_taken_0x20d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9D8u;
        // 0x20d9dc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9d8) {
            ctx->pc = 0x20D9E8u;
            goto label_20d9e8;
        }
    }
    ctx->pc = 0x20D9E0u;
label_20d9e0:
    // 0x20d9e0: 0xc4440698  lwc1        $f4, 0x698($v0)
    ctx->pc = 0x20d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20d9e4:
    // 0x20d9e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20d9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d9e8:
    // 0x20d9e8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x20d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d9ec: 0xc4430750  lwc1        $f3, 0x750($v0)
    ctx->pc = 0x20d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d9f0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x20d9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x20d9f4: 0xc4400758  lwc1        $f0, 0x758($v0)
    ctx->pc = 0x20d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d9f8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x20d9f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x20d9fc: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x20d9fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x20da00: 0xa04501f4  sb          $a1, 0x1F4($v0)
    ctx->pc = 0x20da00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 500), (uint8_t)GPR_U32(ctx, 5));
    // 0x20da04: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x20da04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x20da08: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x20da08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20da0c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x20da0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x20da10: 0xe4430750  swc1        $f3, 0x750($v0)
    ctx->pc = 0x20da10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1872), bits); }
    // 0x20da14: 0xe4400758  swc1        $f0, 0x758($v0)
    ctx->pc = 0x20da14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1880), bits); }
label_20da18:
    // 0x20da18: 0x1480ffe1  bnez        $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x20DA18u;
    {
        const bool branch_taken_0x20da18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA18u;
        // 0x20da1c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da18) {
            ctx->pc = 0x20D9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20DA20u;
label_20da20:
    // 0x20da20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20da20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20da24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20da24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20da28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20da28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20da2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20da2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20da30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20da30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20da34: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20da34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da38: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x20da38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20da3c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA3Cu;
        // 0x20da40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA44u;
    // 0x20da44: 0x0  nop
    ctx->pc = 0x20da44u;
    // NOP
    ctx->pc = 0x20da48u;
}
