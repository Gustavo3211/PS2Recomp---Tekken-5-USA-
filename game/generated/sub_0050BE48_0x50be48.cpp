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

// Function: sub_0050BE48
// Address: 0x50be48 - 0x50c500
void sub_0050BE48_0x50be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050BE48_0x50be48");
#endif

    switch (ctx->pc) {
        case 0x50bea8u: goto label_50bea8;
        case 0x50beccu: goto label_50becc;
        case 0x50bfc0u: goto label_50bfc0;
        case 0x50bff4u: goto label_50bff4;
        case 0x50c028u: goto label_50c028;
        case 0x50c098u: goto label_50c098;
        case 0x50c160u: goto label_50c160;
        case 0x50c400u: goto label_50c400;
        default: break;
    }

    ctx->pc = 0x50be48u;

    // 0x50be48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50be48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50be4c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50be50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50be50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50be54: 0x2453f080  addiu       $s3, $v0, -0xF80
    ctx->pc = 0x50be54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50be58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50be5c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x50be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50be60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50be60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50be64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50be64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50be68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50be6c: 0x8e634de8  lw          $v1, 0x4DE8($s3)
    ctx->pc = 0x50be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x903E68u));
    // 0x50be70: 0x1064004b  beq         $v1, $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x50BE70u;
    {
        const bool branch_taken_0x50be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x50BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50BE70u;
        // 0x50be74: 0x3c11008f  lui         $s1, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50be70) {
            ctx->pc = 0x50BFA0u;
            goto label_50bfa0;
        }
    }
    ctx->pc = 0x50BE78u;
    // 0x50be78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50be78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50be7c: 0x2631c610  addiu       $s1, $s1, -0x39F0
    ctx->pc = 0x50be7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952464));
    // 0x50be80: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x50be80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x50be84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50be84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50be88: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x50be88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x50be8c: 0x2610c60c  addiu       $s0, $s0, -0x39F4
    ctx->pc = 0x50be8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952460));
    // 0x50be90: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x50be90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x50be94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50be94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50be98: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x50be98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC60Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC60Cu, _value); } while (0);
    // 0x50be9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50bea0: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x50BEA0u;
    SET_GPR_U32(ctx, 31, 0x50BEA8u);
    ctx->pc = 0x50BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50BEA0u;
    // 0x50bea4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x50BEA0u, 0x50BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50BEA8u;
label_50bea8:
    // 0x50bea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50beac: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x50beacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x50beb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50beb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50beb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50beb8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x50beb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x50bebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50bebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50bec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50bec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50bec4: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x50BEC4u;
    SET_GPR_U32(ctx, 31, 0x50BECCu);
    ctx->pc = 0x50BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50BEC4u;
    // 0x50bec8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x50BEC4u, 0x50BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50BECCu;
label_50becc:
    // 0x50becc: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x50beccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x50bed0: 0x24c6c614  addiu       $a2, $a2, -0x39EC
    ctx->pc = 0x50bed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952468));
    // 0x50bed4: 0x86634cc0  lh          $v1, 0x4CC0($s3)
    ctx->pc = 0x50bed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 19648)));
    // 0x50bed8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x50bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC614u));
    // 0x50bedc: 0x266a4e06  addiu       $t2, $s3, 0x4E06
    ctx->pc = 0x50bedcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 19974));
    // 0x50bee0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x50bee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x50bee4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x50bee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50bee8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50bee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50beec: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x50beecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50bef0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50bef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50bef4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x50bef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50bef8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x50bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x50befc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50befcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50bf00: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x50bf00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50bf04: 0x3505ffff  ori         $a1, $t0, 0xFFFF
    ctx->pc = 0x50bf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x50bf08: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x50bf08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50bf0c: 0x1124024  and         $t0, $t0, $s2
    ctx->pc = 0x50bf0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 18));
    // 0x50bf10: 0x85440000  lh          $a0, 0x0($t2)
    ctx->pc = 0x50bf10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50bf14: 0x84402  srl         $t0, $t0, 16
    ctx->pc = 0x50bf14u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x50bf18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x50bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x50bf1c: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x50bf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x50bf20: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x50bf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x50bf24: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x50bf24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x50bf28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50bf2c: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x50bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x50bf30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x50bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x50bf34: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x50bf34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50bf38: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x50bf38u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50bf3c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x50bf3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x50bf40: 0xa668008e  sh          $t0, 0x8E($s3)
    ctx->pc = 0x50bf40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 8));
    // 0x50bf44: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x50bf44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x50bf48: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x50bf48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x50bf4c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x50bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x50bf50: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50bf50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50bf54: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50bf54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50bf58: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x50bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50bf5c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x50bf5cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50bf60: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50bf60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50bf64: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x50bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x50bf68: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50bf6c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x50bf6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50bf70: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x50bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x50bf74: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50bf74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50bf78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x50BF78u;
    {
        const bool branch_taken_0x50bf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50BF78u;
        // 0x50bf7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50bf78) {
            ctx->pc = 0x50BFA0u;
            goto label_50bfa0;
        }
    }
    ctx->pc = 0x50BF80u;
    // 0x50bf80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50bf80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50bf84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50bf84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50bf88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50bf88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50bf8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50bf8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50bf90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50bf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50bf94: 0x8142d02  j           func_50B408
    ctx->pc = 0x50BF94u;
    ctx->pc = 0x50BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50BF94u;
    // 0x50bf98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B408u;
    sub_0050B408_0x50b408(rdram, ctx, runtime); return;
    ctx->pc = 0x50BF9Cu;
    // 0x50bf9c: 0x0  nop
    ctx->pc = 0x50bf9cu;
    // NOP
