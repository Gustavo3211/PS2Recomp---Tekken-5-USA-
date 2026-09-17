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

// Function: sub_0029A150
// Address: 0x29a150 - 0x29a338
void sub_0029A150_0x29a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A150_0x29a150");
#endif

    switch (ctx->pc) {
        case 0x29a234u: goto label_29a234;
        case 0x29a258u: goto label_29a258;
        default: break;
    }

    ctx->pc = 0x29a150u;

    // 0x29a150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29a158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29a158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a15c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29a160: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29a164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29a16c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29a170: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29a174: 0x8c870150  lw          $a3, 0x150($a0)
    ctx->pc = 0x29a174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a178: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x29a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x29a17c: 0x8ce20100  lw          $v0, 0x100($a3)
    ctx->pc = 0x29a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x29a180: 0x24750060  addiu       $s5, $v1, 0x60
    ctx->pc = 0x29a180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x29a184: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x29a184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29a188: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A188u;
    {
        const bool branch_taken_0x29a188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A188u;
        // 0x29a18c: 0x24740058  addiu       $s4, $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a188) {
            ctx->pc = 0x29A1A4u;
            goto label_29a1a4;
        }
    }
    ctx->pc = 0x29A190u;
    // 0x29a190: 0xc4e10104  lwc1        $f1, 0x104($a3)
    ctx->pc = 0x29a190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a194: 0xc7809020  lwc1        $f0, -0x6FE0($gp)
    ctx->pc = 0x29a194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a19c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x29A19Cu;
    {
        const bool branch_taken_0x29a19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a19c) {
            ctx->pc = 0x29A1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A19Cu;
            // 0x29a1a0: 0x8ce20100  lw          $v0, 0x100($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A1ACu;
            goto label_29a1ac;
        }
    }
    ctx->pc = 0x29A1A4u;
label_29a1a4:
    // 0x29a1a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29a1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a1a8: 0x8ce20100  lw          $v0, 0x100($a3)
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
label_29a1ac:
    // 0x29a1ac: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x29a1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x29a1b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A1B0u;
    {
        const bool branch_taken_0x29a1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1B0u;
        // 0x29a1b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1b0) {
            ctx->pc = 0x29A1CCu;
            goto label_29a1cc;
        }
    }
    ctx->pc = 0x29A1B8u;
    // 0x29a1b8: 0xc4e10104  lwc1        $f1, 0x104($a3)
    ctx->pc = 0x29a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a1bc: 0xc7809024  lwc1        $f0, -0x6FDC($gp)
    ctx->pc = 0x29a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a1c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29a1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a1c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29A1C4u;
    {
        const bool branch_taken_0x29a1c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1C4u;
        // 0x29a1c8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1c4) {
            ctx->pc = 0x29A1D4u;
            goto label_29a1d4;
        }
    }
    ctx->pc = 0x29A1CCu;
label_29a1cc:
    // 0x29a1cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29a1ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a1d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_29a1d4:
    // 0x29a1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29a1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1d8: 0x904583ed  lbu         $a1, -0x7C13($v0)
    ctx->pc = 0x29a1d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935533)));
    // 0x29a1dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29a1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1e0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A1E0u;
    {
        const bool branch_taken_0x29a1e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1E0u;
        // 0x29a1e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1e0) {
            ctx->pc = 0x29A1F0u;
            goto label_29a1f0;
        }
    }
    ctx->pc = 0x29A1E8u;
    // 0x29a1e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29A1E8u;
    {
        const bool branch_taken_0x29a1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1E8u;
        // 0x29a1ec: 0x8f86a848  lw          $a2, -0x57B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1e8) {
            ctx->pc = 0x29A200u;
            goto label_29a200;
        }
    }
    ctx->pc = 0x29A1F0u;
