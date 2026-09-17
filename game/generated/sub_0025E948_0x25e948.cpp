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

// Function: sub_0025E948
// Address: 0x25e948 - 0x25eb18
void sub_0025E948_0x25e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E948_0x25e948");
#endif

    switch (ctx->pc) {
        case 0x25e97cu: goto label_25e97c;
        case 0x25e98cu: goto label_25e98c;
        case 0x25e9a0u: goto label_25e9a0;
        case 0x25e9b4u: goto label_25e9b4;
        case 0x25e9d4u: goto label_25e9d4;
        case 0x25e9e8u: goto label_25e9e8;
        case 0x25e9f4u: goto label_25e9f4;
        case 0x25ea80u: goto label_25ea80;
        case 0x25ea90u: goto label_25ea90;
        case 0x25ead8u: goto label_25ead8;
        default: break;
    }

    ctx->pc = 0x25e948u;

    // 0x25e948: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x25e948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x25e94c: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x25e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x25e950: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x25e950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x25e954: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x25e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x25e958: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25e958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e95c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25e95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e960: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x25e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x25e964: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x25e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x25e968: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25e968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e96c: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x25e96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x25e970: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x25e970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x25e974: 0xc0849c0  jal         func_212700
    ctx->pc = 0x25E974u;
    SET_GPR_U32(ctx, 31, 0x25E97Cu);
    ctx->pc = 0x25E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E974u;
    // 0x25e978: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x25E974u, 0x25E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E97Cu;
label_25e97c:
    // 0x25e97c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e980: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e984: 0xc0979c6  jal         func_25E718
    ctx->pc = 0x25E984u;
    SET_GPR_U32(ctx, 31, 0x25E98Cu);
    ctx->pc = 0x25E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E984u;
    // 0x25e988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E718u, 0x25E984u, 0x25E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E98Cu;
label_25e98c:
    // 0x25e98c: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x25e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x25e990: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x25e990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e994: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x25e994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25e998: 0x24701cb0  addiu       $s0, $v1, 0x1CB0
    ctx->pc = 0x25e998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 7344));
    // 0x25e99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e9a0:
    // 0x25e9a0: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x25e9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25e9a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25e9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9a8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x25e9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x25e9ac: 0xc097084  jal         func_25C210
    ctx->pc = 0x25E9ACu;
    SET_GPR_U32(ctx, 31, 0x25E9B4u);
    ctx->pc = 0x25E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9ACu;
    // 0x25e9b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x25E9ACu, 0x25E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9B4u;
label_25e9b4:
    // 0x25e9b4: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x25e9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x25e9b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25E9B8u;
    {
        const bool branch_taken_0x25e9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9B8u;
        // 0x25e9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9b8) {
            ctx->pc = 0x25E9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e9a0;
        }
    }
    ctx->pc = 0x25E9C0u;
    // 0x25e9c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25e9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e9cc: 0xc0979c6  jal         func_25E718
    ctx->pc = 0x25E9CCu;
    SET_GPR_U32(ctx, 31, 0x25E9D4u);
    ctx->pc = 0x25E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9CCu;
    // 0x25e9d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E718u, 0x25E9CCu, 0x25E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9D4u;
label_25e9d4:
    // 0x25e9d4: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x25e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x25e9d8: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x25e9d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9dc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x25e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25e9e0: 0x24702520  addiu       $s0, $v1, 0x2520
    ctx->pc = 0x25e9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9504));
    // 0x25e9e4: 0x0  nop
    ctx->pc = 0x25e9e4u;
    // NOP
label_25e9e8:
    // 0x25e9e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9ec: 0xc097084  jal         func_25C210
    ctx->pc = 0x25E9ECu;
    SET_GPR_U32(ctx, 31, 0x25E9F4u);
    ctx->pc = 0x25E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9ECu;
    // 0x25e9f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x25E9ECu, 0x25E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9F4u;
