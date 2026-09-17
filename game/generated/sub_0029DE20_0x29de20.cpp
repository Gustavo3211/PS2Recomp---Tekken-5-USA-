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

// Function: sub_0029DE20
// Address: 0x29de20 - 0x29df30
void sub_0029DE20_0x29de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DE20_0x29de20");
#endif

    ctx->pc = 0x29de20u;

    // 0x29de20: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x29de20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de24: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x29de24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29de28: 0x8d070150  lw          $a3, 0x150($t0)
    ctx->pc = 0x29de28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 336)));
    // 0x29de2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29de2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29de30: 0x8d020154  lw          $v0, 0x154($t0)
    ctx->pc = 0x29de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 340)));
    // 0x29de34: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x29de34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x29de38: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x29de38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x29de3c: 0x244a0040  addiu       $t2, $v0, 0x40
    ctx->pc = 0x29de3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x29de40: 0x125001a  div         $zero, $t1, $a1
    ctx->pc = 0x29de40u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29de44: 0x8d0b0158  lw          $t3, 0x158($t0)
    ctx->pc = 0x29de44u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 344)));
    // 0x29de48: 0x2812  mflo        $a1
    ctx->pc = 0x29de48u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x29de4c: 0x28a30001  slti        $v1, $a1, 0x1
    ctx->pc = 0x29de4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x29de50: 0xa3300a  movz        $a2, $a1, $v1
    ctx->pc = 0x29de50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x29de54: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x29de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x29de58: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x29de58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x29de5c: 0x8d020150  lw          $v0, 0x150($t0)
    ctx->pc = 0x29de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 336)));
    // 0x29de60: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x29de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29de64: 0x122182a  slt         $v1, $t1, $v0
    ctx->pc = 0x29de64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29de68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DE68u;
    {
        const bool branch_taken_0x29de68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE68u;
        // 0x29de6c: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de68) {
            ctx->pc = 0x29DE78u;
            goto label_29de78;
        }
    }
    ctx->pc = 0x29DE70u;
    // 0x29de70: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29de70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de74: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x29de74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29de78:
    // 0x29de78: 0x2922000a  slti        $v0, $t1, 0xA
    ctx->pc = 0x29de78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29de7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DE7Cu;
    {
        const bool branch_taken_0x29de7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE7Cu;
        // 0x29de80: 0x29220064  slti        $v0, $t1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de7c) {
            ctx->pc = 0x29DE98u;
            goto label_29de98;
        }
    }
    ctx->pc = 0x29DE84u;
    // 0x29de84: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x29de84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x29de88: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29de8c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29de8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29de90: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29de90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29de94: 0x29220064  slti        $v0, $t1, 0x64
    ctx->pc = 0x29de94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)100) ? 1 : 0);
label_29de98:
    // 0x29de98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DE98u;
    {
        const bool branch_taken_0x29de98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE98u;
        // 0x29de9c: 0x292203e8  slti        $v0, $t1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de98) {
            ctx->pc = 0x29DEB4u;
            goto label_29deb4;
        }
    }
    ctx->pc = 0x29DEA0u;
    // 0x29dea0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x29dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29dea4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29dea8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29deac: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29deacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29deb0: 0x292203e8  slti        $v0, $t1, 0x3E8
    ctx->pc = 0x29deb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)1000) ? 1 : 0);
label_29deb4:
    // 0x29deb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DEB4u;
    {
        const bool branch_taken_0x29deb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEB4u;
        // 0x29deb8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29deb4) {
            ctx->pc = 0x29DECCu;
            goto label_29decc;
        }
    }
    ctx->pc = 0x29DEBCu;
    // 0x29debc: 0x8d030150  lw          $v1, 0x150($t0)
    ctx->pc = 0x29debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 336)));
    // 0x29dec0: 0x240903e7  addiu       $t1, $zero, 0x3E7
    ctx->pc = 0x29dec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x29dec4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29dec8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x29dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_29decc:
    // 0x29decc: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x29deccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x29ded0: 0x125001a  div         $zero, $t1, $a1
    ctx->pc = 0x29ded0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29ded4: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x29ded4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ded8: 0x2012  mflo        $a0
    ctx->pc = 0x29ded8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x29dedc: 0x1810  mfhi        $v1
    ctx->pc = 0x29dedcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29dee0: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x29dee0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29dee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29dee8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x29dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29deec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29deecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29def0: 0xad040078  sw          $a0, 0x78($t0)
    ctx->pc = 0x29def0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 4));
    // 0x29def4: 0x8d470004  lw          $a3, 0x4($t2)
    ctx->pc = 0x29def4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x29def8: 0x1812  mflo        $v1
    ctx->pc = 0x29def8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x29defc: 0x3010  mfhi        $a2
    ctx->pc = 0x29defcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x29df00: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x29df00u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29df04: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x29df04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29df08: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x29df08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x29df0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x29df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29df10: 0xace30078  sw          $v1, 0x78($a3)
    ctx->pc = 0x29df10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 3));
    // 0x29df14: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x29df14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29df18: 0x2010  mfhi        $a0
    ctx->pc = 0x29df18u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x29df1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29df20: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x29df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x29df24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29df24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29df28: 0x3e00008  jr          $ra
    ctx->pc = 0x29DF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF28u;
        // 0x29df2c: 0xaca30078  sw          $v1, 0x78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DF30u;
}