label_29a1f0:
    // 0x29a1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a1f4: 0x8f83a84c  lw          $v1, -0x57B4($gp)
    ctx->pc = 0x29a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944844)));
    // 0x29a1f8: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x29a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x29a1fc: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x29a1fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_29a200:
    // 0x29a200: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x29a200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x29a204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A204u;
    {
        const bool branch_taken_0x29a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A204u;
        // 0x29a208: 0x30c24000  andi        $v0, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a204) {
            ctx->pc = 0x29A218u;
            goto label_29a218;
        }
    }
    ctx->pc = 0x29A20Cu;
    // 0x29a20c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29A20Cu;
    {
        const bool branch_taken_0x29a20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A20Cu;
        // 0x29a210: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a20c) {
            ctx->pc = 0x29A21Cu;
            goto label_29a21c;
        }
    }
    ctx->pc = 0x29A214u;
    // 0x29a214: 0x0  nop
    ctx->pc = 0x29a214u;
    // NOP
label_29a218:
    // 0x29a218: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x29a218u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29a21c:
    // 0x29a21c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A21Cu;
    {
        const bool branch_taken_0x29a21c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a21c) {
            ctx->pc = 0x29A240u;
            goto label_29a240;
        }
    }
    ctx->pc = 0x29A224u;
    // 0x29a224: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x29A224u;
    {
        const bool branch_taken_0x29a224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a224) {
            ctx->pc = 0x29A228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A224u;
            // 0x29a228: 0xace00104  sw          $zero, 0x104($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A260u;
            goto label_29a260;
        }
    }
    ctx->pc = 0x29A22Cu;
    // 0x29a22c: 0xc0a68ce  jal         func_29A338
    ctx->pc = 0x29A22Cu;
    SET_GPR_U32(ctx, 31, 0x29A234u);
    ctx->pc = 0x29A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A338u, 0x29A22Cu, 0x29A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A234u;
label_29a234:
    // 0x29a234: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29A234u;
    {
        const bool branch_taken_0x29a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A234u;
        // 0x29a238: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a234) {
            ctx->pc = 0x29A264u;
            goto label_29a264;
        }
    }
    ctx->pc = 0x29A23Cu;
    // 0x29a23c: 0x0  nop
    ctx->pc = 0x29a23cu;
    // NOP
label_29a240:
    // 0x29a240: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A240u;
    {
        const bool branch_taken_0x29a240 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A240u;
        // 0x29a244: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a240) {
            ctx->pc = 0x29A264u;
            goto label_29a264;
        }
    }
    ctx->pc = 0x29A248u;
    // 0x29a248: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A248u;
    {
        const bool branch_taken_0x29a248 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a248) {
            ctx->pc = 0x29A24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A248u;
            // 0x29a24c: 0xace00104  sw          $zero, 0x104($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A264u;
            goto label_29a264;
        }
    }
    ctx->pc = 0x29A250u;
    // 0x29a250: 0xc0a68e2  jal         func_29A388
    ctx->pc = 0x29A250u;
    SET_GPR_U32(ctx, 31, 0x29A258u);
    ctx->pc = 0x29A388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A388u, 0x29A250u, 0x29A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A258u;
label_29a258:
    // 0x29a258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A258u;
    {
        const bool branch_taken_0x29a258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A258u;
        // 0x29a25c: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a258) {
            ctx->pc = 0x29A264u;
            goto label_29a264;
        }
    }
    ctx->pc = 0x29A260u;
label_29a260:
    // 0x29a260: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x29a260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_29a264:
    // 0x29a264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A264u;
    {
        const bool branch_taken_0x29a264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A264u;
        // 0x29a268: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a264) {
            ctx->pc = 0x29A278u;
            goto label_29a278;
        }
    }
    ctx->pc = 0x29A26Cu;
    // 0x29a26c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29A270u;
    {
        const bool branch_taken_0x29a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A270u;
        // 0x29a274: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a270) {
            ctx->pc = 0x29A284u;
            goto label_29a284;
        }
    }
    ctx->pc = 0x29A278u;