label_50bfa0:
    // 0x50bfa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50bfa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50bfa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50bfa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50bfa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50bfa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50bfac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50bfacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50bfb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50bfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50bfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x50BFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50BFB4u;
        // 0x50bfb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50BFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50BFBCu;
    // 0x50bfbc: 0x0  nop
    ctx->pc = 0x50bfbcu;
    // NOP
label_50bfc0:
    // 0x50bfc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x50bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x50bfc4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x50bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x50bfc8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x50bfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x50bfcc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x50bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x50bfd0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x50bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x50bfd4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x50bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x50bfd8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x50bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x50bfdc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x50bfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x50bfe0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x50bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x50bfe4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x50bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x50bfe8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x50bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x50bfec: 0xc124620  jal         func_491880
    ctx->pc = 0x50BFECu;
    SET_GPR_U32(ctx, 31, 0x50BFF4u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50BFECu, 0x50BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50BFF4u;
label_50bff4:
    // 0x50bff4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50bff8: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x50bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x50bffc: 0x2483c5fc  addiu       $v1, $a0, -0x3A04
    ctx->pc = 0x50bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952444));
    // 0x50c000: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x50c000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50c004: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x50c004u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x50c008: 0x24484c00  addiu       $t0, $v0, 0x4C00
    ctx->pc = 0x50c008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19456));
    // 0x50c00c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x50c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x50c010: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x50c010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC5FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5FCu, _value); } while (0);
    // 0x50c014: 0xad24c610  sw          $a0, -0x39F0($t1)
    ctx->pc = 0x50c014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC610u, _value); } while (0);
    // 0x50c018: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x50c018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50c01c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x50c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x50c020: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x50c020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c024: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x50c024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50c028:
    // 0x50c028: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x50c028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50c02c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x50c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50c030: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x50c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x50c034: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x50c034u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x50c038: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x50c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50c03c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50c040: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x50c040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50c044: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50c044u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50c048: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x50c048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x50c04c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x50c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x50c050: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x50c050u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x50c054: 0x1467fff4  bne         $v1, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x50C054u;
    {
        const bool branch_taken_0x50c054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x50C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C054u;
        // 0x50c058: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c054) {
            ctx->pc = 0x50C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50c028;
        }
    }
    ctx->pc = 0x50C05Cu;
    // 0x50c05c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50c060: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50c060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50c064: 0x2444c60c  addiu       $a0, $v0, -0x39F4
    ctx->pc = 0x50c064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952460));
    // 0x50c068: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50c06c: 0x2443c5fc  addiu       $v1, $v0, -0x3A04
    ctx->pc = 0x50c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952444));
    // 0x50c070: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50c070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC60Cu));
    // 0x50c074: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x50c074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c078: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x50c078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x8EC5FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5FCu, _value); } while (0);
    // 0x50c07c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x50c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x50c080: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x50c080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50c084: 0x240307ff  addiu       $v1, $zero, 0x7FF
    ctx->pc = 0x50c084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x50c088: 0xad20c610  sw          $zero, -0x39F0($t1)
    ctx->pc = 0x50c088u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952464), GPR_U32(ctx, 0));
    // 0x50c08c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x50c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x50c090: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x50c090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50c094: 0x0  nop
    ctx->pc = 0x50c094u;
    // NOP
