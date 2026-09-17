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

// Function: sub_00221550
// Address: 0x221550 - 0x221670
void sub_00221550_0x221550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221550_0x221550");
#endif

    ctx->pc = 0x221550u;

    // 0x221550: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x221550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x221554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221558: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x221558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22155c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x22155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x221560: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x221560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221564: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x221564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x221568: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x221568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22156c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22156Cu;
    {
        const bool branch_taken_0x22156c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22156Cu;
        // 0x221570: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22156c) {
            ctx->pc = 0x221598u;
            goto label_221598;
        }
    }
    ctx->pc = 0x221574u;
    // 0x221574: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x221574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221578: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x221578u;
    {
        const bool branch_taken_0x221578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221578) {
            ctx->pc = 0x221598u;
            goto label_221598;
        }
    }
    ctx->pc = 0x221580u;
    // 0x221580: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x221580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221584: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x221584u;
    {
        const bool branch_taken_0x221584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221584) {
            ctx->pc = 0x221598u;
            goto label_221598;
        }
    }
    ctx->pc = 0x22158Cu;
    // 0x22158c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x22158cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221590: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x221590u;
    {
        const bool branch_taken_0x221590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221590) {
            ctx->pc = 0x221594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221590u;
            // 0x221594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221598u;
            goto label_221598;
        }
    }
    ctx->pc = 0x221598u;
label_221598:
    // 0x221598: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x221598u;
    {
        const bool branch_taken_0x221598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221598u;
        // 0x22159c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221598) {
            ctx->pc = 0x221664u;
            goto label_221664;
        }
    }
    ctx->pc = 0x2215A0u;
    // 0x2215a0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2215a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2215a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2215a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215a8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2215a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2215ac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2215ACu;
    {
        const bool branch_taken_0x2215ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2215B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215ACu;
        // 0x2215b0: 0xc4c10018  lwc1        $f1, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215ac) {
            ctx->pc = 0x2215D8u;
            goto label_2215d8;
        }
    }
    ctx->pc = 0x2215B4u;
    // 0x2215b4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2215b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2215b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2215B8u;
    {
        const bool branch_taken_0x2215b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2215b8) {
            ctx->pc = 0x2215D8u;
            goto label_2215d8;
        }
    }
    ctx->pc = 0x2215C0u;
    // 0x2215c0: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x2215c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2215c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2215C4u;
    {
        const bool branch_taken_0x2215c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2215c4) {
            ctx->pc = 0x2215D8u;
            goto label_2215d8;
        }
    }
    ctx->pc = 0x2215CCu;
    // 0x2215cc: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x2215ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2215d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2215D0u;
    {
        const bool branch_taken_0x2215d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2215d0) {
            ctx->pc = 0x2215D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2215D0u;
            // 0x2215d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2215D8u;
            goto label_2215d8;
        }
    }
    ctx->pc = 0x2215D8u;
label_2215d8:
    // 0x2215d8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2215D8u;
    {
        const bool branch_taken_0x2215d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2215DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215D8u;
        // 0x2215dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215d8) {
            ctx->pc = 0x221664u;
            goto label_221664;
        }
    }
    ctx->pc = 0x2215E0u;
    // 0x2215e0: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2215e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2215e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2215e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215e8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2215e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2215ec: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2215ECu;
    {
        const bool branch_taken_0x2215ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2215F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215ECu;
        // 0x2215f0: 0xc4c10028  lwc1        $f1, 0x28($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215ec) {
            ctx->pc = 0x221618u;
            goto label_221618;
        }
    }
    ctx->pc = 0x2215F4u;
    // 0x2215f4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2215f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2215f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2215F8u;
    {
        const bool branch_taken_0x2215f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2215f8) {
            ctx->pc = 0x221618u;
            goto label_221618;
        }
    }
    ctx->pc = 0x221600u;
    // 0x221600: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x221600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221604: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x221604u;
    {
        const bool branch_taken_0x221604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221604) {
            ctx->pc = 0x221618u;
            goto label_221618;
        }
    }
    ctx->pc = 0x22160Cu;
    // 0x22160c: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x22160cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221610: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x221610u;
    {
        const bool branch_taken_0x221610 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221610) {
            ctx->pc = 0x221614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221610u;
            // 0x221614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221618u;
            goto label_221618;
        }
    }
    ctx->pc = 0x221618u;
label_221618:
    // 0x221618: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x221618u;
    {
        const bool branch_taken_0x221618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221618) {
            ctx->pc = 0x22161Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221618u;
            // 0x22161c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221664u;
            goto label_221664;
        }
    }
    ctx->pc = 0x221620u;
    // 0x221620: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x221620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221624: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x221624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221628: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x221628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22162c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22162Cu;
    {
        const bool branch_taken_0x22162c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22162Cu;
        // 0x221630: 0xc4c10038  lwc1        $f1, 0x38($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22162c) {
            ctx->pc = 0x221658u;
            goto label_221658;
        }
    }
    ctx->pc = 0x221634u;
    // 0x221634: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x221634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221638: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x221638u;
    {
        const bool branch_taken_0x221638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221638) {
            ctx->pc = 0x221658u;
            goto label_221658;
        }
    }
    ctx->pc = 0x221640u;
    // 0x221640: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x221640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221644: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x221644u;
    {
        const bool branch_taken_0x221644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221644) {
            ctx->pc = 0x221658u;
            goto label_221658;
        }
    }
    ctx->pc = 0x22164Cu;
    // 0x22164c: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x22164cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221650: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x221650u;
    {
        const bool branch_taken_0x221650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221650) {
            ctx->pc = 0x221654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221650u;
            // 0x221654: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221658u;
            goto label_221658;
        }
    }
    ctx->pc = 0x221658u;
label_221658:
    // 0x221658: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x221658u;
    {
        const bool branch_taken_0x221658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221658u;
        // 0x22165c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221658) {
            ctx->pc = 0x221664u;
            goto label_221664;
        }
    }
    ctx->pc = 0x221660u;
    // 0x221660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221664:
    // 0x221664: 0x3e00008  jr          $ra
    ctx->pc = 0x221664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22166Cu;
    // 0x22166c: 0x0  nop
    ctx->pc = 0x22166cu;
    // NOP
    ctx->pc = 0x221670u;
}
