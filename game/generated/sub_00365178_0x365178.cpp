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

// Function: sub_00365178
// Address: 0x365178 - 0x365340
void sub_00365178_0x365178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365178_0x365178");
#endif

    switch (ctx->pc) {
        case 0x3651a0u: goto label_3651a0;
        case 0x3651b0u: goto label_3651b0;
        case 0x3651c0u: goto label_3651c0;
        case 0x3651d0u: goto label_3651d0;
        case 0x36520cu: goto label_36520c;
        case 0x365220u: goto label_365220;
        case 0x365258u: goto label_365258;
        case 0x365270u: goto label_365270;
        case 0x3652c4u: goto label_3652c4;
        case 0x365304u: goto label_365304;
        case 0x365320u: goto label_365320;
        case 0x365330u: goto label_365330;
        default: break;
    }

    ctx->pc = 0x365178u;

    // 0x365178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x365178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36517c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36517cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365184: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x365184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365188: 0xa0460885  sb          $a2, 0x885($v0)
    ctx->pc = 0x365188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2181), (uint8_t)GPR_U32(ctx, 6));
    // 0x36518c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x36518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x365190: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x365190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x365194: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x365194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365198: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x365198u;
    SET_GPR_U32(ctx, 31, 0x3651A0u);
    ctx->pc = 0x36519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365198u;
    // 0x36519c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x365198u, 0x3651A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3651A0u;
label_3651a0:
    // 0x3651a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3651a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3651a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3651a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3651a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3651A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3651ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3651A8u;
        // 0x3651ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3651A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3651B0u;
label_3651b0:
    // 0x3651b0: 0xac8509d4  sw          $a1, 0x9D4($a0)
    ctx->pc = 0x3651b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2516), GPR_U32(ctx, 5));
    // 0x3651b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3651B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3651B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3651B4u;
        // 0x3651b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3651B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3651BCu;
    // 0x3651bc: 0x0  nop
    ctx->pc = 0x3651bcu;
    // NOP
label_3651c0:
    // 0x3651c0: 0x848209f0  lh          $v0, 0x9F0($a0)
    ctx->pc = 0x3651c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2544)));
    // 0x3651c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3651C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3651C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3651C4u;
        // 0x3651c8: 0xa48509f0  sh          $a1, 0x9F0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2544), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3651C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3651CCu;
    // 0x3651cc: 0x0  nop
    ctx->pc = 0x3651ccu;
    // NOP
label_3651d0:
    // 0x3651d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3651d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3651d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3651d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3651d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3651d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3651dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3651dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3651e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3651e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3651e4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3651e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3651e8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3651e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3651ec: 0x8c7009ec  lw          $s0, 0x9EC($v1)
    ctx->pc = 0x3651ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2540)));
    // 0x3651f0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3651f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3651f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3651F4u;
    {
        const bool branch_taken_0x3651f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3651F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3651F4u;
        // 0x3651f8: 0xac6509ec  sw          $a1, 0x9EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2540), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3651f4) {
            ctx->pc = 0x36520Cu;
            goto label_36520c;
        }
    }
    ctx->pc = 0x3651FCu;
    // 0x3651fc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3651fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x365200: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x365200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365204: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x365204u;
    SET_GPR_U32(ctx, 31, 0x36520Cu);
    ctx->pc = 0x365208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365204u;
    // 0x365208: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x365204u, 0x36520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36520Cu;
label_36520c:
    // 0x36520c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36520cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x365214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x365218: 0x3e00008  jr          $ra
    ctx->pc = 0x365218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365218u;
        // 0x36521c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365220u;
label_365220:
    // 0x365220: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x365220u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x365224: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x365224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x365228: 0x3c014496  lui         $at, 0x4496
    ctx->pc = 0x365228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17558 << 16));
    // 0x36522c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36522cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365230: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x365230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x365234: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x365234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x365238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x365238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36523c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x365240: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x365240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x365244: 0x0  nop
    ctx->pc = 0x365244u;
    // NOP
    // 0x365248: 0x0  nop
    ctx->pc = 0x365248u;
    // NOP
    // 0x36524c: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x36524cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x365250: 0xc047546  jal         func_11D518
    ctx->pc = 0x365250u;
    SET_GPR_U32(ctx, 31, 0x365258u);
    ctx->pc = 0x365254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365250u;
    // 0x365254: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D518u, 0x365250u, 0x365258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365258u;
