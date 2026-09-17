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

// Function: sub_00283B68
// Address: 0x283b68 - 0x283da8
void sub_00283B68_0x283b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283B68_0x283b68");
#endif

    switch (ctx->pc) {
        case 0x283b8cu: goto label_283b8c;
        case 0x283be8u: goto label_283be8;
        case 0x283c10u: goto label_283c10;
        case 0x283cc8u: goto label_283cc8;
        case 0x283d6cu: goto label_283d6c;
        case 0x283d7cu: goto label_283d7c;
        case 0x283d8cu: goto label_283d8c;
        default: break;
    }

    ctx->pc = 0x283b68u;

    // 0x283b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x283b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x283b78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x283b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x283b7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x283b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x283b80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x283b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x283b84: 0xc0a0af6  jal         func_282BD8
    ctx->pc = 0x283B84u;
    SET_GPR_U32(ctx, 31, 0x283B8Cu);
    ctx->pc = 0x283B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B84u;
    // 0x283b88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BD8u, 0x283B84u, 0x283B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B8Cu;
label_283b8c:
    // 0x283b8c: 0x86040040  lh          $a0, 0x40($s0)
    ctx->pc = 0x283b8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x283b90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x283b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b94: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x283b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x283b98: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x283b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x283b9c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x283b9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x283ba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x283ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ba4: 0x7223001a  div1        $zero, $s1, $v1
    ctx->pc = 0x283ba4u;
    { int32_t divisor = GPR_S32(ctx, 3); int32_t dividend = GPR_S32(ctx, 17); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x283ba8: 0x3010  mfhi        $a2
    ctx->pc = 0x283ba8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x283bac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x283bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x283bb0: 0x70003810  mfhi1       $a3
    ctx->pc = 0x283bb0u;
    SET_GPR_U64(ctx, 7, ctx->hi1);
    // 0x283bb4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x283bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x283bb8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x283bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x283bbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x283bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x283bc0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x283bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x283bc4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x283bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x283bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x283bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283bcc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x283bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x283bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283bd4: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x283bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
    // 0x283bd8: 0x26527130  addiu       $s2, $s2, 0x7130
    ctx->pc = 0x283bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28976));
    // 0x283bdc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x283bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x283be0: 0xc0a0ace  jal         func_282B38
    ctx->pc = 0x283BE0u;
    SET_GPR_U32(ctx, 31, 0x283BE8u);
    ctx->pc = 0x283BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283BE0u;
    // 0x283be4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B38u, 0x283BE0u, 0x283BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BE8u;
label_283be8:
    // 0x283be8: 0x86030040  lh          $v1, 0x40($s0)
    ctx->pc = 0x283be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x283bec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x283becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x283bf0: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x283bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x283bf4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x283bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x283bf8: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x283bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x283bfc: 0x26670010  addiu       $a3, $s3, 0x10
    ctx->pc = 0x283bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x283c00: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x283c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x283c04: 0x26680022  addiu       $t0, $s3, 0x22
    ctx->pc = 0x283c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
    // 0x283c08: 0xa2710042  sb          $s1, 0x42($s3)
    ctx->pc = 0x283c08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 66), (uint8_t)GPR_U32(ctx, 17));
    // 0x283c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283c10:
    // 0x283c10: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x283c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x283c14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x283c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x283c18: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x283c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x283c1c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x283c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x283c20: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x283c20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x283c24: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x283c24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x283c28: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283C28u;
    {
        const bool branch_taken_0x283c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C28u;
        // 0x283c2c: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c28) {
            ctx->pc = 0x283C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283c10;
        }
    }
    ctx->pc = 0x283C30u;
    // 0x283c30: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x283c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x283c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c38: 0x2509000c  addiu       $t1, $t0, 0xC
    ctx->pc = 0x283c38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x283c3c: 0x24e6000c  addiu       $a2, $a3, 0xC
    ctx->pc = 0x283c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x283c40: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x283c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x283c44: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x283c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x283c48: 0xa0e20008  sb          $v0, 0x8($a3)
    ctx->pc = 0x283c48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x283c4c: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x283c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x283c50: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x283c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x283c54: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x283c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x283c58: 0xa0e30009  sb          $v1, 0x9($a3)
    ctx->pc = 0x283c58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x283c5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x283c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x283c60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x283c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x283c64: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x283c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x283c68: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x283c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x283c6c: 0xa0e2000a  sb          $v0, 0xA($a3)
    ctx->pc = 0x283c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x283c70: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x283c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x283c74: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x283c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x283c78: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x283c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x283c7c: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x283c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x283c80: 0xa0e3000b  sb          $v1, 0xB($a3)
    ctx->pc = 0x283c80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x283c84: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x283c84u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x283c88: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x283c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x283c8c: 0x248400ff  addiu       $a0, $a0, 0xFF
    ctx->pc = 0x283c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x283c90: 0xa1040008  sb          $a0, 0x8($t0)
    ctx->pc = 0x283c90u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x283c94: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x283c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x283c98: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x283c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x283c9c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x283c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x283ca0: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x283ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x283ca4: 0xa1020009  sb          $v0, 0x9($t0)
    ctx->pc = 0x283ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x283ca8: 0x92430007  lbu         $v1, 0x7($s2)
    ctx->pc = 0x283ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x283cac: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x283cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x283cb0: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x283cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x283cb4: 0xa103000a  sb          $v1, 0xA($t0)
    ctx->pc = 0x283cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x283cb8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x283cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x283cbc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x283cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x283cc0: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x283cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x283cc4: 0xa102000b  sb          $v0, 0xB($t0)
    ctx->pc = 0x283cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 2));
