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

// Function: sub_0021D560
// Address: 0x21d560 - 0x21d670
void sub_0021D560_0x21d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D560_0x21d560");
#endif

    switch (ctx->pc) {
        case 0x21d5ccu: goto label_21d5cc;
        case 0x21d5d4u: goto label_21d5d4;
        case 0x21d654u: goto label_21d654;
        default: break;
    }

    ctx->pc = 0x21d560u;

    // 0x21d560: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x21d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x21d564: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21d564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21d568: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x21d568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x21d56c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x21d56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d570: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x21d570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x21d574: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x21d574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d578: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x21d578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x21d57c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21d57cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d580: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x21d580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x21d584: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x21d584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d588: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x21d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x21d58c: 0x244269e0  addiu       $v0, $v0, 0x69E0
    ctx->pc = 0x21d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
    // 0x21d590: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21d590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21d594: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21d594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21d598: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x21d598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x21d59c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x21d59cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d5a0: 0x904c000e  lbu         $t4, 0xE($v0)
    ctx->pc = 0x21d5a0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x21d5a4: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x21d5a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x21d5a8: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x21d5a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21d5ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21d5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5b0: 0x944b000c  lhu         $t3, 0xC($v0)
    ctx->pc = 0x21d5b0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21d5b4: 0xa3ac000e  sb          $t4, 0xE($sp)
    ctx->pc = 0x21d5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 12));
    // 0x21d5b8: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x21d5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x21d5bc: 0xa7ab000c  sh          $t3, 0xC($sp)
    ctx->pc = 0x21d5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 11));
    // 0x21d5c0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x21d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x21d5c4: 0xc04a38c  jal         func_128E30
    ctx->pc = 0x21D5C4u;
    SET_GPR_U32(ctx, 31, 0x21D5CCu);
    ctx->pc = 0x21D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5C4u;
    // 0x21d5c8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128E30u, 0x21D5C4u, 0x21D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5CCu;
label_21d5cc:
    // 0x21d5cc: 0xc0a6402  jal         func_299008
    ctx->pc = 0x21D5CCu;
    SET_GPR_U32(ctx, 31, 0x21D5D4u);
    ctx->pc = 0x21D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5CCu;
    // 0x21d5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299008u, 0x21D5CCu, 0x21D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5D4u;
label_21d5d4:
    // 0x21d5d4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x21d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x21d5d8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x21d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21d5dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d5e0: 0xc460bf18  lwc1        $f0, -0x40E8($v1)
    ctx->pc = 0x21d5e0u;
    { uint32_t bits = FAST_READ32(0x3BBF18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d5e4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x21d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x21d5e8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x21d5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x21d5ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21d5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21d5f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21d5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21d5f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21d5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21d5f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5fc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x21d5fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d600: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x21d600u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21d608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d60c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x21d60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21d610: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x21d610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x21d614: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x21d614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d618: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21d618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21d61c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x21d61cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x21d620: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21D620u;
    {
        const bool branch_taken_0x21d620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D620u;
        // 0x21d624: 0x436024  and         $t4, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d620) {
            ctx->pc = 0x21D63Cu;
            goto label_21d63c;
        }
    }
    ctx->pc = 0x21D628u;
    // 0x21d628: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21d628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21d62c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21d62cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21d630: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x21d630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x21d634: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21d634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21d638: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x21d638u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_21d63c:
    // 0x21d63c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x21d63cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x21d640: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21d640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21d644: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21d644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21d648: 0x1884025  or          $t0, $t4, $t0
    ctx->pc = 0x21d648u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x21d64c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21D64Cu;
    SET_GPR_U32(ctx, 31, 0x21D654u);
    ctx->pc = 0x21D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D64Cu;
    // 0x21d650: 0xa4437cc2  sh          $v1, 0x7CC2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 31938), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21D64Cu, 0x21D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D654u;
label_21d654:
    // 0x21d654: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x21d654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21d658: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x21d658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x21d65c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x21d65cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21d660: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x21d660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21d664: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x21d664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21d668: 0x3e00008  jr          $ra
    ctx->pc = 0x21D668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D668u;
        // 0x21d66c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D670u;
}
