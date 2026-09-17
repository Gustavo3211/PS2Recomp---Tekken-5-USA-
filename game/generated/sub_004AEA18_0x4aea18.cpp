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

// Function: sub_004AEA18
// Address: 0x4aea18 - 0x4aec40
void sub_004AEA18_0x4aea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEA18_0x4aea18");
#endif

    switch (ctx->pc) {
        case 0x4aea7cu: goto label_4aea7c;
        case 0x4aea90u: goto label_4aea90;
        case 0x4aea94u: goto label_4aea94;
        default: break;
    }

    ctx->pc = 0x4aea18u;

    // 0x4aea18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aea1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aea20: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x4aea20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x4aea24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aea28: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4aea28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4aea2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aea30: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4aea30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4aea34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aea38: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4aea38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4aea3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4aea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4aea40: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4aea40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4aea44: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4aea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4aea48: 0x2673d680  addiu       $s3, $s3, -0x2980
    ctx->pc = 0x4aea48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4aea4c: 0x26632300  addiu       $v1, $s3, 0x2300
    ctx->pc = 0x4aea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8960));
    // 0x4aea50: 0x26100d18  addiu       $s0, $s0, 0xD18
    ctx->pc = 0x4aea50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3352));
    // 0x4aea54: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4aea54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72F980u));
    // 0x4aea58: 0x26520d1c  addiu       $s2, $s2, 0xD1C
    ctx->pc = 0x4aea58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3356));
    // 0x4aea5c: 0x26310d20  addiu       $s1, $s1, 0xD20
    ctx->pc = 0x4aea5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3360));
    // 0x4aea60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4aea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4aea64: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4aea64u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F980u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F980u, _value); } while (0);
    // 0x4aea68: 0xae800d10  sw          $zero, 0xD10($s4)
    ctx->pc = 0x4aea68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D10u, _value); } while (0);
    // 0x4aea6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4aea6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D18u, _value); } while (0);
    // 0x4aea70: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4aea70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D1Cu, _value); } while (0);
    // 0x4aea74: 0xc1232e2  jal         func_48CB88
    ctx->pc = 0x4AEA74u;
    SET_GPR_U32(ctx, 31, 0x4AEA7Cu);
    ctx->pc = 0x4AEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEA74u;
    // 0x4aea78: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CB88u, 0x4AEA74u, 0x4AEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEA7Cu;
label_4aea7c:
    // 0x4aea7c: 0x26692316  addiu       $t1, $s3, 0x2316
    ctx->pc = 0x4aea7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 8982));
    // 0x4aea80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4aea80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aea84: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4aea84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4aea88: 0xac470d14  sw          $a3, 0xD14($v0)
    ctx->pc = 0x4aea88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0D14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D14u, _value); } while (0);
    // 0x4aea8c: 0x26732426  addiu       $s3, $s3, 0x2426
    ctx->pc = 0x4aea8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9254));
label_4aea90:
    // 0x4aea90: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x4aea90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4aea94:
    // 0x4aea94: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x4aea94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4aea98: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4AEA98u;
    {
        const bool branch_taken_0x4aea98 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4AEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA98u;
        // 0x4aea9c: 0x26850d10  addiu       $a1, $s4, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea98) {
            ctx->pc = 0x4AEAD0u;
            goto label_4aead0;
        }
    }
    ctx->pc = 0x4AEAA0u;
    // 0x4aeaa0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4aeaa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aeaa4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4aeaa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aeaa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aeaa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aeaac: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4aeaacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4aeab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aeab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aeab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aeab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aeab8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aeab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aeabc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4aeabcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aeac0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4aeac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4aeac4: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4aeac4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aeac8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAC8u;
        // 0x4aeacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEAD0u;
