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

// Function: sub_00277120
// Address: 0x277120 - 0x2772f8
void sub_00277120_0x277120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277120_0x277120");
#endif

    switch (ctx->pc) {
        case 0x27714cu: goto label_27714c;
        case 0x277164u: goto label_277164;
        case 0x277188u: goto label_277188;
        case 0x277270u: goto label_277270;
        case 0x2772b8u: goto label_2772b8;
        default: break;
    }

    ctx->pc = 0x277120u;

    // 0x277120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277124: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x277124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x277128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27712c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27712cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x277130: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x277130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x277134: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x277134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27713c: 0x26108858  addiu       $s0, $s0, -0x77A8
    ctx->pc = 0x27713cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x277140: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x277140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x277144: 0xc07daf0  jal         func_1F6BC0
    ctx->pc = 0x277144u;
    SET_GPR_U32(ctx, 31, 0x27714Cu);
    ctx->pc = 0x277148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277144u;
    // 0x277148: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BC0u, 0x277144u, 0x27714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27714Cu;
label_27714c:
    // 0x27714c: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x27714cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277150: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x277150u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x277154: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x277154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277158: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x277158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x27715c: 0xc084eac  jal         func_213AB0
    ctx->pc = 0x27715Cu;
    SET_GPR_U32(ctx, 31, 0x277164u);
    ctx->pc = 0x277160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27715Cu;
    // 0x277160: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AB0u, 0x27715Cu, 0x277164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277164u;
label_277164:
    // 0x277164: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x277164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x277168: 0xac620230  sw          $v0, 0x230($v1)
    ctx->pc = 0x277168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x170230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x170230u, _value); } while (0);
    // 0x27716c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x277170: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x277170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x277174: 0x8f86ca68  lw          $a2, -0x3598($gp)
    ctx->pc = 0x277174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277178: 0x244f88d0  addiu       $t7, $v0, -0x7730
    ctx->pc = 0x277178u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x27717c: 0x246ea620  addiu       $t6, $v1, -0x59E0
    ctx->pc = 0x27717cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944288));
    // 0x277180: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x277180u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277184: 0x0  nop
    ctx->pc = 0x277184u;
    // NOP
label_277188:
    // 0x277188: 0xd5080  sll         $t2, $t5, 2
    ctx->pc = 0x277188u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x27718c: 0xd3840  sll         $a3, $t5, 1
    ctx->pc = 0x27718cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x277190: 0x14f4021  addu        $t0, $t2, $t7
    ctx->pc = 0x277190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x277194: 0x24eb0030  addiu       $t3, $a3, 0x30
    ctx->pc = 0x277194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x277198: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x277198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x27719c: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x27719cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2771a0: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x2771a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2771a4: 0xd4900  sll         $t1, $t5, 4
    ctx->pc = 0x2771a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x2771a8: 0x9444003e  lhu         $a0, 0x3E($v0)
    ctx->pc = 0x2771a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2771ac: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2771acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2771b0: 0x9443003c  lhu         $v1, 0x3C($v0)
    ctx->pc = 0x2771b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2771b4: 0x29ac0002  slti        $t4, $t5, 0x2
    ctx->pc = 0x2771b4u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2771b8: 0xa4c40008  sh          $a0, 0x8($a2)
    ctx->pc = 0x2771b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2771bc: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2771bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2771c0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2771c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2771c4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2771c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2771c8: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x2771c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2771cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2771ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2771d0: 0x94860040  lhu         $a2, 0x40($a0)
    ctx->pc = 0x2771d0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2771d4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2771d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2771d8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2771d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2771dc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2771dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2771e0: 0xa446000c  sh          $a2, 0xC($v0)
    ctx->pc = 0x2771e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x2771e4: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x2771e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x2771e8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2771e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2771ec: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x2771ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2771f0: 0x94640042  lhu         $a0, 0x42($v1)
    ctx->pc = 0x2771f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x2771f4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2771f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2771f8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2771f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2771fc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2771fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x277200: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x277200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277204: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x277204u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x277208: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x277208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27720c: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x27720cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x277210: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x277210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x277214: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x277214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277218: 0x8c64069c  lw          $a0, 0x69C($v1)
    ctx->pc = 0x277218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1692)));
    // 0x27721c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x27721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x277220: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x277220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x277224: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x277224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x277228: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x277228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x27722c: 0x8c6406a0  lw          $a0, 0x6A0($v1)
    ctx->pc = 0x27722cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1696)));
    // 0x277230: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x277230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x277234: 0xad440014  sw          $a0, 0x14($t2)
    ctx->pc = 0x277234u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 4));
    // 0x277238: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x277238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x27723c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x27723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x277240: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x277240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x277244: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x277244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277248: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x277248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27724c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x27724cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x277250: 0x25290048  addiu       $t1, $t1, 0x48
    ctx->pc = 0x277250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 72));
    // 0x277254: 0x1580ffcc  bnez        $t4, . + 4 + (-0x34 << 2)
    ctx->pc = 0x277254u;
    {
        const bool branch_taken_0x277254 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x277258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277254u;
        // 0x277258: 0xaca906a8  sw          $t1, 0x6A8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1704), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277254) {
            ctx->pc = 0x277188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277188;
        }
    }
    ctx->pc = 0x27725Cu;
    // 0x27725c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277260: 0x56220021  bnel        $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x277260u;
    {
        const bool branch_taken_0x277260 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x277260) {
            ctx->pc = 0x277264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277260u;
            // 0x277264: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2772E8u;
            goto label_2772e8;
        }
    }
    ctx->pc = 0x277268u;
    // 0x277268: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x277268u;
    SET_GPR_U32(ctx, 31, 0x277270u);
    ctx->pc = 0x27726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277268u;
    // 0x27726c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x277268u, 0x277270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277270u;
