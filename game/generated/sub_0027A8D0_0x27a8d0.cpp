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

// Function: sub_0027A8D0
// Address: 0x27a8d0 - 0x27a9e0
void sub_0027A8D0_0x27a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A8D0_0x27a8d0");
#endif

    switch (ctx->pc) {
        case 0x27a90cu: goto label_27a90c;
        case 0x27a93cu: goto label_27a93c;
        case 0x27a944u: goto label_27a944;
        case 0x27a980u: goto label_27a980;
        case 0x27a9b4u: goto label_27a9b4;
        case 0x27a9bcu: goto label_27a9bc;
        default: break;
    }

    ctx->pc = 0x27a8d0u;

    // 0x27a8d0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x27a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x27a8d4: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x27a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x27a8d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8dc: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x27a8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x27a8e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27a8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8e4: 0xe7b50190  swc1        $f21, 0x190($sp)
    ctx->pc = 0x27a8e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x27a8e8: 0xe7b40188  swc1        $f20, 0x188($sp)
    ctx->pc = 0x27a8e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x27a8ec: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x27a8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x27a8f0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27a8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27a8f4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x27a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x27a8f8: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x27a8f8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27a8fc: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27A8FCu;
    {
        const bool branch_taken_0x27a8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8FCu;
        // 0x27a900: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8fc) {
            ctx->pc = 0x27A950u;
            goto label_27a950;
        }
    }
    ctx->pc = 0x27A904u;
    // 0x27a904: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x27A904u;
    SET_GPR_U32(ctx, 31, 0x27A90Cu);
    ctx->pc = 0x2BC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4B0u, 0x27A904u, 0x27A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A90Cu;
label_27a90c:
    // 0x27a90c: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x27a90cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a910: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27A910u;
    {
        const bool branch_taken_0x27a910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a910) {
            ctx->pc = 0x27A920u;
            goto label_27a920;
        }
    }
    ctx->pc = 0x27A918u;
    // 0x27a918: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27a91c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27a91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27a920:
    // 0x27a920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27a924: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a92c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a930: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a934: 0xc096b90  jal         func_25AE40
    ctx->pc = 0x27A934u;
    SET_GPR_U32(ctx, 31, 0x27A93Cu);
    ctx->pc = 0x27A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A934u;
    // 0x27a938: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AE40u, 0x27A934u, 0x27A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A93Cu;
label_27a93c:
    // 0x27a93c: 0xc0968aa  jal         func_25A2A8
    ctx->pc = 0x27A93Cu;
    SET_GPR_U32(ctx, 31, 0x27A944u);
    ctx->pc = 0x27A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A93Cu;
    // 0x27a940: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A8u, 0x27A93Cu, 0x27A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A944u;
label_27a944:
    // 0x27a944: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27A944u;
    {
        const bool branch_taken_0x27a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A944u;
        // 0x27a948: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a944) {
            ctx->pc = 0x27A9C0u;
            goto label_27a9c0;
        }
    }
    ctx->pc = 0x27A94Cu;
    // 0x27a94c: 0x0  nop
    ctx->pc = 0x27a94cu;
    // NOP
label_27a950:
    // 0x27a950: 0x3862000a  xori        $v0, $v1, 0xA
    ctx->pc = 0x27a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x27a954: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A954u;
    {
        const bool branch_taken_0x27a954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A954u;
        // 0x27a958: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a954) {
            ctx->pc = 0x27A978u;
            goto label_27a978;
        }
    }
    ctx->pc = 0x27A95Cu;
    // 0x27a95c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A95Cu;
    {
        const bool branch_taken_0x27a95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A95Cu;
        // 0x27a960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a95c) {
            ctx->pc = 0x27A970u;
            goto label_27a970;
        }
    }
    ctx->pc = 0x27A964u;
    // 0x27a964: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A964u;
    {
        const bool branch_taken_0x27a964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A964u;
        // 0x27a968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a964) {
            ctx->pc = 0x27A970u;
            goto label_27a970;
        }
    }
    ctx->pc = 0x27A96Cu;
    // 0x27a96c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a970:
    // 0x27a970: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27A970u;
    {
        const bool branch_taken_0x27a970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A970u;
        // 0x27a974: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a970) {
            ctx->pc = 0x27A9C4u;
            goto label_27a9c4;
        }
    }
    ctx->pc = 0x27A978u;
label_27a978:
    // 0x27a978: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x27A978u;
    SET_GPR_U32(ctx, 31, 0x27A980u);
    ctx->pc = 0x27A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A978u;
    // 0x27a97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4B0u, 0x27A978u, 0x27A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A980u;
label_27a980:
    // 0x27a980: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a984: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27a984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a988: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27A988u;
    {
        const bool branch_taken_0x27a988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a988) {
            ctx->pc = 0x27A998u;
            goto label_27a998;
        }
    }
    ctx->pc = 0x27A990u;
    // 0x27a990: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27a994: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27a994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27a998:
    // 0x27a998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27a99c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9ac: 0xc0b156a  jal         func_2C55A8
    ctx->pc = 0x27A9ACu;
    SET_GPR_U32(ctx, 31, 0x27A9B4u);
    ctx->pc = 0x27A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9ACu;
    // 0x27a9b0: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55A8u, 0x27A9ACu, 0x27A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9B4u;
label_27a9b4:
    // 0x27a9b4: 0xc0968aa  jal         func_25A2A8
    ctx->pc = 0x27A9B4u;
    SET_GPR_U32(ctx, 31, 0x27A9BCu);
    ctx->pc = 0x27A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9B4u;
    // 0x27a9b8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A8u, 0x27A9B4u, 0x27A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9BCu;
label_27a9bc:
    // 0x27a9bc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27a9bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_27a9c0:
    // 0x27a9c0: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x27a9c0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_27a9c4:
    // 0x27a9c4: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x27a9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x27a9c8: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x27a9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x27a9cc: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x27a9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x27a9d0: 0xc7b50190  lwc1        $f21, 0x190($sp)
    ctx->pc = 0x27a9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27a9d4: 0xc7b40188  lwc1        $f20, 0x188($sp)
    ctx->pc = 0x27a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27a9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9D8u;
        // 0x27a9dc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A9E0u;
}