label_50c098:
    // 0x50c098: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x50c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50c09c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x50c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50c0a0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x50c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x50c0a4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x50c0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50c0a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x50c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50c0ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50c0b0: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x50c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50c0b4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50c0b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50c0b8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x50c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x50c0bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x50c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x50c0c0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x50c0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50c0c4: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x50C0C4u;
    {
        const bool branch_taken_0x50c0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x50C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C0C4u;
        // 0x50c0c8: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c0c4) {
            ctx->pc = 0x50C098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50c098;
        }
    }
    ctx->pc = 0x50C0CCu;
    // 0x50c0cc: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50c0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50c0d0: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50c0d4: 0x24a5c60c  addiu       $a1, $a1, -0x39F4
    ctx->pc = 0x50c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952460));
    // 0x50c0d8: 0x2466f080  addiu       $a2, $v1, -0xF80
    ctx->pc = 0x50c0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50c0dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x50c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC60Cu));
    // 0x50c0e0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x50c0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x50c0e4: 0x8cc54de8  lw          $a1, 0x4DE8($a2)
    ctx->pc = 0x50c0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x903E68u));
    // 0x50c0e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x50c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50c0ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50c0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50c0f0: 0x482024  and         $a0, $v0, $t0
    ctx->pc = 0x50c0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x50c0f4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50c0f8: 0x2442c60c  addiu       $v0, $v0, -0x39F4
    ctx->pc = 0x50c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952460));
    // 0x50c0fc: 0x10a300f4  beq         $a1, $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x50C0FCu;
    {
        const bool branch_taken_0x50c0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x50C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C0FCu;
        // 0x50c100: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c0fc) {
            ctx->pc = 0x50C4D0u;
            goto label_50c4d0;
        }
    }
    ctx->pc = 0x50C104u;
    // 0x50c104: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50c104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50c108: 0x24c200c0  addiu       $v0, $a2, 0xC0
    ctx->pc = 0x50c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x50c10c: 0x2466c5fc  addiu       $a2, $v1, -0x3A04
    ctx->pc = 0x50c10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952444));
    // 0x50c110: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50c110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50c114: 0x2467c604  addiu       $a3, $v1, -0x39FC
    ctx->pc = 0x50c114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952452));
    // 0x50c118: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x50c118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50c11c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50c11cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC604u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC604u, _value); } while (0);
    // 0x50c120: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x50c120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x50c124: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x50c124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC5FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5FCu, _value); } while (0);
    // 0x50c128: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x50c128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x50c12c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50c12cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50c130: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x50c130u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC5FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5FCu, _value); } while (0);
    // 0x50c134: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50c134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50c138: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50c138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50c13c: 0x2484c60c  addiu       $a0, $a0, -0x39F4
    ctx->pc = 0x50c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952460));
    // 0x50c140: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c144: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x50c144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x50c148: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50c148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50c14c: 0x4400080  bltz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x50C14Cu;
    {
        const bool branch_taken_0x50c14c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C14Cu;
        // 0x50c150: 0x3c05008f  lui         $a1, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c14c) {
            ctx->pc = 0x50C350u;
            goto label_50c350;
        }
    }
    ctx->pc = 0x50C154u;
    // 0x50c154: 0xe0c82d  daddu       $t9, $a3, $zero
    ctx->pc = 0x50c154u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c158: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x50c158u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c15c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x50c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_50c160:
    // 0x50c160: 0x8f240000  lw          $a0, 0x0($t9)
    ctx->pc = 0x50c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x50c164: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x50c164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50c168: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x50c168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50c16c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x50c16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50c170: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x50c170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50c174: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50c174u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c178: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x50c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50c17c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x50c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x50c180: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x50c180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x50c184: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x50c184u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x50c188: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x50c188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50c18c: 0x24880004  addiu       $t0, $a0, 0x4
    ctx->pc = 0x50c18cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x50c190: 0x24690004  addiu       $t1, $v1, 0x4
    ctx->pc = 0x50c190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x50c194: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x50c194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50c198: 0x246a0006  addiu       $t2, $v1, 0x6
    ctx->pc = 0x50c198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x50c19c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x50c19cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x50c1a0: 0x248b0006  addiu       $t3, $a0, 0x6
    ctx->pc = 0x50c1a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x50c1a4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50c1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c1a8: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x50c1a8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x50c1ac: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x50c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x50c1b0: 0x246c0008  addiu       $t4, $v1, 0x8
    ctx->pc = 0x50c1b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x50c1b4: 0xaf250000  sw          $a1, 0x0($t9)
    ctx->pc = 0x50c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 5));
    // 0x50c1b8: 0x248d0008  addiu       $t5, $a0, 0x8
    ctx->pc = 0x50c1b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x50c1bc: 0x2470000a  addiu       $s0, $v1, 0xA
    ctx->pc = 0x50c1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x50c1c0: 0x248e000a  addiu       $t6, $a0, 0xA
    ctx->pc = 0x50c1c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x50c1c4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x50c1c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50c1c8: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x50c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x50c1cc: 0x2471000c  addiu       $s1, $v1, 0xC
    ctx->pc = 0x50c1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x50c1d0: 0x248f000c  addiu       $t7, $a0, 0xC
    ctx->pc = 0x50c1d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x50c1d4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x50c1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c1d8: 0x24850014  addiu       $a1, $a0, 0x14
    ctx->pc = 0x50c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x50c1dc: 0x24820016  addiu       $v0, $a0, 0x16
    ctx->pc = 0x50c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 22));
    // 0x50c1e0: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x50c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
    // 0x50c1e4: 0xaf280000  sw          $t0, 0x0($t9)
    ctx->pc = 0x50c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 8));
    // 0x50c1e8: 0x2472000e  addiu       $s2, $v1, 0xE
    ctx->pc = 0x50c1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x50c1ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x50c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x50c1f0: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x50c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x50c1f4: 0x2493000e  addiu       $s3, $a0, 0xE
    ctx->pc = 0x50c1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x50c1f8: 0x24740010  addiu       $s4, $v1, 0x10
    ctx->pc = 0x50c1f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x50c1fc: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x50c1fcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50c200: 0x24760012  addiu       $s6, $v1, 0x12
    ctx->pc = 0x50c200u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x50c204: 0x24950012  addiu       $s5, $a0, 0x12
    ctx->pc = 0x50c204u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 18));
    // 0x50c208: 0x24770014  addiu       $s7, $v1, 0x14
    ctx->pc = 0x50c208u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x50c20c: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x50c20cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x50c210: 0x24690018  addiu       $t1, $v1, 0x18
    ctx->pc = 0x50c210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x50c214: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x50c214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x50c218: 0x2462001a  addiu       $v0, $v1, 0x1A
    ctx->pc = 0x50c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
    // 0x50c21c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x50c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x50c220: 0x2462001c  addiu       $v0, $v1, 0x1C
    ctx->pc = 0x50c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x50c224: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x50c224u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x50c228: 0x24780016  addiu       $t8, $v1, 0x16
    ctx->pc = 0x50c228u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x50c22c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x50c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x50c230: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x50c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x50c234: 0xaf2b0000  sw          $t3, 0x0($t9)
    ctx->pc = 0x50c234u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 11));
    // 0x50c238: 0x2488001a  addiu       $t0, $a0, 0x1A
    ctx->pc = 0x50c238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 26));
    // 0x50c23c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x50c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x50c240: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x50c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x50c244: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x50c244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x50c248: 0x2484001e  addiu       $a0, $a0, 0x1E
    ctx->pc = 0x50c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
    // 0x50c24c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x50c24cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50c250: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x50c250u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c254: 0xafcc0000  sw          $t4, 0x0($fp)
    ctx->pc = 0x50c254u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 12));
    // 0x50c258: 0xaf2d0000  sw          $t5, 0x0($t9)
    ctx->pc = 0x50c258u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 13));
    // 0x50c25c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x50c25cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50c260: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x50c260u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c264: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x50c264u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    // 0x50c268: 0xaf2e0000  sw          $t6, 0x0($t9)
    ctx->pc = 0x50c268u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 14));
    // 0x50c26c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c26cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c270: 0xa5c20000  sh          $v0, 0x0($t6)
    ctx->pc = 0x50c270u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c274: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x50c274u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x50c278: 0xaf2f0000  sw          $t7, 0x0($t9)
    ctx->pc = 0x50c278u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 15));
    // 0x50c27c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x50c27cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c280: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x50c280u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c284: 0xafd20000  sw          $s2, 0x0($fp)
    ctx->pc = 0x50c284u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
    // 0x50c288: 0xaf330000  sw          $s3, 0x0($t9)
    ctx->pc = 0x50c288u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 19));
    // 0x50c28c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x50c28cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50c290: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x50c290u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c294: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x50c294u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
    // 0x50c298: 0xaf260000  sw          $a2, 0x0($t9)
    ctx->pc = 0x50c298u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 6));
    // 0x50c29c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x50c29cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50c2a0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x50c2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c2a4: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x50c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
    // 0x50c2a8: 0xaf350000  sw          $s5, 0x0($t9)
    ctx->pc = 0x50c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 21));
    // 0x50c2ac: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x50c2acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50c2b0: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x50c2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c2b4: 0xafd70000  sw          $s7, 0x0($fp)
    ctx->pc = 0x50c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
    // 0x50c2b8: 0xaf250000  sw          $a1, 0x0($t9)
    ctx->pc = 0x50c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 5));
    // 0x50c2bc: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x50c2bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50c2c0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x50c2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c2c4: 0xafd80000  sw          $t8, 0x0($fp)
    ctx->pc = 0x50c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 24));
    // 0x50c2c8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x50c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50c2cc: 0xaf250000  sw          $a1, 0x0($t9)
    ctx->pc = 0x50c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 5));
    // 0x50c2d0: 0x97020000  lhu         $v0, 0x0($t8)
    ctx->pc = 0x50c2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x50c2d4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x50c2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c2d8: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x50c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
    // 0x50c2dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x50c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50c2e0: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x50c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x50c2e4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x50c2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50c2e8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x50c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50c2ec: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x50c2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c2f0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x50c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50c2f4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x50c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x50c2f8: 0xaf280000  sw          $t0, 0x0($t9)
    ctx->pc = 0x50c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 8));
    // 0x50c2fc: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x50c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50c300: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50c300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50c304: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x50c304u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c308: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x50c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x50c30c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x50c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x50c310: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x50c310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50c314: 0xaf250000  sw          $a1, 0x0($t9)
    ctx->pc = 0x50c314u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 5));
    // 0x50c318: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x50c318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x50c31c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50c31cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50c320: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x50c320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50c324: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x50c324u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c328: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x50c328u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x50c32c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50c330: 0x2463c60c  addiu       $v1, $v1, -0x39F4
    ctx->pc = 0x50c330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952460));
    // 0x50c334: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x50c334u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EC60Cu));
    // 0x50c338: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x50c338u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x50c33c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x50c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50c340: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x50c340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x50c344: 0x5040ff86  beql        $v0, $zero, . + 4 + (-0x7A << 2)
    ctx->pc = 0x50C344u;
    {
        const bool branch_taken_0x50c344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50c344) {
            ctx->pc = 0x50C348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50C344u;
            // 0x50c348: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50C160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50c160;
        }
    }
    ctx->pc = 0x50C34Cu;
    // 0x50c34c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