label_277270:
    // 0x277270: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x277270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277274: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x277274u;
    {
        const bool branch_taken_0x277274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277274u;
        // 0x277278: 0x8f82ca68  lw          $v0, -0x3598($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277274) {
            ctx->pc = 0x277290u;
            goto label_277290;
        }
    }
    ctx->pc = 0x27727Cu;
    // 0x27727c: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x27727cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x277280: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x277280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277284: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x277284u;
    {
        const bool branch_taken_0x277284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277284u;
        // 0x277288: 0xac6000d8  sw          $zero, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277284) {
            ctx->pc = 0x2772E4u;
            goto label_2772e4;
        }
    }
    ctx->pc = 0x27728Cu;
    // 0x27728c: 0x0  nop
    ctx->pc = 0x27728cu;
    // NOP
label_277290:
    // 0x277290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x277290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277294: 0x8c670050  lw          $a3, 0x50($v1)
    ctx->pc = 0x277294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x277298: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x277298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x27729c: 0xac470068  sw          $a3, 0x68($v0)
    ctx->pc = 0x27729cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 7));
    // 0x2772a0: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x2772a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2772a4: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x2772a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2772a8: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x2772a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x2772ac: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2772ACu;
    {
        const bool branch_taken_0x2772ac = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2772B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772ACu;
        // 0x2772b0: 0xac6700d8  sw          $a3, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772ac) {
            ctx->pc = 0x2772E4u;
            goto label_2772e4;
        }
    }
    ctx->pc = 0x2772B4u;
    // 0x2772b4: 0x0  nop
    ctx->pc = 0x2772b4u;
    // NOP
label_2772b8:
    // 0x2772b8: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x2772bc: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x2772bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2772c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2772c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2772c4: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x2772c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2772c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2772c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2772cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2772ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2772d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2772d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2772d4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2772d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2772d8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2772d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2772dc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2772DCu;
    {
        const bool branch_taken_0x2772dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2772E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772DCu;
        // 0x2772e0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772dc) {
            ctx->pc = 0x2772B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2772b8;
        }
    }
    ctx->pc = 0x2772E4u;
label_2772e4:
    // 0x2772e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2772e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2772e8:
    // 0x2772e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2772e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2772ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2772ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2772f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2772F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2772F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772F0u;
        // 0x2772f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2772F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2772F8u;
}
