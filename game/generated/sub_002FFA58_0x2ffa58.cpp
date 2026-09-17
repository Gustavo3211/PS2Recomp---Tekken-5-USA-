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

// Function: sub_002FFA58
// Address: 0x2ffa58 - 0x2ffcf0
void sub_002FFA58_0x2ffa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFA58_0x2ffa58");
#endif

    switch (ctx->pc) {
        case 0x2ffa98u: goto label_2ffa98;
        case 0x2ffaa4u: goto label_2ffaa4;
        case 0x2ffad0u: goto label_2ffad0;
        case 0x2ffc00u: goto label_2ffc00;
        case 0x2ffcc4u: goto label_2ffcc4;
        case 0x2ffcccu: goto label_2ffccc;
        default: break;
    }

    ctx->pc = 0x2ffa58u;

    // 0x2ffa58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ffa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ffa5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ffa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ffa60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ffa60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ffa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ffa68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ffa68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa6c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ffa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2ffa70: 0x261306e0  addiu       $s3, $s0, 0x6E0
    ctx->pc = 0x2ffa70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1760));
    // 0x2ffa74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ffa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ffa78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ffa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ffa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ffa80: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x2ffa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ffa84: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x2ffa84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2ffa88: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2ffa88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa8c: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x2ffa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x2ffa90: 0xc0dcc8c  jal         func_373230
    ctx->pc = 0x2FFA90u;
    SET_GPR_U32(ctx, 31, 0x2FFA98u);
    ctx->pc = 0x2FFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA90u;
    // 0x2ffa94: 0x8c520048  lw          $s2, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373230u, 0x2FFA90u, 0x2FFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA98u;
label_2ffa98:
    // 0x2ffa98: 0x26050720  addiu       $a1, $s0, 0x720
    ctx->pc = 0x2ffa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x2ffa9c: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2FFA9Cu;
    SET_GPR_U32(ctx, 31, 0x2FFAA4u);
    ctx->pc = 0x2FFAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA9Cu;
    // 0x2ffaa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2FFA9Cu, 0x2FFAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAA4u;
label_2ffaa4:
    // 0x2ffaa4: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2ffaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ffaa8: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FFAA8u;
    {
        const bool branch_taken_0x2ffaa8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ffaa8) {
            ctx->pc = 0x2FFAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFAA8u;
            // 0x2ffaac: 0x8e2a003c  lw          $t2, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFAB4u;
            goto label_2ffab4;
        }
    }
    ctx->pc = 0x2FFAB0u;
    // 0x2ffab0: 0x8e2a0050  lw          $t2, 0x50($s1)
    ctx->pc = 0x2ffab0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ffab4:
    // 0x2ffab4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ffab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffab8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2FFAB8u;
    {
        const bool branch_taken_0x2ffab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAB8u;
        // 0x2ffabc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffab8) {
            ctx->pc = 0x2FFBD8u;
            goto label_2ffbd8;
        }
    }
    ctx->pc = 0x2FFAC0u;
    // 0x2ffac0: 0x18800079  blez        $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2FFAC0u;
    {
        const bool branch_taken_0x2ffac0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2FFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAC0u;
        // 0x2ffac4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffac0) {
            ctx->pc = 0x2FFCA8u;
            goto label_2ffca8;
        }
    }
    ctx->pc = 0x2FFAC8u;
    // 0x2ffac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFAC8u;
    {
        const bool branch_taken_0x2ffac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAC8u;
        // 0x2ffacc: 0x94080  sll         $t0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffac8) {
            ctx->pc = 0x2FFAD8u;
            goto label_2ffad8;
        }
    }
    ctx->pc = 0x2FFAD0u;
label_2ffad0:
    // 0x2ffad0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x2ffad0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2ffad4: 0x0  nop
    ctx->pc = 0x2ffad4u;
    // NOP
label_2ffad8:
    // 0x2ffad8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ffad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ffadc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ffadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffae0: 0x4600037  bltz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FFAE0u;
    {
        const bool branch_taken_0x2ffae0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2FFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAE0u;
        // 0x2ffae4: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffae0) {
            ctx->pc = 0x2FFBC0u;
            goto label_2ffbc0;
        }
    }
    ctx->pc = 0x2FFAE8u;
    // 0x2ffae8: 0x92180  sll         $a0, $t1, 6
    ctx->pc = 0x2ffae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ffaec: 0x1423821  addu        $a3, $t2, $v0
    ctx->pc = 0x2ffaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2ffaf0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2ffaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2ffaf4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2ffaf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ffaf8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x2ffaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x2ffafc: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2ffafcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ffb00: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x2ffb00u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x2ffb04: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2ffb04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ffb08: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x2ffb08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x2ffb0c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x2ffb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ffb10: 0x461002a  bgez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FFB10u;
    {
        const bool branch_taken_0x2ffb10 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2FFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB10u;
        // 0x2ffb14: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb10) {
            ctx->pc = 0x2FFBBCu;
            goto label_2ffbbc;
        }
    }
    ctx->pc = 0x2FFB18u;
    // 0x2ffb18: 0x26260038  addiu       $a2, $s1, 0x38
    ctx->pc = 0x2ffb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x2ffb1c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ffb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ffb20: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ffb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ffb24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ffb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffb28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ffb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffb2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ffb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffb30: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2ffb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ffb34: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2ffb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ffb38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ffb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ffb3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ffb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ffb40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ffb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ffb44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ffb48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ffb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ffb4c: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x2ffb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x2ffb50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ffb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffb54: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ffb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ffb58: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ffb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ffb5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ffb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffb60: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2ffb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ffb64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2ffb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ffb68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ffb6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ffb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ffb70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ffb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ffb74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ffb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ffb78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ffb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ffb7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ffb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ffb80: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x2ffb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x2ffb84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ffb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffb88: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ffb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ffb8c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ffb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ffb90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ffb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffb94: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2ffb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ffb98: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2ffb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ffb9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ffba0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ffba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ffba4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2ffba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2ffba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ffba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ffbac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ffbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ffbb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ffbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ffbb4: 0xe4e1003c  swc1        $f1, 0x3C($a3)
    ctx->pc = 0x2ffbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 60), bits); }
    // 0x2ffbb8: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x2ffbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
