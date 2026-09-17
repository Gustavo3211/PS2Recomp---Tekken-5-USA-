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

// Function: sub_00255910
// Address: 0x255910 - 0x255a08
void sub_00255910_0x255910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255910_0x255910");
#endif

    switch (ctx->pc) {
        case 0x255934u: goto label_255934;
        case 0x255960u: goto label_255960;
        case 0x255968u: goto label_255968;
        case 0x2559a0u: goto label_2559a0;
        case 0x2559c0u: goto label_2559c0;
        case 0x2559e0u: goto label_2559e0;
        default: break;
    }

    ctx->pc = 0x255910u;

    // 0x255910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x255910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x255914: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x255914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x255918: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x255918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25591c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x25591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x255920: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x255920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x255924: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x255924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x255928: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x255928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25592c: 0xc0af9ee  jal         func_2BE7B8
    ctx->pc = 0x25592Cu;
    SET_GPR_U32(ctx, 31, 0x255934u);
    ctx->pc = 0x255930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25592Cu;
    // 0x255930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7B8u, 0x25592Cu, 0x255934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255934u;
label_255934:
    // 0x255934: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x255934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x255938: 0x3c040f00  lui         $a0, 0xF00
    ctx->pc = 0x255938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3840 << 16));
    // 0x25593c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x255940: 0x3c030900  lui         $v1, 0x900
    ctx->pc = 0x255940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2304 << 16));
    // 0x255944: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x255944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x255948: 0x50430029  beql        $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x255948u;
    {
        const bool branch_taken_0x255948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x255948) {
            ctx->pc = 0x25594Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255948u;
            // 0x25594c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2559F0u;
            goto label_2559f0;
        }
    }
    ctx->pc = 0x255950u;
    // 0x255950: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x255950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x255954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255958: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x255958u;
    SET_GPR_U32(ctx, 31, 0x255960u);
    ctx->pc = 0x25595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255958u;
    // 0x25595c: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x255958u, 0x255960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255960u;
label_255960:
    // 0x255960: 0xc0b778c  jal         func_2DDE30
    ctx->pc = 0x255960u;
    SET_GPR_U32(ctx, 31, 0x255968u);
    ctx->pc = 0x255964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255960u;
    // 0x255964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDE30u, 0x255960u, 0x255968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255968u;
label_255968:
    // 0x255968: 0x3c0142aa  lui         $at, 0x42AA
    ctx->pc = 0x255968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17066 << 16));
    // 0x25596c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25596cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255974: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x255974u;
    {
        const bool branch_taken_0x255974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255974) {
            ctx->pc = 0x255978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255974u;
            // 0x255978: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2559F0u;
            goto label_2559f0;
        }
    }
    ctx->pc = 0x25597Cu;
    // 0x25597c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255984: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x255984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255988: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x255988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25598c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25598cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x255990: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x255990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255994: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x255994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x255998: 0xc095636  jal         func_2558D8
    ctx->pc = 0x255998u;
    SET_GPR_U32(ctx, 31, 0x2559A0u);
    ctx->pc = 0x25599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255998u;
    // 0x25599c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2558D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2558D8u, 0x255998u, 0x2559A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559A0u;
label_2559a0:
    // 0x2559a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2559A0u;
    {
        const bool branch_taken_0x2559a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2559a0) {
            ctx->pc = 0x2559A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2559A0u;
            // 0x2559a4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2559A8u;
            goto label_2559a8;
        }
    }
    ctx->pc = 0x2559A8u;
label_2559a8:
    // 0x2559a8: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2559A8u;
    {
        const bool branch_taken_0x2559a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2559ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559A8u;
        // 0x2559ac: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559a8) {
            ctx->pc = 0x2559ECu;
            goto label_2559ec;
        }
    }
    ctx->pc = 0x2559B0u;
    // 0x2559b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2559b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559b4: 0x2453cb50  addiu       $s3, $v0, -0x34B0
    ctx->pc = 0x2559b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953808));
    // 0x2559b8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2559b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2559bc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2559bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2559c0:
    // 0x2559c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2559c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2559c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2559c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2559c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2559c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2559ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2559d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2559d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2559d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2559d8: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x2559D8u;
    SET_GPR_U32(ctx, 31, 0x2559E0u);
    ctx->pc = 0x2559DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559D8u;
    // 0x2559dc: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x2559D8u, 0x2559E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559E0u;
label_2559e0:
    // 0x2559e0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2559e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2559e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2559E4u;
    {
        const bool branch_taken_0x2559e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2559E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559E4u;
        // 0x2559e8: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559e4) {
            ctx->pc = 0x2559C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2559c0;
        }
    }
    ctx->pc = 0x2559ECu;
label_2559ec:
    // 0x2559ec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2559ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2559f0:
    // 0x2559f0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2559f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2559f4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2559f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2559f8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2559f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2559fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2559fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255a00: 0x3e00008  jr          $ra
    ctx->pc = 0x255A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A00u;
        // 0x255a04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255A08u;
}