label_50c350:
    // 0x50c350: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50c350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50c354: 0x24a8c60c  addiu       $t0, $a1, -0x39F4
    ctx->pc = 0x50c354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952460));
    // 0x50c358: 0x2449c604  addiu       $t1, $v0, -0x39FC
    ctx->pc = 0x50c358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952452));
    // 0x50c35c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50c360: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x50c360u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x50c364: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x50c364u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC604u));
    // 0x50c368: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50c368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50c36c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c370: 0x2446f080  addiu       $a2, $v0, -0xF80
    ctx->pc = 0x50c370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50c374: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x50c374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x50c378: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x50c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x50c37c: 0xacc24e10  sw          $v0, 0x4E10($a2)
    ctx->pc = 0x50c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 19984), GPR_U32(ctx, 2));
    // 0x50c380: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50c380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50c384: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x50c384u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x50c388: 0x248ac5fc  addiu       $t2, $a0, -0x3A04
    ctx->pc = 0x50c388u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952444));
    // 0x50c38c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x50c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x50c390: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x50c390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c394: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50c394u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50c398: 0xacc54df8  sw          $a1, 0x4DF8($a2)
    ctx->pc = 0x50c398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 19960), GPR_U32(ctx, 5));
    // 0x50c39c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x50c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC5FCu));
    // 0x50c3a0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x50c3a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50c3a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x50c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50c3a8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x50c3a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC5FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5FCu, _value); } while (0);
    // 0x50c3ac: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x50c3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x50c3b0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50c3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50c3b4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x50c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x50c3b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50c3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50c3bc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x50c3bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50c3c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50c3c4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50c3c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50c3c8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50c3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50c3cc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x50c3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50c3d0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x50c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x50c3d4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50c3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50c3d8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x50c3d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50c3dc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x50c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x50c3e0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50c3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50c3e4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x50c3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50c3e8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x50c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x50c3ec: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50c3ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50c3f0: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x50C3F0u;
    {
        const bool branch_taken_0x50c3f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C3F0u;
        // 0x50c3f4: 0x3c05008f  lui         $a1, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c3f0) {
            ctx->pc = 0x50C460u;
            goto label_50c460;
        }
    }
    ctx->pc = 0x50C3F8u;
    // 0x50c3f8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x50c3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c3fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x50c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_50c400:
    // 0x50c400: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x50c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50c404: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x50c404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x50c408: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x50c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50c40c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x50c40cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50c410: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x50c410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50c414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50c414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50c418: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x50c418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50c41c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50c41cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50c420: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x50c420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x50c424: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x50c424u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x50c428: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x50c428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50c42c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x50c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x50c430: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x50c430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50c434: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x50c434u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x50c438: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50c438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50c43c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x50c43cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c440: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x50c440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x50c444: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50c444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50c448: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x50c448u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x50c44c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x50c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50c450: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x50c450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x50c454: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x50C454u;
    {
        const bool branch_taken_0x50c454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C454u;
        // 0x50c458: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c454) {
            ctx->pc = 0x50C400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50c400;
        }
    }
    ctx->pc = 0x50C45Cu;
    // 0x50c45c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