label_29a278:
    // 0x29a278: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a27c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29a280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29a284:
    // 0x29a284: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29a284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29a288: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x29a288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x29a28c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A28Cu;
    {
        const bool branch_taken_0x29a28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A28Cu;
        // 0x29a290: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a28c) {
            ctx->pc = 0x29A2A0u;
            goto label_29a2a0;
        }
    }
    ctx->pc = 0x29A294u;
    // 0x29a294: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29A298u;
    {
        const bool branch_taken_0x29a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A298u;
        // 0x29a29c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a298) {
            ctx->pc = 0x29A2ACu;
            goto label_29a2ac;
        }
    }
    ctx->pc = 0x29A2A0u;
label_29a2a0:
    // 0x29a2a0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a2a4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29a2a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29a2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29a2ac:
    // 0x29a2ac: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29a2b0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A2B0u;
    {
        const bool branch_taken_0x29a2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2B0u;
        // 0x29a2b4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2b0) {
            ctx->pc = 0x29A2C0u;
            goto label_29a2c0;
        }
    }
    ctx->pc = 0x29A2B8u;
    // 0x29a2b8: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A2B8u;
    {
        const bool branch_taken_0x29a2b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2B8u;
        // 0x29a2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2b8) {
            ctx->pc = 0x29A2C4u;
            goto label_29a2c4;
        }
    }
    ctx->pc = 0x29A2C0u;
label_29a2c0:
    // 0x29a2c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a2c4:
    // 0x29a2c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A2C4u;
    {
        const bool branch_taken_0x29a2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2C4u;
        // 0x29a2c8: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2c4) {
            ctx->pc = 0x29A2D8u;
            goto label_29a2d8;
        }
    }
    ctx->pc = 0x29A2CCu;
    // 0x29a2cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29A2CCu;
    {
        const bool branch_taken_0x29a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2CCu;
        // 0x29a2d0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2cc) {
            ctx->pc = 0x29A2E0u;
            goto label_29a2e0;
        }
    }
    ctx->pc = 0x29A2D4u;
    // 0x29a2d4: 0x0  nop
    ctx->pc = 0x29a2d4u;
    // NOP
label_29a2d8:
    // 0x29a2d8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29a2dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29a2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29a2e0:
    // 0x29a2e0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29a2e4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A2E4u;
    {
        const bool branch_taken_0x29a2e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2E4u;
        // 0x29a2e8: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2e4) {
            ctx->pc = 0x29A2F4u;
            goto label_29a2f4;
        }
    }
    ctx->pc = 0x29A2ECu;
    // 0x29a2ec: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A2ECu;
    {
        const bool branch_taken_0x29a2ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2ECu;
        // 0x29a2f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2ec) {
            ctx->pc = 0x29A2F8u;
            goto label_29a2f8;
        }
    }
    ctx->pc = 0x29A2F4u;
label_29a2f4:
    // 0x29a2f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a2f8:
    // 0x29a2f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A2F8u;
    {
        const bool branch_taken_0x29a2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2F8u;
        // 0x29a2fc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2f8) {
            ctx->pc = 0x29A308u;
            goto label_29a308;
        }
    }
    ctx->pc = 0x29A300u;
    // 0x29a300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29A300u;
    {
        const bool branch_taken_0x29a300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A300u;
        // 0x29a304: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a300) {
            ctx->pc = 0x29A310u;
            goto label_29a310;
        }
    }
    ctx->pc = 0x29A308u;
label_29a308:
    // 0x29a308: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29a30c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29a310:
    // 0x29a310: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29a310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29a314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29a318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29a31c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29a31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a320: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29a320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29a324: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29a324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a328: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29a328u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29a32c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a330: 0x3e00008  jr          $ra
    ctx->pc = 0x29A330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A330u;
        // 0x29a334: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A338u;
}