label_25e9f4:
    // 0x25e9f4: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x25e9f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x25e9f8: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x25E9F8u;
    {
        const bool branch_taken_0x25e9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e9f8) {
            ctx->pc = 0x25E9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E9F8u;
            // 0x25e9fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EAE4u;
            goto label_25eae4;
        }
    }
    ctx->pc = 0x25EA00u;
    // 0x25ea00: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25ea04: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x25ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x25ea08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ea0c: 0x8c632670  lw          $v1, 0x2670($v1)
    ctx->pc = 0x25ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9840)));
    // 0x25ea10: 0x600008  jr          $v1
    ctx->pc = 0x25EA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25EA18u: goto label_25ea18;
            case 0x25EA98u: goto label_25ea98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25EA18u;
label_25ea18:
    // 0x25ea18: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x25ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ea1c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25ea20: 0xc7a50104  lwc1        $f5, 0x104($sp)
    ctx->pc = 0x25ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25ea24: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x25ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25ea28: 0xc7a30114  lwc1        $f3, 0x114($sp)
    ctx->pc = 0x25ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ea2c: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x25ea2cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x25ea30: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x25ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ea34: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x25ea34u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x25ea38: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x25ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ea3c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x25ea3cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x25ea40: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x25ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ea44: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x25ea44u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x25ea48: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25ea48u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x25ea4c: 0xe7a400f4  swc1        $f4, 0xF4($sp)
    ctx->pc = 0x25ea4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x25ea50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25ea50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25ea54: 0xe7a50104  swc1        $f5, 0x104($sp)
    ctx->pc = 0x25ea54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x25ea58: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x25ea58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x25ea5c: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x25ea5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x25ea60: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x25ea60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x25ea64: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x25ea64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x25ea68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25ea6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ea6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25ea70: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x25ea70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25ea74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25ea74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25ea78: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x25EA78u;
    SET_GPR_U32(ctx, 31, 0x25EA80u);
    ctx->pc = 0x25EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA78u;
    // 0x25ea7c: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x25EA78u, 0x25EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA80u;
label_25ea80:
    // 0x25ea80: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x25ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x25ea84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25ea84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25ea88: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x25EA88u;
    SET_GPR_U32(ctx, 31, 0x25EA90u);
    ctx->pc = 0x25EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA88u;
    // 0x25ea8c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x25EA88u, 0x25EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA90u;
label_25ea90:
    // 0x25ea90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25EA90u;
    {
        const bool branch_taken_0x25ea90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA90u;
        // 0x25ea94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea90) {
            ctx->pc = 0x25EAE4u;
            goto label_25eae4;
        }
    }
    ctx->pc = 0x25EA98u;
label_25ea98:
    // 0x25ea98: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x25ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ea9c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25eaa0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x25eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25eaa4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x25eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25eaa8: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x25eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eaac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x25eaacu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x25eab0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25eab0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x25eab4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25eab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25eab8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25eab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25eabc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25eabcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25eac0: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x25eac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x25eac4: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x25eac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x25eac8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x25eac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x25eacc: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x25eaccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25ead0: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x25EAD0u;
    SET_GPR_U32(ctx, 31, 0x25EAD8u);
    ctx->pc = 0x25EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAD0u;
    // 0x25ead4: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x25EAD0u, 0x25EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAD8u;
label_25ead8:
    // 0x25ead8: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x25ead8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25eadc: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x25eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x25eae0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25eae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25eae4:
    // 0x25eae4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x25eae4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x25eae8: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x25eae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x25eaec: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x25EAECu;
    {
        const bool branch_taken_0x25eaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAECu;
        // 0x25eaf0: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eaec) {
            ctx->pc = 0x25E9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e9e8;
        }
    }
    ctx->pc = 0x25EAF4u;
    // 0x25eaf4: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x25eaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25eaf8: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x25eaf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25eafc: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x25eafcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25eb00: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x25eb00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x25eb04: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x25eb04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25eb08: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x25eb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x25eb0c: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x25eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25eb10: 0x3e00008  jr          $ra
    ctx->pc = 0x25EB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB10u;
        // 0x25eb14: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EB18u;
}