label_4aead0:
    // 0x4aead0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4aead0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4aead4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4aead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aead8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4aead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4aeadc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aeadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aeae0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4aeae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4aeae4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4aeae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4aeae8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4aeae8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aeaec: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x4aeaecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4aeaf0: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4AEAF0u;
    {
        const bool branch_taken_0x4aeaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aeaf0) {
            ctx->pc = 0x4AEAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEAF0u;
            // 0x4aeaf4: 0x8ce70004  lw          $a3, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aea94;
        }
    }
    ctx->pc = 0x4AEAF8u;
    // 0x4aeaf8: 0x2c8200d0  sltiu       $v0, $a0, 0xD0
    ctx->pc = 0x4aeaf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)208) ? 1 : 0);
    // 0x4aeafc: 0x5040ffe5  beql        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4AEAFCu;
    {
        const bool branch_taken_0x4aeafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aeafc) {
            ctx->pc = 0x4AEB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEAFCu;
            // 0x4aeb00: 0x8ce70004  lw          $a3, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aea94;
        }
    }
    ctx->pc = 0x4AEB04u;
    // 0x4aeb04: 0x24e401b4  addiu       $a0, $a3, 0x1B4
    ctx->pc = 0x4aeb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 436));
    // 0x4aeb08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aeb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aeb0c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x4aeb0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x4aeb10: 0x24e601c2  addiu       $a2, $a3, 0x1C2
    ctx->pc = 0x4aeb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 450));
    // 0x4aeb14: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4aeb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4aeb18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aeb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aeb1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4aeb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4aeb20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aeb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aeb24: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4aeb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aeb28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4aeb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4aeb2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4aeb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4aeb30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4aeb30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4aeb34: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4aeb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4aeb38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aeb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aeb3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4aeb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4aeb40: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4aeb40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aeb44: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4aeb44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aeb48: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4aeb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4aeb4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4aeb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4aeb50: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4aeb50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aeb54: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4aeb54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aeb58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AEB58u;
    {
        const bool branch_taken_0x4aeb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB58u;
        // 0x4aeb5c: 0x94c30000  lhu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeb58) {
            ctx->pc = 0x4AEB68u;
            goto label_4aeb68;
        }
    }
    ctx->pc = 0x4AEB60u;
    // 0x4aeb60: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4aeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4aeb64: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4aeb64u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_4aeb68:
    // 0x4aeb68: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4aeb68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aeb6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4aeb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aeb70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4aeb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aeb74: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4aeb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4aeb78: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4aeb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4aeb7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aeb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aeb80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aeb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aeb84: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4aeb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4aeb88: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4aeb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aeb8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4aeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4aeb90: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4aeb90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4aeb94: 0x5064000c  beql        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AEB94u;
    {
        const bool branch_taken_0x4aeb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4aeb94) {
            ctx->pc = 0x4AEB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEB94u;
            // 0x4aeb98: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEBC8u;
            goto label_4aebc8;
        }
    }
    ctx->pc = 0x4AEB9Cu;
    // 0x4aeb9c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4aeb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4aeba0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x4AEBA0u;
    {
        const bool branch_taken_0x4aeba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBA0u;
        // 0x4aeba4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeba0) {
            ctx->pc = 0x4AEA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aea90;
        }
    }
    ctx->pc = 0x4AEBA8u;
    // 0x4aeba8: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AEBA8u;
    {
        const bool branch_taken_0x4aeba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4aeba8) {
            ctx->pc = 0x4AEBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEBA8u;
            // 0x4aebac: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEBE8u;
            goto label_4aebe8;
        }
    }
    ctx->pc = 0x4AEBB0u;
    // 0x4aebb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4aebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4aebb4: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4AEBB4u;
    {
        const bool branch_taken_0x4aebb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4aebb4) {
            ctx->pc = 0x4AEBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEBB4u;
            // 0x4aebb8: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEC08u;
            goto label_4aec08;
        }
    }
    ctx->pc = 0x4AEBBCu;
    // 0x4aebbc: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x4AEBBCu;
    {
        const bool branch_taken_0x4aebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBBCu;
        // 0x4aebc0: 0x8ce70004  lw          $a3, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aebbc) {
            ctx->pc = 0x4AEA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aea94;
        }
    }
    ctx->pc = 0x4AEBC4u;
    // 0x4aebc4: 0x0  nop
    ctx->pc = 0x4aebc4u;
    // NOP
label_4aebc8:
    // 0x4aebc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4aebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aebcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4aebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4aebd0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4aebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4aebd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aebd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aebd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aebdc: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x4AEBDCu;
    {
        const bool branch_taken_0x4aebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBDCu;
        // 0x4aebe0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aebdc) {
            ctx->pc = 0x4AEA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aea90;
        }
    }
    ctx->pc = 0x4AEBE4u;
    // 0x4aebe4: 0x0  nop
    ctx->pc = 0x4aebe4u;
    // NOP
label_4aebe8:
    // 0x4aebe8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4aebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aebec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4aebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4aebf0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4aebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4aebf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aebf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aebf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aebfc: 0x1000ffa4  b           . + 4 + (-0x5C << 2)
    ctx->pc = 0x4AEBFCu;
    {
        const bool branch_taken_0x4aebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBFCu;
        // 0x4aec00: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aebfc) {
            ctx->pc = 0x4AEA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aea90;
        }
    }
    ctx->pc = 0x4AEC04u;
    // 0x4aec04: 0x0  nop
    ctx->pc = 0x4aec04u;
    // NOP
label_4aec08:
    // 0x4aec08: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4aec08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aec0c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4aec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aec10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4aec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4aec14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4aec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aec18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4aec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4aec1c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4aec1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4aec20: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4aec20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4aec24: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4aec24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4aec28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aec28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aec2c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4aec2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4aec30: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4aec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4aec34: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4aec34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4aec38: 0x1000ff95  b           . + 4 + (-0x6B << 2)
    ctx->pc = 0x4AEC38u;
    {
        const bool branch_taken_0x4aec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEC38u;
        // 0x4aec3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aec38) {
            ctx->pc = 0x4AEA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aea90;
        }
    }
    ctx->pc = 0x4AEC40u;
}
