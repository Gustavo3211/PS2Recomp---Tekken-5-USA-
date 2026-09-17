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

// Function: sub_002C55A8
// Address: 0x2c55a8 - 0x2c5828
void sub_002C55A8_0x2c55a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C55A8_0x2c55a8");
#endif

    switch (ctx->pc) {
        case 0x2c5618u: goto label_2c5618;
        case 0x2c5740u: goto label_2c5740;
        case 0x2c5804u: goto label_2c5804;
        case 0x2c5818u: goto label_2c5818;
        default: break;
    }

    ctx->pc = 0x2c55a8u;

    // 0x2c55a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c55a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c55ac: 0x8f87cb08  lw          $a3, -0x34F8($gp)
    ctx->pc = 0x2c55acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953736)));
    // 0x2c55b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c55b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c55b4: 0x8cc30898  lw          $v1, 0x898($a2)
    ctx->pc = 0x2c55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2200)));
    // 0x2c55b8: 0x9468006c  lhu         $t0, 0x6C($v1)
    ctx->pc = 0x2c55b8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2c55bc: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x2c55bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c55c0: 0x50400096  beql        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x2C55C0u;
    {
        const bool branch_taken_0x2c55c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c55c0) {
            ctx->pc = 0x2C55C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C55C0u;
            // 0x2c55c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C581Cu;
            goto label_2c581c;
        }
    }
    ctx->pc = 0x2C55C8u;
    // 0x2c55c8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2c55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2c55cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c55d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c55d4: 0x8c63e240  lw          $v1, -0x1DC0($v1)
    ctx->pc = 0x2c55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959680)));
    // 0x2c55d8: 0x600008  jr          $v1
    ctx->pc = 0x2C55D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C55E0u: goto label_2c55e0;
            case 0x2C55E8u: goto label_2c55e8;
            case 0x2C55F0u: goto label_2c55f0;
            case 0x2C55F8u: goto label_2c55f8;
            case 0x2C5600u: goto label_2c5600;
            case 0x2C5818u: goto label_2c5818;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C55D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C55E0u;
label_2c55e0:
    // 0x2c55e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C55E0u;
    {
        const bool branch_taken_0x2c55e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55E0u;
        // 0x2c55e4: 0x240a0016  addiu       $t2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55e0) {
            ctx->pc = 0x2C5604u;
            goto label_2c5604;
        }
    }
    ctx->pc = 0x2C55E8u;
label_2c55e8:
    // 0x2c55e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C55E8u;
    {
        const bool branch_taken_0x2c55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55E8u;
        // 0x2c55ec: 0x240a0011  addiu       $t2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55e8) {
            ctx->pc = 0x2C5604u;
            goto label_2c5604;
        }
    }
    ctx->pc = 0x2C55F0u;
label_2c55f0:
    // 0x2c55f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C55F0u;
    {
        const bool branch_taken_0x2c55f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55F0u;
        // 0x2c55f4: 0x240a0012  addiu       $t2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55f0) {
            ctx->pc = 0x2C5604u;
            goto label_2c5604;
        }
    }
    ctx->pc = 0x2C55F8u;
label_2c55f8:
    // 0x2c55f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C55F8u;
    {
        const bool branch_taken_0x2c55f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55F8u;
        // 0x2c55fc: 0x240a0017  addiu       $t2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55f8) {
            ctx->pc = 0x2C5604u;
            goto label_2c5604;
        }
    }
    ctx->pc = 0x2C5600u;
