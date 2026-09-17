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

// Function: sub_0030DA60
// Address: 0x30da60 - 0x30dc58
void sub_0030DA60_0x30da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DA60_0x30da60");
#endif

    switch (ctx->pc) {
        case 0x30dab0u: goto label_30dab0;
        case 0x30db08u: goto label_30db08;
        case 0x30db9cu: goto label_30db9c;
        default: break;
    }

    ctx->pc = 0x30da60u;

    // 0x30da60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30da64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30da68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x30da68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x30da6c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x30da6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x30da70: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x30da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x30da74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x30da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30da78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30da78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da7c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x30da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x30da80: 0x24130053  addiu       $s3, $zero, 0x53
    ctx->pc = 0x30da80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30da84: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x30da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x30da88: 0x3c142400  lui         $s4, 0x2400
    ctx->pc = 0x30da88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)9216 << 16));
    // 0x30da8c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x30da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x30da90: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x30da90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30da94: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x30da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x30da98: 0x24160040  addiu       $s6, $zero, 0x40
    ctx->pc = 0x30da98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30da9c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x30da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x30daa0: 0x2417004c  addiu       $s7, $zero, 0x4C
    ctx->pc = 0x30daa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30daa4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x30daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x30daa8: 0x241e0006  addiu       $fp, $zero, 0x6
    ctx->pc = 0x30daa8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30daac: 0x0  nop
    ctx->pc = 0x30daacu;
    // NOP
label_30dab0:
    // 0x30dab0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x30dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dab4: 0x241022c0  addiu       $s0, $zero, 0x22C0
    ctx->pc = 0x30dab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
    // 0x30dab8: 0x400013  mtlo        $v0
    ctx->pc = 0x30dab8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x30dabc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30dac0: 0x72508000  madd        $s0, $s2, $s0
    ctx->pc = 0x30dac0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x30dac4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30dac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30dac8: 0x26112440  addiu       $s1, $s0, 0x2440
    ctx->pc = 0x30dac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9280));
    // 0x30dacc: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x30daccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x30dad0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30dad4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x30dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x30dad8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30dadc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30dae0: 0x26112450  addiu       $s1, $s0, 0x2450
    ctx->pc = 0x30dae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
    // 0x30dae4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x30dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30dae8: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30daec: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x30daecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x30daf0: 0x26112460  addiu       $s1, $s0, 0x2460
    ctx->pc = 0x30daf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9312));
    // 0x30daf4: 0xfe3e0008  sd          $fp, 0x8($s1)
    ctx->pc = 0x30daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 30));
    // 0x30daf8: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30dafc: 0x26112470  addiu       $s1, $s0, 0x2470
    ctx->pc = 0x30dafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9328));
    // 0x30db00: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30DB00u;
    SET_GPR_U32(ctx, 31, 0x30DB08u);
    ctx->pc = 0x30DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB00u;
    // 0x30db04: 0xfe370008  sd          $s7, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30DB00u, 0x30DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB08u;
label_30db08:
    // 0x30db08: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30db0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30db0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30db10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30db14: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x30db14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x30db18: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x30db18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x30db1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30db20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30db24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30db24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30db28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30db28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30db2c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30db30: 0x26112480  addiu       $s1, $s0, 0x2480
    ctx->pc = 0x30db30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9344));
    // 0x30db34: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30db34u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30db38: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30db3c: 0xfe360008  sd          $s6, 0x8($s1)
    ctx->pc = 0x30db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 22));
    // 0x30db40: 0x26112490  addiu       $s1, $s0, 0x2490
    ctx->pc = 0x30db40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
    // 0x30db44: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x30db44u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x30db48: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x30db48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x30db4c: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x30db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x30db50: 0x261124a0  addiu       $s1, $s0, 0x24A0
    ctx->pc = 0x30db50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9376));
    // 0x30db54: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30db54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30db58: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30db58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30db5c: 0x261124b0  addiu       $s1, $s0, 0x24B0
    ctx->pc = 0x30db5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9392));
    // 0x30db60: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30db60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30db64: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30db64u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30db68: 0x261124c0  addiu       $s1, $s0, 0x24C0
    ctx->pc = 0x30db68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9408));
    // 0x30db6c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x30db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x30db70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30db70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30db74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x30db74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x30db78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30db7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30db80: 0x261124d0  addiu       $s1, $s0, 0x24D0
    ctx->pc = 0x30db80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9424));
    // 0x30db84: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x30db84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30db88: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30db88u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30db8c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x30db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x30db90: 0x261124e0  addiu       $s1, $s0, 0x24E0
    ctx->pc = 0x30db90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9440));
    // 0x30db94: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30DB94u;
    SET_GPR_U32(ctx, 31, 0x30DB9Cu);
    ctx->pc = 0x30DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB94u;
    // 0x30db98: 0xfe3e0008  sd          $fp, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30DB94u, 0x30DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB9Cu;
label_30db9c:
    // 0x30db9c: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30dba0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30dba4: 0x8f84cb90  lw          $a0, -0x3470($gp)
    ctx->pc = 0x30dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953872)));
    // 0x30dba8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30dba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30dbac: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30dbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30dbb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30dbb4: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x30dbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x30dbb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30dbbc: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x30dbbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30dbc0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x30dbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x30dbc4: 0x34a5000e  ori         $a1, $a1, 0xE
    ctx->pc = 0x30dbc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
    // 0x30dbc8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30dbc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30dbcc: 0x34a5a9b0  ori         $a1, $a1, 0xA9B0
    ctx->pc = 0x30dbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43440);
    // 0x30dbd0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30dbd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30dbd4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30dbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30dbd8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30dbdc: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30dbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30dbe0: 0x261124f0  addiu       $s1, $s0, 0x24F0
    ctx->pc = 0x30dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9456));
    // 0x30dbe4: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30dbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30dbe8: 0xfe370008  sd          $s7, 0x8($s1)
    ctx->pc = 0x30dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 23));
    // 0x30dbec: 0x26112500  addiu       $s1, $s0, 0x2500
    ctx->pc = 0x30dbecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9472));
    // 0x30dbf0: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30dbf4: 0xfe360008  sd          $s6, 0x8($s1)
    ctx->pc = 0x30dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 22));
    // 0x30dbf8: 0x26112510  addiu       $s1, $s0, 0x2510
    ctx->pc = 0x30dbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9488));
    // 0x30dbfc: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x30dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x30dc00: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x30dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x30dc04: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x30dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x30dc08: 0x26112520  addiu       $s1, $s0, 0x2520
    ctx->pc = 0x30dc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9504));
    // 0x30dc0c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30dc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30dc10: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30dc10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30dc14: 0x26112530  addiu       $s1, $s0, 0x2530
    ctx->pc = 0x30dc14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9520));
    // 0x30dc18: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30dc18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30dc1c: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x30DC1Cu;
    {
        const bool branch_taken_0x30dc1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC1Cu;
        // 0x30dc20: 0xfe200008  sd          $zero, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc1c) {
            ctx->pc = 0x30DAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dab0;
        }
    }
    ctx->pc = 0x30DC24u;
    // 0x30dc24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30dc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dc28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x30dc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30dc2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30dc2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dc30: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x30dc30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30dc34: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x30dc34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dc38: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x30dc38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc3c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x30dc3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30dc40: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x30dc40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30dc44: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x30dc44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30dc48: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x30dc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30dc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x30DC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC4Cu;
        // 0x30dc50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DC54u;
    // 0x30dc54: 0x0  nop
    ctx->pc = 0x30dc54u;
    // NOP
    ctx->pc = 0x30dc58u;
}
