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

// Function: sub_0011A488
// Address: 0x11a488 - 0x11a588
void sub_0011A488_0x11a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A488_0x11a488");
#endif

    switch (ctx->pc) {
        case 0x11a4e4u: goto label_11a4e4;
        case 0x11a50cu: goto label_11a50c;
        case 0x11a524u: goto label_11a524;
        case 0x11a578u: goto label_11a578;
        default: break;
    }

    ctx->pc = 0x11a488u;

    // 0x11a488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a48c: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x11a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x11a490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a49c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11a49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4a0: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x11a4a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a4a4: 0x820019  multu       $a0, $v0
    ctx->pc = 0x11a4a4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a4a8: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x11a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x11a4ac: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x11a4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x11a4b0: 0x70008010  mfhi1       $s0
    ctx->pc = 0x11a4b0u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x11a4b4: 0x3012  mflo        $a2
    ctx->pc = 0x11a4b4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11a4b8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x11a4b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11a4bc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11a4bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11a4c0: 0x2010  mfhi        $a0
    ctx->pc = 0x11a4c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x11a4c4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11a4c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11a4c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11a4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11a4cc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x11a4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x11a4d0: 0x70003012  mflo1       $a2
    ctx->pc = 0x11a4d0u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x11a4d4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11a4d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11a4d8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11a4d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11a4dc: 0xc048332  jal         func_120CC8
    ctx->pc = 0x11A4DCu;
    SET_GPR_U32(ctx, 31, 0x11A4E4u);
    ctx->pc = 0x11A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4DCu;
    // 0x11a4e0: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x11A4DCu, 0x11A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4E4u;
label_11a4e4:
    // 0x11a4e4: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x11a4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x11a4e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a4ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x11A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4F0u;
        // 0x11a4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A4F8u;
    // 0x11a4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a4fc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A4FCu;
    {
        const bool branch_taken_0x11a4fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4FCu;
        // 0x11a500: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4fc) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A504u;
    // 0x11a504: 0xc0485ec  jal         func_1217B0
    ctx->pc = 0x11A504u;
    SET_GPR_U32(ctx, 31, 0x11A50Cu);
    ctx->pc = 0x1217B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1217B0u, 0x11A504u, 0x11A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A50Cu;
label_11a50c:
    // 0x11a50c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11A50Cu;
    {
        const bool branch_taken_0x11a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A50Cu;
        // 0x11a510: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a50c) {
            ctx->pc = 0x11A528u;
            goto label_11a528;
        }
    }
    ctx->pc = 0x11A514u;
label_11a514:
    // 0x11a514: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x11a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x11a518: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x11a518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x11a51c: 0xc0485ec  jal         func_1217B0
    ctx->pc = 0x11A51Cu;
    SET_GPR_U32(ctx, 31, 0x11A524u);
    ctx->pc = 0x11A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A51Cu;
    // 0x11a520: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1217B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1217B0u, 0x11A51Cu, 0x11A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A524u;
label_11a524:
    // 0x11a524: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x11a524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11a528:
    // 0x11a528: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x11a528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x11a52c: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x11a52cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x11a530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a538: 0x0  nop
    ctx->pc = 0x11a538u;
    // NOP
    // 0x11a53c: 0x0  nop
    ctx->pc = 0x11a53cu;
    // NOP
    // 0x11a540: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11a540u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x11a544: 0x3e00008  jr          $ra
    ctx->pc = 0x11A544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A544u;
        // 0x11a548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A54Cu;
    // 0x11a54c: 0x0  nop
    ctx->pc = 0x11a54cu;
    // NOP
    // 0x11a550: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x11a550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x11a554: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x11a554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x11a558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a55c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a564: 0x0  nop
    ctx->pc = 0x11a564u;
    // NOP
    // 0x11a568: 0x0  nop
    ctx->pc = 0x11a568u;
    // NOP
    // 0x11a56c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x11a56cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x11a570: 0xc04866c  jal         func_1219B0
    ctx->pc = 0x11A570u;
    SET_GPR_U32(ctx, 31, 0x11A578u);
    ctx->pc = 0x1219B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1219B0u, 0x11A570u, 0x11A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A578u;
label_11a578:
    // 0x11a578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A57Cu;
        // 0x11a580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A584u;
    // 0x11a584: 0x0  nop
    ctx->pc = 0x11a584u;
    // NOP
    ctx->pc = 0x11a588u;
}
