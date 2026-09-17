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

// Function: sub_00281F90
// Address: 0x281f90 - 0x2820a0
void sub_00281F90_0x281f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281F90_0x281f90");
#endif

    switch (ctx->pc) {
        case 0x281fc8u: goto label_281fc8;
        case 0x281fd8u: goto label_281fd8;
        case 0x281ff0u: goto label_281ff0;
        case 0x28207cu: goto label_28207c;
        case 0x282088u: goto label_282088;
        default: break;
    }

    ctx->pc = 0x281f90u;

    // 0x281f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281f94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x281f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281f9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x281f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x281fa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x281fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x281fa8: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x281fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x281fac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x281facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x281fb0: 0x26505340  addiu       $s0, $s2, 0x5340
    ctx->pc = 0x281fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 21312));
    // 0x281fb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x281fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fbc: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x281fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x281fc0: 0xc096d52  jal         func_25B548
    ctx->pc = 0x281FC0u;
    SET_GPR_U32(ctx, 31, 0x281FC8u);
    ctx->pc = 0x281FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281FC0u;
    // 0x281fc4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B548u, 0x281FC0u, 0x281FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281FC8u;
label_281fc8:
    // 0x281fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fd0: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x281FD0u;
    SET_GPR_U32(ctx, 31, 0x281FD8u);
    ctx->pc = 0x281FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281FD0u;
    // 0x281fd4: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x281FD0u, 0x281FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281FD8u;
label_281fd8:
    // 0x281fd8: 0x26033a80  addiu       $v1, $s0, 0x3A80
    ctx->pc = 0x281fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 14976));
    // 0x281fdc: 0x26220720  addiu       $v0, $s1, 0x720
    ctx->pc = 0x281fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x281fe0: 0x24670030  addiu       $a3, $v1, 0x30
    ctx->pc = 0x281fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x281fe4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x281fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x281fe8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x281fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x281fec: 0x0  nop
    ctx->pc = 0x281fecu;
    // NOP
label_281ff0:
    // 0x281ff0: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x281ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x281ff4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x281ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x281ff8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x281ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x281ffc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x281ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x282000: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x282000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x282004: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x282004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x282008: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x282008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28200c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x282010: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x282010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x282014: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x282014u;
    {
        const bool branch_taken_0x282014 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x282018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282014u;
        // 0x282018: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282014) {
            ctx->pc = 0x281FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281ff0;
        }
    }
    ctx->pc = 0x28201Cu;
    // 0x28201c: 0x26425340  addiu       $v0, $s2, 0x5340
    ctx->pc = 0x28201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21312));
    // 0x282020: 0x26103a80  addiu       $s0, $s0, 0x3A80
    ctx->pc = 0x282020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14976));
    // 0x282024: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x282024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x282028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28202c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x28202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282030: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x282030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282034: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x282034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28203c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x28203cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x282040: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x282040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282044: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x282044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282048: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x282048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28204c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28204cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x282050: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x282050u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x282054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x282054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x282058: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x282058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28205c: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x28205cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x282060: 0xc6210754  lwc1        $f1, 0x754($s1)
    ctx->pc = 0x282060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282064: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x282064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x282068: 0xe604003c  swc1        $f4, 0x3C($s0)
    ctx->pc = 0x282068u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x28206c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x28206cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x282070: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x282070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x282074: 0xc0af232  jal         func_2BC8C8
    ctx->pc = 0x282074u;
    SET_GPR_U32(ctx, 31, 0x28207Cu);
    ctx->pc = 0x282078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282074u;
    // 0x282078: 0xe6020034  swc1        $f2, 0x34($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC8C8u, 0x282074u, 0x28207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28207Cu;
label_28207c:
    // 0x28207c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282080: 0xc0af1be  jal         func_2BC6F8
    ctx->pc = 0x282080u;
    SET_GPR_U32(ctx, 31, 0x282088u);
    ctx->pc = 0x282084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282080u;
    // 0x282084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC6F8u, 0x282080u, 0x282088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282088u;
label_282088:
    // 0x282088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28208c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28208cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x282090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282094: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x282094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282098: 0x3e00008  jr          $ra
    ctx->pc = 0x282098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282098u;
        // 0x28209c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2820A0u;
}
