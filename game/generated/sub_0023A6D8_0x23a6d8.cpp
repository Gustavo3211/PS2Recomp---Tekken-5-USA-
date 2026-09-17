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

// Function: sub_0023A6D8
// Address: 0x23a6d8 - 0x23a840
void sub_0023A6D8_0x23a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A6D8_0x23a6d8");
#endif

    switch (ctx->pc) {
        case 0x23a70cu: goto label_23a70c;
        case 0x23a72cu: goto label_23a72c;
        case 0x23a734u: goto label_23a734;
        case 0x23a768u: goto label_23a768;
        case 0x23a774u: goto label_23a774;
        case 0x23a790u: goto label_23a790;
        case 0x23a7c8u: goto label_23a7c8;
        case 0x23a7d8u: goto label_23a7d8;
        default: break;
    }

    ctx->pc = 0x23a6d8u;

    // 0x23a6d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23a6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a6dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a6e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23a6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23a6e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23a6e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23a6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23a6f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23a6f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a6f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23a6fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23a6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x23a700: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23a700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23a704: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x23A704u;
    SET_GPR_U32(ctx, 31, 0x23A70Cu);
    ctx->pc = 0x23A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A704u;
    // 0x23a708: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x23A704u, 0x23A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A70Cu;
label_23a70c:
    // 0x23a70c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x23A70Cu;
    {
        const bool branch_taken_0x23a70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A70Cu;
        // 0x23a710: 0x3c150016  lui         $s5, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a70c) {
            ctx->pc = 0x23A814u;
            goto label_23a814;
        }
    }
    ctx->pc = 0x23A714u;
    // 0x23a714: 0x26b0d730  addiu       $s0, $s5, -0x28D0
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956848));
    // 0x23a718: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23a718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a71c: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x23A71Cu;
    {
        const bool branch_taken_0x23a71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a71c) {
            ctx->pc = 0x23A720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A71Cu;
            // 0x23a720: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A818u;
            goto label_23a818;
        }
    }
    ctx->pc = 0x23A724u;
    // 0x23a724: 0xc08eac2  jal         func_23AB08
    ctx->pc = 0x23A724u;
    SET_GPR_U32(ctx, 31, 0x23A72Cu);
    ctx->pc = 0x23AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB08u, 0x23A724u, 0x23A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A72Cu;
label_23a72c:
    // 0x23a72c: 0xc08eac6  jal         func_23AB18
    ctx->pc = 0x23A72Cu;
    SET_GPR_U32(ctx, 31, 0x23A734u);
    ctx->pc = 0x23A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A72Cu;
    // 0x23a730: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB18u, 0x23A72Cu, 0x23A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A734u;
label_23a734:
    // 0x23a734: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x23a734u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x23a738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a73c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23a73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a740: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x23A740u;
    {
        const bool branch_taken_0x23a740 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A740u;
        // 0x23a744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a740) {
            ctx->pc = 0x23A74Cu;
            goto label_23a74c;
        }
    }
    ctx->pc = 0x23A748u;
    // 0x23a748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a74c:
    // 0x23a74c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x23a74cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x23a750: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23a750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23a754: 0xe6140014  swc1        $f20, 0x14($s0)
    ctx->pc = 0x23a754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x23a758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23a758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a75c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a760: 0xc0b85da  jal         func_2E1768
    ctx->pc = 0x23A760u;
    SET_GPR_U32(ctx, 31, 0x23A768u);
    ctx->pc = 0x23A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A760u;
    // 0x23a764: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1768u, 0x23A760u, 0x23A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A768u;
label_23a768:
    // 0x23a768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a76c: 0xc0b85da  jal         func_2E1768
    ctx->pc = 0x23A76Cu;
    SET_GPR_U32(ctx, 31, 0x23A774u);
    ctx->pc = 0x23A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A76Cu;
    // 0x23a770: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1768u, 0x23A76Cu, 0x23A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A774u;
label_23a774:
    // 0x23a774: 0x24540094  addiu       $s4, $v0, 0x94
    ctx->pc = 0x23a774u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x23a778: 0x9693000e  lhu         $s3, 0xE($s4)
    ctx->pc = 0x23a778u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x23a77c: 0x1a600026  blez        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x23A77Cu;
    {
        const bool branch_taken_0x23a77c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x23A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A77Cu;
        // 0x23a780: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a77c) {
            ctx->pc = 0x23A818u;
            goto label_23a818;
        }
    }
    ctx->pc = 0x23A784u;
    // 0x23a784: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x23a784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a788: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23a788u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a78c: 0x0  nop
    ctx->pc = 0x23a78cu;
    // NOP
label_23a790:
    // 0x23a790: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a794: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23a794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x23a798: 0x286200c4  slti        $v0, $v1, 0xC4
    ctx->pc = 0x23a798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)196) ? 1 : 0);
    // 0x23a79c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x23a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x23a7a0: 0x0  nop
    ctx->pc = 0x23a7a0u;
    // NOP
    // 0x23a7a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A7A4u;
    {
        const bool branch_taken_0x23a7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7A4u;
        // 0x23a7a8: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7a4) {
            ctx->pc = 0x23A790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a790;
        }
    }
    ctx->pc = 0x23A7ACu;
    // 0x23a7ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23a7b0: 0x8ea3d730  lw          $v1, -0x28D0($s5)
    ctx->pc = 0x23a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956848)));
    // 0x23a7b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23a7b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23a7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a7bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23a7c0: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x23A7C0u;
    {
        const bool branch_taken_0x23a7c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7C0u;
        // 0x23a7c4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7c0) {
            ctx->pc = 0x23A814u;
            goto label_23a814;
        }
    }
    ctx->pc = 0x23A7C8u;
label_23a7c8:
    // 0x23a7c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a7cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23a7d0: 0xc0bf152  jal         func_2FC548
    ctx->pc = 0x23A7D0u;
    SET_GPR_U32(ctx, 31, 0x23A7D8u);
    ctx->pc = 0x23A7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7D0u;
    // 0x23a7d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC548u, 0x23A7D0u, 0x23A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A7D8u;
label_23a7d8:
    // 0x23a7d8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x23a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x23a7dc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x23a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x23a7e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23A7E0u;
    {
        const bool branch_taken_0x23a7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7E0u;
        // 0x23a7e4: 0x233182a  slt         $v1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7e0) {
            ctx->pc = 0x23A80Cu;
            goto label_23a80c;
        }
    }
    ctx->pc = 0x23A7E8u;
    // 0x23a7e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x23a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23a7ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23a7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23a7f0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x23a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a7f4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x23a7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x23a7f8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x23a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a7fc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x23a7fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x23a800: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x23a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a804: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23a804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23a808: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x23a808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_23a80c:
    // 0x23a80c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23A80Cu;
    {
        const bool branch_taken_0x23a80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A80Cu;
        // 0x23a810: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a80c) {
            ctx->pc = 0x23A7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a7c8;
        }
    }
    ctx->pc = 0x23A814u;
label_23a814:
    // 0x23a814: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23a814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a818:
    // 0x23a818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a81c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a824: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23a824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a828: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23a828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a82c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23a82cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23a830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a834: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x23a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23a838: 0x3e00008  jr          $ra
    ctx->pc = 0x23A838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A838u;
        // 0x23a83c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A840u;
}
