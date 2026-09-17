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

// Function: sub_00343040
// Address: 0x343040 - 0x343160
void sub_00343040_0x343040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343040_0x343040");
#endif

    switch (ctx->pc) {
        case 0x3430a4u: goto label_3430a4;
        case 0x3430ccu: goto label_3430cc;
        case 0x3430e0u: goto label_3430e0;
        default: break;
    }

    ctx->pc = 0x343040u;

    // 0x343040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x343040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x343044: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x343044u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x343048: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x343048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x34304c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x34304cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x343050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343054: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x343054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343058: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x343058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34305c: 0x24f40400  addiu       $s4, $a3, 0x400
    ctx->pc = 0x34305cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x343060: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x343060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x343064: 0x2442d5e0  addiu       $v0, $v0, -0x2A20
    ctx->pc = 0x343064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956512));
    // 0x343068: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x343068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34306c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x343070: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x343070u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x343074: 0x101a43  sra         $v1, $s0, 9
    ctx->pc = 0x343074u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 9));
    // 0x343078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34307c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34307cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343080: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x343080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x343084: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x343084u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x343088: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x343088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34308c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34308cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343090: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x343090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x343094: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x343094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    // 0x343098: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x343098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x34309c: 0xc0d0c78  jal         func_3431E0
    ctx->pc = 0x34309Cu;
    SET_GPR_U32(ctx, 31, 0x3430A4u);
    ctx->pc = 0x3430A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34309Cu;
    // 0x3430a0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3431E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3431E0u, 0x34309Cu, 0x3430A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430A4u;
label_3430a4:
    // 0x3430a4: 0x101c42  srl         $v1, $s0, 17
    ctx->pc = 0x3430a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 17));
    // 0x3430a8: 0x30630078  andi        $v1, $v1, 0x78
    ctx->pc = 0x3430a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)120);
    // 0x3430ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3430acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3430b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3430b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3430b4: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x3430b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x3430b8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3430b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3430bc: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x3430bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x3430c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3430c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430c4: 0xc0d0c58  jal         func_343160
    ctx->pc = 0x3430C4u;
    SET_GPR_U32(ctx, 31, 0x3430CCu);
    ctx->pc = 0x3430C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3430C4u;
    // 0x3430c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343160u, 0x3430C4u, 0x3430CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430CCu;
label_3430cc:
    // 0x3430cc: 0xfe720018  sd          $s2, 0x18($s3)
    ctx->pc = 0x3430ccu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 18));
    // 0x3430d0: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x3430d0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x3430d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3430d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430d8: 0xc0d0ca8  jal         func_3432A0
    ctx->pc = 0x3430D8u;
    SET_GPR_U32(ctx, 31, 0x3430E0u);
    ctx->pc = 0x3430DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3430D8u;
    // 0x3430dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3432A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3432A0u, 0x3430D8u, 0x3430E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430E0u;
label_3430e0:
    // 0x3430e0: 0x26680030  addiu       $t0, $s3, 0x30
    ctx->pc = 0x3430e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3430e4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3430e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3430e8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3430e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3430ec: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3430ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3430f0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x3430f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x3430f4: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x3430f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x3430f8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3430f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3430fc: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x3430fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x343100: 0x2052824  and         $a1, $s0, $a1
    ctx->pc = 0x343100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x343104: 0x2033824  and         $a3, $s0, $v1
    ctx->pc = 0x343104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x343108: 0x2068024  and         $s0, $s0, $a2
    ctx->pc = 0x343108u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
    // 0x34310c: 0x3483ff00  ori         $v1, $a0, 0xFF00
    ctx->pc = 0x34310cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x343110: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x343110u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x343114: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x343114u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x343118: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343118u;
    {
        const bool branch_taken_0x343118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343118u;
        // 0x34311c: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343118) {
            ctx->pc = 0x343128u;
            goto label_343128;
        }
    }
    ctx->pc = 0x343120u;
    // 0x343120: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x343120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x343124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x343124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_343128:
    // 0x343128: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x343128u;
    {
        const bool branch_taken_0x343128 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x34312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343128u;
        // 0x34312c: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343128) {
            ctx->pc = 0x343134u;
            goto label_343134;
        }
    }
    ctx->pc = 0x343130u;
    // 0x343130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x343130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_343134:
    // 0x343134: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x343134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x343138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34313c: 0xae880014  sw          $t0, 0x14($s4)
    ctx->pc = 0x34313cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 8));
    // 0x343140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343144: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x343144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343148: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x343148u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34314c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34314cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343150: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x343150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x343154: 0x3e00008  jr          $ra
    ctx->pc = 0x343154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343154u;
        // 0x343158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34315Cu;
    // 0x34315c: 0x0  nop
    ctx->pc = 0x34315cu;
    // NOP
    ctx->pc = 0x343160u;
}