label_2ffbbc:
    // 0x2ffbbc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2ffbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ffbc0:
    // 0x2ffbc0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2ffbc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ffbc4: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x2ffbc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ffbc8: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2FFBC8u;
    {
        const bool branch_taken_0x2ffbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffbc8) {
            ctx->pc = 0x2FFBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFBC8u;
            // 0x2ffbcc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffad0;
        }
    }
    ctx->pc = 0x2FFBD0u;
    // 0x2ffbd0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2FFBD0u;
    {
        const bool branch_taken_0x2ffbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBD0u;
        // 0x2ffbd4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbd0) {
            ctx->pc = 0x2FFCACu;
            goto label_2ffcac;
        }
    }
    ctx->pc = 0x2FFBD8u;
label_2ffbd8:
    // 0x2ffbd8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ffbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ffbdc: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2FFBDCu;
    {
        const bool branch_taken_0x2ffbdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBDCu;
        // 0x2ffbe0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbdc) {
            ctx->pc = 0x2FFCA8u;
            goto label_2ffca8;
        }
    }
    ctx->pc = 0x2FFBE4u;
    // 0x2ffbe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ffbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffbe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ffbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffbec: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x2ffbecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x2ffbf0: 0x26290038  addiu       $t1, $s1, 0x38
    ctx->pc = 0x2ffbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x2ffbf4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2ffbf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffbf8: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2ffbf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffbfc: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x2ffbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_2ffc00:
    // 0x2ffc00: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2ffc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2ffc04: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x2ffc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2ffc08: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2ffc08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ffc0c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x2ffc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x2ffc10: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2ffc10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ffc14: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x2ffc14u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x2ffc18: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2ffc18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ffc1c: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x2ffc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x2ffc20: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x2ffc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ffc24: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x2ffc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x2ffc28: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FFC28u;
    {
        const bool branch_taken_0x2ffc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC28u;
        // 0x2ffc2c: 0x82040  sll         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc28) {
            ctx->pc = 0x2FFC94u;
            goto label_2ffc94;
        }
    }
    ctx->pc = 0x2FFC30u;
    // 0x2ffc30: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2ffc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ffc34: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2ffc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2ffc38: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ffc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ffc3c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2ffc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ffc40: 0x8c3021  addu        $a2, $a0, $t4
    ctx->pc = 0x2ffc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2ffc44: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2ffc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2ffc48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ffc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ffc4c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ffc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ffc50: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2ffc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ffc54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ffc54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ffc58: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ffc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ffc5c: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x2ffc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x2ffc60: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2ffc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ffc64: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ffc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ffc68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ffc6c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2ffc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ffc70: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ffc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ffc74: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x2ffc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x2ffc78: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2ffc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ffc7c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ffc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ffc80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ffc84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ffc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ffc88: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ffc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ffc8c: 0xe4e1003c  swc1        $f1, 0x3C($a3)
    ctx->pc = 0x2ffc8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 60), bits); }
    // 0x2ffc90: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x2ffc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
label_2ffc94:
    // 0x2ffc94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ffc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ffc98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ffc98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ffc9c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2ffc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ffca0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2FFCA0u;
    {
        const bool branch_taken_0x2ffca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCA0u;
        // 0x2ffca4: 0x81980  sll         $v1, $t0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffca0) {
            ctx->pc = 0x2FFC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffc00;
        }
    }
    ctx->pc = 0x2FFCA8u;
label_2ffca8:
    // 0x2ffca8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2ffca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2ffcac:
    // 0x2ffcac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ffcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcb4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2ffcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ffcb8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2ffcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ffcbc: 0xc0bf994  jal         func_2FE650
    ctx->pc = 0x2FFCBCu;
    SET_GPR_U32(ctx, 31, 0x2FFCC4u);
    ctx->pc = 0x2FFCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFCBCu;
    // 0x2ffcc0: 0xac400034  sw          $zero, 0x34($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE650u, 0x2FFCBCu, 0x2FFCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCC4u;
label_2ffcc4:
    // 0x2ffcc4: 0xc0bfa9e  jal         func_2FEA78
    ctx->pc = 0x2FFCC4u;
    SET_GPR_U32(ctx, 31, 0x2FFCCCu);
    ctx->pc = 0x2FFCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFCC4u;
    // 0x2ffcc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEA78u, 0x2FFCC4u, 0x2FFCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCCCu;
label_2ffccc:
    // 0x2ffccc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ffcccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffcd0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ffcd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ffcd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ffcd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffcd8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ffcd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ffcdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ffcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ffce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCE0u;
        // 0x2ffce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFCE8u;
    // 0x2ffce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFCF0u;
}