label_283cc8:
    // 0x283cc8: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x283cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x283ccc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x283cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x283cd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x283cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x283cd4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x283cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x283cd8: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x283cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x283cdc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x283CDCu;
    {
        const bool branch_taken_0x283cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CDCu;
        // 0x283ce0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cdc) {
            ctx->pc = 0x283CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283cc8;
        }
    }
    ctx->pc = 0x283CE4u;
    // 0x283ce4: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x283ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x283ce8: 0x26700048  addiu       $s0, $s3, 0x48
    ctx->pc = 0x283ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x283cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283cf0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x283cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x283cf4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x283cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x283cf8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x283cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x283cfc: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x283cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x283d00: 0xa0e3000f  sb          $v1, 0xF($a3)
    ctx->pc = 0x283d00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x283d04: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x283d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x283d08: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x283d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x283d0c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x283d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x283d10: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x283d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x283d14: 0xa0e20010  sb          $v0, 0x10($a3)
    ctx->pc = 0x283d14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x283d18: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x283d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x283d1c: 0x31a82  srl         $v1, $v1, 10
    ctx->pc = 0x283d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x283d20: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x283d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x283d24: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x283d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x283d28: 0xa0e30011  sb          $v1, 0x11($a3)
    ctx->pc = 0x283d28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x283d2c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x283d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x283d30: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x283d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x283d34: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x283d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x283d38: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x283d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x283d3c: 0xa102000f  sb          $v0, 0xF($t0)
    ctx->pc = 0x283d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x283d40: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x283d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x283d44: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x283d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x283d48: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x283d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x283d4c: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x283d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x283d50: 0xa1030010  sb          $v1, 0x10($t0)
    ctx->pc = 0x283d50u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x283d54: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x283d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x283d58: 0x21642  srl         $v0, $v0, 25
    ctx->pc = 0x283d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 25));
    // 0x283d5c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x283d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x283d60: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x283d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x283d64: 0xc04a151  jal         func_128544
    ctx->pc = 0x283D64u;
    SET_GPR_U32(ctx, 31, 0x283D6Cu);
    ctx->pc = 0x283D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D64u;
    // 0x283d68: 0xa1020011  sb          $v0, 0x11($t0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 8), 17), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x283D64u, 0x283D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D6Cu;
label_283d6c:
    // 0x283d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d70: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x283d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x283d74: 0xc04a58e  jal         func_129638
    ctx->pc = 0x283D74u;
    SET_GPR_U32(ctx, 31, 0x283D7Cu);
    ctx->pc = 0x283D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D74u;
    // 0x283d78: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x283D74u, 0x283D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D7Cu;
label_283d7c:
    // 0x283d7c: 0x26640068  addiu       $a0, $s3, 0x68
    ctx->pc = 0x283d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x283d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d84: 0xc04a151  jal         func_128544
    ctx->pc = 0x283D84u;
    SET_GPR_U32(ctx, 31, 0x283D8Cu);
    ctx->pc = 0x283D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D84u;
    // 0x283d88: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x283D84u, 0x283D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D8Cu;
label_283d8c:
    // 0x283d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283d90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x283d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x283d94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x283d94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283d98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x283d98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x283d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x283d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283da0: 0x3e00008  jr          $ra
    ctx->pc = 0x283DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DA0u;
        // 0x283da4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283DA8u;
}
