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

// Function: sub_002F98B0
// Address: 0x2f98b0 - 0x2f99a8
void sub_002F98B0_0x2f98b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F98B0_0x2f98b0");
#endif

    switch (ctx->pc) {
        case 0x2f9900u: goto label_2f9900;
        case 0x2f9940u: goto label_2f9940;
        case 0x2f9968u: goto label_2f9968;
        case 0x2f9984u: goto label_2f9984;
        default: break;
    }

    ctx->pc = 0x2f98b0u;

    // 0x2f98b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f98b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f98b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f98b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f98b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f98b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f98bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f98c0: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x2f98c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2f98c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f98c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f98c8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2f98c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f98cc: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2f98ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2f98d0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f98d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f98d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F98D4u;
    {
        const bool branch_taken_0x2f98d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f98d4) {
            ctx->pc = 0x2F98D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F98D4u;
            // 0x2f98d8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F98F0u;
            goto label_2f98f0;
        }
    }
    ctx->pc = 0x2F98DCu;
    // 0x2f98dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f98e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f98e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F98E4u;
    {
        const bool branch_taken_0x2f98e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f98e4) {
            ctx->pc = 0x2F98F8u;
            goto label_2f98f8;
        }
    }
    ctx->pc = 0x2F98ECu;
    // 0x2f98ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f98f0:
    // 0x2f98f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f98f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98f4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f98f8:
    // 0x2f98f8: 0xc0bb616  jal         func_2ED858
    ctx->pc = 0x2F98F8u;
    SET_GPR_U32(ctx, 31, 0x2F9900u);
    ctx->pc = 0x2ED858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED858u, 0x2F98F8u, 0x2F9900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9900u;
label_2f9900:
    // 0x2f9900: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f9900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9904: 0x262700b8  addiu       $a3, $s1, 0xB8
    ctx->pc = 0x2f9904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2f9908: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2f9908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f990c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F990Cu;
    {
        const bool branch_taken_0x2f990c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F990Cu;
        // 0x2f9910: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f990c) {
            ctx->pc = 0x2F9924u;
            goto label_2f9924;
        }
    }
    ctx->pc = 0x2F9914u;
    // 0x2f9914: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9918: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2f9918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2f991c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F991Cu;
    {
        const bool branch_taken_0x2f991c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f991c) {
            ctx->pc = 0x2F9930u;
            goto label_2f9930;
        }
    }
    ctx->pc = 0x2F9924u;
label_2f9924:
    // 0x2f9924: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2f9924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2f9928: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f992c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2f992cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2f9930:
    // 0x2f9930: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2f9930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2f9934: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f9934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f9938: 0xc0bb7aa  jal         func_2EDEA8
    ctx->pc = 0x2F9938u;
    SET_GPR_U32(ctx, 31, 0x2F9940u);
    ctx->pc = 0x2F993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9938u;
    // 0x2f993c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA8u, 0x2F9938u, 0x2F9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9940u;
label_2f9940:
    // 0x2f9940: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2f9940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2f9944: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f9944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f9948: 0x2610c450  addiu       $s0, $s0, -0x3BB0
    ctx->pc = 0x2f9948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952016));
    // 0x2f994c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f994cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2f9950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f995c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f995cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9960: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2F9960u;
    SET_GPR_U32(ctx, 31, 0x2F9968u);
    ctx->pc = 0x2F9964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9960u;
    // 0x2f9964: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2F9960u, 0x2F9968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9968u;
label_2f9968:
    // 0x2f9968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f996c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f996cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f9970: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f9970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f9974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f997c: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x2F997Cu;
    SET_GPR_U32(ctx, 31, 0x2F9984u);
    ctx->pc = 0x2F9980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F997Cu;
    // 0x2f9980: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x2F997Cu, 0x2F9984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9984u;
label_2f9984:
    // 0x2f9984: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f9984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f9988: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x2f9988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
    // 0x2f998c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f998cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f9990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9998: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2f9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f999c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F999Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F999Cu;
        // 0x2f99a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F999Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F99A4u;
    // 0x2f99a4: 0x0  nop
    ctx->pc = 0x2f99a4u;
    // NOP
    ctx->pc = 0x2f99a8u;
}