label_365258:
    // 0x365258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36525c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x365260: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x365260u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x365264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365268: 0x80d949c  j           func_365270
    ctx->pc = 0x365268u;
    ctx->pc = 0x36526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365268u;
    // 0x36526c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365270u;
    goto label_365270;
    ctx->pc = 0x365270u;
label_365270:
    // 0x365270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x365274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x365278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36527c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36527cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365280: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x365280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x365284: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x365284u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x365288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x365288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36528c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x365290: 0x8e2209e8  lw          $v0, 0x9E8($s1)
    ctx->pc = 0x365290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2536)));
    // 0x365294: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x365294u;
    {
        const bool branch_taken_0x365294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x365298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365294u;
        // 0x365298: 0x22300  sll         $a0, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365294) {
            ctx->pc = 0x3652A8u;
            goto label_3652a8;
        }
    }
    ctx->pc = 0x36529Cu;
    // 0x36529c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x36529Cu;
    {
        const bool branch_taken_0x36529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3652A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36529Cu;
        // 0x3652a0: 0xe6340a04  swc1        $f20, 0xA04($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36529c) {
            ctx->pc = 0x365304u;
            goto label_365304;
        }
    }
    ctx->pc = 0x3652A4u;
    // 0x3652a4: 0x0  nop
    ctx->pc = 0x3652a4u;
    // NOP
label_3652a8:
    // 0x3652a8: 0x3410bb80  ori         $s0, $zero, 0xBB80
    ctx->pc = 0x3652a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x3652ac: 0x90001a  div         $zero, $a0, $s0
    ctx->pc = 0x3652acu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3652b0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3652B0u;
    {
        const bool branch_taken_0x3652b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3652b0) {
            ctx->pc = 0x3652B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3652B0u;
            // 0x3652b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3652B8u;
            goto label_3652b8;
        }
    }
    ctx->pc = 0x3652B8u;
label_3652b8:
    // 0x3652b8: 0x8012  mflo        $s0
    ctx->pc = 0x3652b8u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x3652bc: 0xc0d8b00  jal         func_362C00
    ctx->pc = 0x3652BCu;
    SET_GPR_U32(ctx, 31, 0x3652C4u);
    ctx->pc = 0x362C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C00u, 0x3652BCu, 0x3652C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652C4u;
label_3652c4:
    // 0x3652c4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3652c4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3652c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3652c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3652cc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3652ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3652d0: 0xc62209e8  lwc1        $f2, 0x9E8($s1)
    ctx->pc = 0x3652d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3652d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3652d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3652d8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x3652d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3652dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3652dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3652e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3652e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3652e4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3652e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3652e8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3652e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3652ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3652ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3652f0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3652f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3652f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3652f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3652f8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3652f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3652fc: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x3652FCu;
    SET_GPR_U32(ctx, 31, 0x365304u);
    ctx->pc = 0x365300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652FCu;
    // 0x365300: 0xe62209d0  swc1        $f2, 0x9D0($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2512), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x3652FCu, 0x365304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365304u;
label_365304:
    // 0x365304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36530c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36530cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x365310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365314: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x365314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x365318: 0x3e00008  jr          $ra
    ctx->pc = 0x365318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365318u;
        // 0x36531c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365320u;
label_365320:
    // 0x365320: 0xe48c09c0  swc1        $f12, 0x9C0($a0)
    ctx->pc = 0x365320u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2496), bits); }
    // 0x365324: 0x3e00008  jr          $ra
    ctx->pc = 0x365324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365324u;
        // 0x365328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36532Cu;
    // 0x36532c: 0x0  nop
    ctx->pc = 0x36532cu;
    // NOP
label_365330:
    // 0x365330: 0xac8509bc  sw          $a1, 0x9BC($a0)
    ctx->pc = 0x365330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2492), GPR_U32(ctx, 5));
    // 0x365334: 0x3e00008  jr          $ra
    ctx->pc = 0x365334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365334u;
        // 0x365338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36533Cu;
    // 0x36533c: 0x0  nop
    ctx->pc = 0x36533cu;
    // NOP
    ctx->pc = 0x365340u;
}