label_50c460:
    // 0x50c460: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50c460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x50c464: 0x24a7c60c  addiu       $a3, $a1, -0x39F4
    ctx->pc = 0x50c464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952460));
    // 0x50c468: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50c468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50c46c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50c470: 0x2483f080  addiu       $v1, $a0, -0xF80
    ctx->pc = 0x50c470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x50c474: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x50c474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0x50c478: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x50c478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50c47c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50c480: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x50c480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50c484: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x50c484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50c488: 0x246600c0  addiu       $a2, $v1, 0xC0
    ctx->pc = 0x50c488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x50c48c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x50c48cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50c490: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x50c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x50c494: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x50c494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50c498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x50c498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c49c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x50c49cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50c4a0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x50c4a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50c4a4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x50c4a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x50c4a8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x50c4a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50c4ac: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x50c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x50c4b0: 0xac664e08  sw          $a2, 0x4E08($v1)
    ctx->pc = 0x50c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19976), GPR_U32(ctx, 6));
    // 0x50c4b4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x50c4b8: 0xa4604cc0  sh          $zero, 0x4CC0($v1)
    ctx->pc = 0x50c4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 19648), (uint16_t)GPR_U32(ctx, 0));
    // 0x50c4bc: 0xa4604e0c  sh          $zero, 0x4E0C($v1)
    ctx->pc = 0x50c4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 19980), (uint16_t)GPR_U32(ctx, 0));
    // 0x50c4c0: 0xa4604e06  sh          $zero, 0x4E06($v1)
    ctx->pc = 0x50c4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 19974), (uint16_t)GPR_U32(ctx, 0));
    // 0x50c4c4: 0x8142d02  j           func_50B408
    ctx->pc = 0x50C4C4u;
    ctx->pc = 0x50C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50C4C4u;
    // 0x50c4c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B408u;
    sub_0050B408_0x50b408(rdram, ctx, runtime); return;
    ctx->pc = 0x50C4CCu;
    // 0x50c4cc: 0x0  nop
    ctx->pc = 0x50c4ccu;
    // NOP
label_50c4d0:
    // 0x50c4d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x50c4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50c4d4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x50c4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50c4d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x50c4d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50c4dc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x50c4dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50c4e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x50c4e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50c4e4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x50c4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50c4e8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x50c4e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50c4ec: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x50c4ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x50c4f0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x50c4f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50c4f4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x50c4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x50c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x50C4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C4F8u;
        // 0x50c4fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50C4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50C500u;
}