label_2c5600:
    // 0x2c5600: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2c5600u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c5604:
    // 0x2c5604: 0x8f82bb04  lw          $v0, -0x44FC($gp)
    ctx->pc = 0x2c5604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
    // 0x2c5608: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C5608u;
    {
        const bool branch_taken_0x2c5608 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5608u;
        // 0x2c560c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5608) {
            ctx->pc = 0x2C56E4u;
            goto label_2c56e4;
        }
    }
    ctx->pc = 0x2C5610u;
    // 0x2c5610: 0xc7819328  lwc1        $f1, -0x6CD8($gp)
    ctx->pc = 0x2c5610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5614: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c5614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5618:
    // 0x2c5618: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c561c: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C561Cu;
    {
        const bool branch_taken_0x2c561c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C561Cu;
        // 0x2c5620: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c561c) {
            ctx->pc = 0x2C56D8u;
            goto label_2c56d8;
        }
    }
    ctx->pc = 0x2C5624u;
    // 0x2c5624: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c5624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c5628: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2c5628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2c562c: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x2c562cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c5630: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2c5630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c5634: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2c5634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2c5638: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2c5638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c563c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2c563cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5640: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x2c5640u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x2c5644: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x2c5644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2c5648: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x2c5648u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2c564c: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x2c564cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2c5650: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2c5650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c5654: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x2c5654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c5658: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c5658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c565c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C565Cu;
    {
        const bool branch_taken_0x2c565c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C565Cu;
        // 0x2c5660: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c565c) {
            ctx->pc = 0x2C567Cu;
            goto label_2c567c;
        }
    }
    ctx->pc = 0x2C5664u;
    // 0x2c5664: 0x861026  xor         $v0, $a0, $a2
    ctx->pc = 0x2c5664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x2c5668: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c5668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c566c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2c566cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2c5670: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2c5670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c5674: 0x54800034  bnel        $a0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C5674u;
    {
        const bool branch_taken_0x2c5674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5674) {
            ctx->pc = 0x2C5678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5674u;
            // 0x2c5678: 0x85020010  lh          $v0, 0x10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5748u;
            goto label_2c5748;
        }
    }
    ctx->pc = 0x2C567Cu;
label_2c567c:
    // 0x2c567c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2c567cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2c5680: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c5680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c5684: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x2c5684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c5688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c568c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c568cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5690: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5694: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c5694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c5698: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x2c5698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2c569c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c569cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c56a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c56a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c56a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c56a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c56a8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2c56a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2c56ac: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x2c56acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c56b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c56b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c56b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c56b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c56b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c56b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c56bc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2c56bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2c56c0: 0x85020006  lh          $v0, 0x6($t0)
    ctx->pc = 0x2c56c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x2c56c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c56c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c56c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c56c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c56cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c56ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c56d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2C56D0u;
    {
        const bool branch_taken_0x2c56d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56D0u;
        // 0x2c56d4: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56d0) {
            ctx->pc = 0x2C5818u;
            goto label_2c5818;
        }
    }
    ctx->pc = 0x2C56D8u;
label_2c56d8:
    // 0x2c56d8: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x2c56d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2c56dc: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2C56DCu;
    {
        const bool branch_taken_0x2c56dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56DCu;
        // 0x2c56e0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56dc) {
            ctx->pc = 0x2C5618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5618;
        }
    }
    ctx->pc = 0x2C56E4u;
label_2c56e4:
    // 0x2c56e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c56e8: 0x1102000f  beq         $t0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C56E8u;
    {
        const bool branch_taken_0x2c56e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56E8u;
        // 0x2c56ec: 0x29020004  slti        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56e8) {
            ctx->pc = 0x2C5728u;
            goto label_2c5728;
        }
    }
    ctx->pc = 0x2C56F0u;
    // 0x2c56f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C56F0u;
    {
        const bool branch_taken_0x2c56f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C56F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56F0u;
        // 0x2c56f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56f0) {
            ctx->pc = 0x2C5710u;
            goto label_2c5710;
        }
    }
    ctx->pc = 0x2C56F8u;
    // 0x2c56f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c56fc: 0x51020044  beql        $t0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C56FCu;
    {
        const bool branch_taken_0x2c56fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c56fc) {
            ctx->pc = 0x2C5700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C56FCu;
            // 0x2c5700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5810u;
            goto label_2c5810;
        }
    }
    ctx->pc = 0x2C5704u;
    // 0x2c5704: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C5704u;
    {
        const bool branch_taken_0x2c5704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5704) {
            ctx->pc = 0x2C5738u;
            goto label_2c5738;
        }
    }
    ctx->pc = 0x2C570Cu;
    // 0x2c570c: 0x0  nop
    ctx->pc = 0x2c570cu;
    // NOP
label_2c5710:
    // 0x2c5710: 0x11020007  beq         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5710u;
    {
        const bool branch_taken_0x2c5710 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5710u;
        // 0x2c5714: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5710) {
            ctx->pc = 0x2C5730u;
            goto label_2c5730;
        }
    }
    ctx->pc = 0x2C5718u;
    // 0x2c5718: 0x5102003d  beql        $t0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C5718u;
    {
        const bool branch_taken_0x2c5718 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5718) {
            ctx->pc = 0x2C571Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5718u;
            // 0x2c571c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5810u;
            goto label_2c5810;
        }
    }
    ctx->pc = 0x2C5720u;
    // 0x2c5720: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5720u;
    {
        const bool branch_taken_0x2c5720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5720) {
            ctx->pc = 0x2C5738u;
            goto label_2c5738;
        }
    }
    ctx->pc = 0x2C5728u;
label_2c5728:
    // 0x2c5728: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2C5728u;
    {
        const bool branch_taken_0x2c5728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5728u;
        // 0x2c572c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5728) {
            ctx->pc = 0x2C5810u;
            goto label_2c5810;
        }
    }
    ctx->pc = 0x2C5730u;
label_2c5730:
    // 0x2c5730: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2C5730u;
    {
        const bool branch_taken_0x2c5730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5730u;
        // 0x2c5734: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5730) {
            ctx->pc = 0x2C5810u;
            goto label_2c5810;
        }
    }
    ctx->pc = 0x2C5738u;
label_2c5738:
    // 0x2c5738: 0xc096b90  jal         func_25AE40
    ctx->pc = 0x2C5738u;
    SET_GPR_U32(ctx, 31, 0x2C5740u);
    ctx->pc = 0x25AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AE40u, 0x2C5738u, 0x2C5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5740u;
label_2c5740:
    // 0x2c5740: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2C5740u;
    {
        const bool branch_taken_0x2c5740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5740u;
        // 0x2c5744: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5740) {
            ctx->pc = 0x2C581Cu;
            goto label_2c581c;
        }
    }
    ctx->pc = 0x2C5748u;
label_2c5748:
    // 0x2c5748: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x2c5748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2c574c: 0xc781932c  lwc1        $f1, -0x6CD4($gp)
    ctx->pc = 0x2c574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5750: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2c5750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c5754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c575c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2c575cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c5760: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x2c5760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c5764: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5768: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2c5768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c576c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c576cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5770: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c5770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c5774: 0x85020012  lh          $v0, 0x12($t0)
    ctx->pc = 0x2c5774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x2c5778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c577c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c577cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5780: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5784: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2c5784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c5788: 0x85020014  lh          $v0, 0x14($t0)
    ctx->pc = 0x2c5788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2c578c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c578cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5794: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5798: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c5798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c579c: 0x85020016  lh          $v0, 0x16($t0)
    ctx->pc = 0x2c579cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 22)));
    // 0x2c57a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c57a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c57a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c57a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c57a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c57a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c57ac: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2c57acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c57b0: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x2c57b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c57b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c57b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c57b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c57b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c57bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c57bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c57c0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2c57c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2c57c4: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x2c57c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2c57c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c57c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c57cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c57ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c57d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c57d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c57d4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c57d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c57d8: 0x84620014  lh          $v0, 0x14($v1)
    ctx->pc = 0x2c57d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c57dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c57dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c57e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c57e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c57e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c57e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c57e8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c57e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c57ec: 0x84620016  lh          $v0, 0x16($v1)
    ctx->pc = 0x2c57ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2c57f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c57f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c57f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c57f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c57f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c57f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c57fc: 0xc09714e  jal         func_25C538
    ctx->pc = 0x2C57FCu;
    SET_GPR_U32(ctx, 31, 0x2C5804u);
    ctx->pc = 0x2C5800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C57FCu;
    // 0x2c5800: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C538u, 0x2C57FCu, 0x2C5804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5804u;
label_2c5804:
    // 0x2c5804: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5804u;
    {
        const bool branch_taken_0x2c5804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5804u;
        // 0x2c5808: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5804) {
            ctx->pc = 0x2C581Cu;
            goto label_2c581c;
        }
    }
    ctx->pc = 0x2C580Cu;
    // 0x2c580c: 0x0  nop
    ctx->pc = 0x2c580cu;
    // NOP
label_2c5810:
    // 0x2c5810: 0xc0b1f86  jal         func_2C7E18
    ctx->pc = 0x2C5810u;
    SET_GPR_U32(ctx, 31, 0x2C5818u);
    ctx->pc = 0x2C7E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7E18u, 0x2C5810u, 0x2C5818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5818u;
label_2c5818:
    // 0x2c5818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c581c:
    // 0x2c581c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C581Cu;
        // 0x2c5820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5824u;
    // 0x2c5824: 0x0  nop
    ctx->pc = 0x2c5824u;
    // NOP
    ctx->pc = 0x2c5828u;
}
