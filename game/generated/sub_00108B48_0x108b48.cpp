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

// Function: sub_00108B48
// Address: 0x108b48 - 0x1099b8
void sub_00108B48_0x108b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108B48_0x108b48");
#endif

    switch (ctx->pc) {
        case 0x108bb8u: goto label_108bb8;
        case 0x108c44u: goto label_108c44;
        case 0x108cc8u: goto label_108cc8;
        case 0x108cecu: goto label_108cec;
        case 0x108d40u: goto label_108d40;
        case 0x108d60u: goto label_108d60;
        case 0x108d68u: goto label_108d68;
        case 0x108dd8u: goto label_108dd8;
        case 0x108e1cu: goto label_108e1c;
        case 0x108e90u: goto label_108e90;
        case 0x108eb8u: goto label_108eb8;
        case 0x108ed8u: goto label_108ed8;
        case 0x108f60u: goto label_108f60;
        case 0x108f8cu: goto label_108f8c;
        case 0x109010u: goto label_109010;
        case 0x109038u: goto label_109038;
        case 0x109040u: goto label_109040;
        case 0x1090c8u: goto label_1090c8;
        case 0x10912cu: goto label_10912c;
        case 0x1091c0u: goto label_1091c0;
        case 0x1091e8u: goto label_1091e8;
        case 0x109220u: goto label_109220;
        case 0x1092c0u: goto label_1092c0;
        case 0x1092e4u: goto label_1092e4;
        case 0x109360u: goto label_109360;
        case 0x109380u: goto label_109380;
        case 0x109388u: goto label_109388;
        case 0x109410u: goto label_109410;
        case 0x109454u: goto label_109454;
        case 0x1094f0u: goto label_1094f0;
        case 0x109518u: goto label_109518;
        case 0x109538u: goto label_109538;
        case 0x1095d8u: goto label_1095d8;
        case 0x109604u: goto label_109604;
        case 0x1096b0u: goto label_1096b0;
        case 0x1096d8u: goto label_1096d8;
        case 0x1096e0u: goto label_1096e0;
        case 0x109780u: goto label_109780;
        case 0x1097e4u: goto label_1097e4;
        case 0x1098a0u: goto label_1098a0;
        case 0x1098c8u: goto label_1098c8;
        case 0x109900u: goto label_109900;
        default: break;
    }

    ctx->pc = 0x108b48u;

    // 0x108b48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x108b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108b50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x108b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x108b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108b5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108b60: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x108b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x108b64: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x108B64u;
    {
        const bool branch_taken_0x108b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B64u;
        // 0x108b68: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b64) {
            ctx->pc = 0x108CB0u;
            goto label_108cb0;
        }
    }
    ctx->pc = 0x108B6Cu;
    // 0x108b6c: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x108b6cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x108b70: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x108b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x108b74: 0x3c12001e  lui         $s2, 0x1E
    ctx->pc = 0x108b74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)30 << 16));
    // 0x108b78: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x108b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x108b7c: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x108b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x108b80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x108b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x108b84: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x108b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x108b88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x108b88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b8c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x108b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x108b90: 0x26436040  addiu       $v1, $s2, 0x6040
    ctx->pc = 0x108b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24640));
    // 0x108b94: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x108b94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x108b98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x108b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x108b9c: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x108B9Cu;
    {
        const bool branch_taken_0x108b9c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x108BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B9Cu;
        // 0x108ba0: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b9c) {
            ctx->pc = 0x108C38u;
            goto label_108c38;
        }
    }
    ctx->pc = 0x108BA4u;
    // 0x108ba4: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x108ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x108ba8: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x108ba8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x108bac: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x108bacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x108bb0: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x108bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x108bb4: 0x0  nop
    ctx->pc = 0x108bb4u;
    // NOP
label_108bb8:
    // 0x108bb8: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x108bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x108bbc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x108bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x108bc0: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x108bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x108bc4: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x108bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x108bc8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x108bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108bcc: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x108bccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x108bd0: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x108bd0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x108bd4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x108bd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x108bd8: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x108bdc: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x108bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x108be0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108be4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x108be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x108be8: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x108be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x108bec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x108becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x108bf0: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x108bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x108bf4: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x108bf4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x108bf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108bfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108c00: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x108c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x108c04: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x108c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x108c08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x108c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x108c0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x108c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108c10: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x108c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x108c14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x108c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x108c18: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x108c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x108c1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x108c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x108c20: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x108c20u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x108c24: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x108c24u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x108c28: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x108C28u;
    {
        const bool branch_taken_0x108c28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x108C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C28u;
        // 0x108c2c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c28) {
            ctx->pc = 0x108BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108bb8;
        }
    }
    ctx->pc = 0x108C30u;
    // 0x108c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108C30u;
    {
        const bool branch_taken_0x108c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108c30) {
            ctx->pc = 0x108C3Cu;
            goto label_108c3c;
        }
    }
    ctx->pc = 0x108C38u;
label_108c38:
    // 0x108c38: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x108c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_108c3c:
    // 0x108c3c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x108C3Cu;
    SET_GPR_U32(ctx, 31, 0x108C44u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x108C3Cu, 0x108C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C44u;
label_108c44:
    // 0x108c44: 0xf  sync
    ctx->pc = 0x108c44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x108c48: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x108c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x108c4c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x108c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x108c50: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x108c50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x108c54: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x108c54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x108c58: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x108c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x108c5c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x108c5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x108c60: 0x264a6040  addiu       $t2, $s2, 0x6040
    ctx->pc = 0x108c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 24640));
    // 0x108c64: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x108c64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x108c68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108c6c: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x108c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x108c70: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x108c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x108c74: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x108c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x108c78: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x108c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108c7c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108c80: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x108c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x108c84: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x108c84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x108c88: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x108c88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x108c8c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x108c8cu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x108c90: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x108c90u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 9)); // MMIO: 0x1000d400
    // 0x108c94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108C94u;
    {
        const bool branch_taken_0x108c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C94u;
        // 0x108c98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c94) {
            ctx->pc = 0x108CB0u;
            goto label_108cb0;
        }
    }
    ctx->pc = 0x108C9Cu;
    // 0x108c9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108ca0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108ca8: 0x804627e  j           func_1189F8
    ctx->pc = 0x108CA8u;
    ctx->pc = 0x108CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CA8u;
    // 0x108cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x108CB0u;
label_108cb0:
    // 0x108cb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108cb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x108CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CBCu;
        // 0x108cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108CC4u;
    // 0x108cc4: 0x0  nop
    ctx->pc = 0x108cc4u;
    // NOP
label_108cc8:
    // 0x108cc8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108cc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108ccc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108cd0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108cd4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x108cd4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108cd8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x108cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108cdc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108ce0: 0x5180000  mtsab       $t0, 0x0
    ctx->pc = 0x108ce0u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108ce4: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x108ce4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x108ce8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x108ce8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108cec:
    // 0x108cec: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x108cecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108cf0: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x108cf0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108cf4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108cf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108cf8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x108cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x108cfc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x108cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x108d00: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x108d00u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108d04: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x108d04u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108d08: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x108d08u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108d0c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x108d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x108d10: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x108d10u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x108d14: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x108D14u;
    {
        const bool branch_taken_0x108d14 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D14u;
        // 0x108d18: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d14) {
            ctx->pc = 0x108CECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108cec;
        }
    }
    ctx->pc = 0x108D1Cu;
    // 0x108d1c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108d20: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108d24: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108d28: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x108d28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x108d2c: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x108D2Cu;
    {
        const bool branch_taken_0x108d2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D2Cu;
        // 0x108d30: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d2c) {
            ctx->pc = 0x108CECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108cec;
        }
    }
    ctx->pc = 0x108D34u;
    // 0x108d34: 0x3e00008  jr          $ra
    ctx->pc = 0x108D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108D3Cu;
    // 0x108d3c: 0x0  nop
    ctx->pc = 0x108d3cu;
    // NOP
label_108d40:
    // 0x108d40: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x108d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108d44: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x108d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108d48: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x108d48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108d4c: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x108d4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108d50: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x108d50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108d54: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x108d54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x108d58: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x108d58u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108d5c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x108d5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108d60:
    // 0x108d60: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x108d60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108d64: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x108d64u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108d68:
    // 0x108d68: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x108d68u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108d6c: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x108d6cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x108d70: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x108d70u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108d74: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x108d74u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108d78: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x108d78u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x108d7c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x108d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x108d80: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x108d80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x108d84: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x108d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x108d88: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x108d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x108d8c: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x108D8Cu;
    {
        const bool branch_taken_0x108d8c = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x108D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D8Cu;
        // 0x108d90: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d8c) {
            ctx->pc = 0x108D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d68;
        }
    }
    ctx->pc = 0x108D94u;
    // 0x108d94: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x108d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x108d98: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x108d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x108d9c: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x108d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108da0: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x108da0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x108da4: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x108DA4u;
    {
        const bool branch_taken_0x108da4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DA4u;
        // 0x108da8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108da4) {
            ctx->pc = 0x108D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d68;
        }
    }
    ctx->pc = 0x108DACu;
    // 0x108dac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x108dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108db0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x108db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108db4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x108db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108db8: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108dbc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x108dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x108dc0: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x108dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x108dc4: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x108DC4u;
    {
        const bool branch_taken_0x108dc4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x108DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DC4u;
        // 0x108dc8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108dc4) {
            ctx->pc = 0x108D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d60;
        }
    }
    ctx->pc = 0x108DCCu;
    // 0x108dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x108DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108DD4u;
    // 0x108dd4: 0x0  nop
    ctx->pc = 0x108dd4u;
    // NOP
label_108dd8:
    // 0x108dd8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108dd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108ddc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108de0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108de4: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x108de4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108de8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108de8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108dec: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108decu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108df0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108df0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108df4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108df4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108df8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x108df8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108dfc: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x108dfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x108e00: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x108e00u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108e04: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108e04u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108e08: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x108e08u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108e0c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x108e0cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108e10: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x108e10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108e14: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x108E14u;
    {
        const bool branch_taken_0x108e14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E14u;
        // 0x108e18: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e14) {
            ctx->pc = 0x108E6Cu;
            goto label_108e6c;
        }
    }
    ctx->pc = 0x108E1Cu;
label_108e1c:
    // 0x108e1c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x108e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x108e20: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x108e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x108e24: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x108e24u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108e28: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x108e28u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108e2c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x108e2cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x108e30: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x108e30u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108e34: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108e34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108e38: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x108e38u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108e3c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x108e3cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x108e40: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x108e40u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x108e44: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x108e44u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108e48: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x108e48u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x108e4c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x108e4cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x108e50: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x108e50u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x108e54: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x108e54u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x108e58: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x108e58u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x108e5c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x108e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x108e60: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x108e60u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x108e64: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x108E64u;
    {
        const bool branch_taken_0x108e64 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E64u;
        // 0x108e68: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e64) {
            ctx->pc = 0x108E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e1c;
        }
    }
    ctx->pc = 0x108E6Cu;
label_108e6c:
    // 0x108e6c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108e70: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108e74: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108e78: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x108e78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x108e7c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x108E7Cu;
    {
        const bool branch_taken_0x108e7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E7Cu;
        // 0x108e80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e7c) {
            ctx->pc = 0x108E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e1c;
        }
    }
    ctx->pc = 0x108E84u;
    // 0x108e84: 0x3e00008  jr          $ra
    ctx->pc = 0x108E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108E8Cu;
    // 0x108e8c: 0x0  nop
    ctx->pc = 0x108e8cu;
    // NOP
label_108e90:
    // 0x108e90: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108e90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108e94: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108e98: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108e9c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x108e9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108ea0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108ea4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108ea4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108ea8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108ea8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108eac: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x108eacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108eb0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x108eb0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x108eb4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108eb4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_108eb8:
    // 0x108eb8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108ebc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x108ebcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108ec0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x108ec0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108ec4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x108ec4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108ec8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x108ec8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108ecc: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x108eccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x108ed0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x108ED0u;
    {
        const bool branch_taken_0x108ed0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x108ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108ED0u;
        // 0x108ed4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ed0) {
            ctx->pc = 0x108F14u;
            goto label_108f14;
        }
    }
    ctx->pc = 0x108ED8u;
label_108ed8:
    // 0x108ed8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x108ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x108edc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x108edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x108ee0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x108ee0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108ee4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x108ee4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108ee8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x108ee8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108eec: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x108eecu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108ef0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x108ef0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x108ef4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108ef4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108ef8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x108ef8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x108efc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x108efcu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108f00: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x108f00u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x108f04: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x108f04u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108f08: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x108f08u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x108f0c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x108F0Cu;
    {
        const bool branch_taken_0x108f0c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F0Cu;
        // 0x108f10: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f0c) {
            ctx->pc = 0x108ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108ed8;
        }
    }
    ctx->pc = 0x108F14u;
label_108f14:
    // 0x108f14: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x108f14u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x108f18: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x108f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x108f1c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108f20: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x108f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x108f24: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x108f24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x108f28: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x108F28u;
    {
        const bool branch_taken_0x108f28 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F28u;
        // 0x108f2c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f28) {
            ctx->pc = 0x108ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108ed8;
        }
    }
    ctx->pc = 0x108F30u;
    // 0x108f30: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108f30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108f34: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108f38: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108f3c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x108f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x108f40: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x108f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x108f44: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x108f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x108f48: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x108f48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x108f4c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x108F4Cu;
    {
        const bool branch_taken_0x108f4c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F4Cu;
        // 0x108f50: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f4c) {
            ctx->pc = 0x108EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108eb8;
        }
    }
    ctx->pc = 0x108F54u;
    // 0x108f54: 0x3e00008  jr          $ra
    ctx->pc = 0x108F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108F5Cu;
    // 0x108f5c: 0x0  nop
    ctx->pc = 0x108f5cu;
    // NOP
label_108f60:
    // 0x108f60: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108f60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108f64: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108f68: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108f6c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x108f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108f70: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108f70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108f74: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108f78: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108f78u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108f7c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108f7cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108f80: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x108f80u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108f84: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x108f84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x108f88: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x108f88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108f8c:
    // 0x108f8c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x108f8cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108f90: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x108f90u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108f94: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108f94u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108f98: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x108f98u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x108f9c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x108f9cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x108fa0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x108fa0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108fa4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108fa4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108fa8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x108fa8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108fac: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x108facu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108fb0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x108fb0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x108fb4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x108fb4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108fb8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x108fb8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108fbc: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x108fbcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x108fc0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x108fc0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x108fc4: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x108fc4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x108fc8: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x108fc8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x108fcc: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x108fccu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x108fd0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x108fd0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x108fd4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x108fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x108fd8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x108fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x108fdc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x108fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x108fe0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x108fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x108fe4: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x108FE4u;
    {
        const bool branch_taken_0x108fe4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FE4u;
        // 0x108fe8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fe4) {
            ctx->pc = 0x108F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108f8c;
        }
    }
    ctx->pc = 0x108FECu;
    // 0x108fec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108ff0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108ff4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108ff8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x108ff8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x108ffc: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x108FFCu;
    {
        const bool branch_taken_0x108ffc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x109000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FFCu;
        // 0x109000: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ffc) {
            ctx->pc = 0x108F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108f8c;
        }
    }
    ctx->pc = 0x109004u;
    // 0x109004: 0x3e00008  jr          $ra
    ctx->pc = 0x109004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10900Cu;
    // 0x10900c: 0x0  nop
    ctx->pc = 0x10900cu;
    // NOP
label_109010:
    // 0x109010: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109010u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109014: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109018: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10901c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109020: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109020u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109024: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109024u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109028: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109028u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10902c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x10902cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109030: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x109030u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109034: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x109034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_109038:
    // 0x109038: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10903c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x10903cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109040:
    // 0x109040: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109040u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109044: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109044u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109048: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109048u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10904c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10904cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109050: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109050u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109054: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109054u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x109058: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109058u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x10905c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x109060: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x109060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x109064: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109064u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109068: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109068u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10906c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10906cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109070: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109070u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109074: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x109074u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x109078: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x109078u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10907c: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x10907cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x109080: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x109080u;
    {
        const bool branch_taken_0x109080 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109080u;
        // 0x109084: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109080) {
            ctx->pc = 0x109040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109040;
        }
    }
    ctx->pc = 0x109088u;
    // 0x109088: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x10908c: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x10908cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x109090: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109094: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x109094u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x109098: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x109098u;
    {
        const bool branch_taken_0x109098 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109098u;
        // 0x10909c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109098) {
            ctx->pc = 0x109040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109040;
        }
    }
    ctx->pc = 0x1090A0u;
    // 0x1090a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1090a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1090a4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1090a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1090a8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1090a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1090ac: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1090acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1090b0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1090b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1090b4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1090b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1090b8: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1090B8u;
    {
        const bool branch_taken_0x1090b8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1090BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090B8u;
        // 0x1090bc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090b8) {
            ctx->pc = 0x109038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109038;
        }
    }
    ctx->pc = 0x1090C0u;
    // 0x1090c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1090C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1090C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1090C8u;
label_1090c8:
    // 0x1090c8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1090c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1090cc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1090ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1090d0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1090d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1090d4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1090d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1090d8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1090d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1090dc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1090dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1090e0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1090e0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1090e4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1090e4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1090e8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1090e8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1090ec: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1090ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1090f0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1090f0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1090f4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1090f4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1090f8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1090f8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1090fc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1090fcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109100: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x109100u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x109104: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x109104u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109108: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x109108u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x10910c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x10910cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109110: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109110u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109114: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x109114u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x109118: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x109118u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x10911c: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x10911cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x109120: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x109120u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x109124: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x109124u;
    {
        const bool branch_taken_0x109124 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109124u;
        // 0x109128: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109124) {
            ctx->pc = 0x1091A0u;
            goto label_1091a0;
        }
    }
    ctx->pc = 0x10912Cu;
label_10912c:
    // 0x10912c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x10912cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109130: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109134: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x109134u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109138: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x109138u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10913c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10913cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109140: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x109140u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x109144: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x109144u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x109148: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x109148u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10914c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10914cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109150: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x109150u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x109154: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109154u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109158: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x109158u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x10915c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x10915cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109160: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x109160u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109164: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x109164u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x109168: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x109168u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10916c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x10916cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x109170: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x109170u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x109174: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x109174u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109178: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x109178u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10917c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10917cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109180: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x109180u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x109184: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x109184u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x109188: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x109188u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x10918c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10918cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109190: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x109190u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x109194: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109194u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x109198: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x109198u;
    {
        const bool branch_taken_0x109198 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109198u;
        // 0x10919c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109198) {
            ctx->pc = 0x10912Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10912c;
        }
    }
    ctx->pc = 0x1091A0u;
label_1091a0:
    // 0x1091a0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1091a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1091a4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1091a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1091a8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1091a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1091ac: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1091acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1091b0: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1091B0u;
    {
        const bool branch_taken_0x1091b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091B0u;
        // 0x1091b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091b0) {
            ctx->pc = 0x10912Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10912c;
        }
    }
    ctx->pc = 0x1091B8u;
    // 0x1091b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1091B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1091B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1091C0u;
label_1091c0:
    // 0x1091c0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1091c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1091c4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1091c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1091c8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1091c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1091cc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1091ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1091d0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1091d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1091d4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1091d4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1091d8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1091d8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1091dc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1091dcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1091e0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1091e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1091e4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1091e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1091e8:
    // 0x1091e8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1091e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1091ec: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1091ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1091f0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1091f0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1091f4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1091f4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1091f8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1091f8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1091fc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1091fcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109200: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109200u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x109204: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109208: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x109208u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x10920c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x10920cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109210: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109210u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109214: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x109214u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109218: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x109218u;
    {
        const bool branch_taken_0x109218 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109218u;
        // 0x10921c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109218) {
            ctx->pc = 0x109274u;
            goto label_109274;
        }
    }
    ctx->pc = 0x109220u;
label_109220:
    // 0x109220: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109224: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109224u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109228: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109228u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10922c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10922cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109230: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109230u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109234: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109234u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109238: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109238u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10923c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10923cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109240: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109244: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109244u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109248: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109248u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10924c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10924cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109250: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109250u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109254: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109254u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x109258: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x109258u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10925c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10925cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x109260: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x109260u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x109264: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x109264u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x109268: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109268u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x10926c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x10926Cu;
    {
        const bool branch_taken_0x10926c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10926Cu;
        // 0x109270: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10926c) {
            ctx->pc = 0x109220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109220;
        }
    }
    ctx->pc = 0x109274u;
label_109274:
    // 0x109274: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x109274u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x109278: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x10927c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x10927cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109280: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x109284: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x109284u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x109288: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x109288u;
    {
        const bool branch_taken_0x109288 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109288u;
        // 0x10928c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109288) {
            ctx->pc = 0x109220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109220;
        }
    }
    ctx->pc = 0x109290u;
    // 0x109290: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109290u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109294: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109298: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10929c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x10929cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1092a0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1092a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1092a4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1092a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1092a8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1092a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1092ac: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1092ACu;
    {
        const bool branch_taken_0x1092ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1092B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092ACu;
        // 0x1092b0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092ac) {
            ctx->pc = 0x1091E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1091e8;
        }
    }
    ctx->pc = 0x1092B4u;
    // 0x1092b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1092B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1092B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1092BCu;
    // 0x1092bc: 0x0  nop
    ctx->pc = 0x1092bcu;
    // NOP
label_1092c0:
    // 0x1092c0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1092c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1092c4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1092c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1092c8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1092c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1092cc: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1092ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1092d0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1092d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1092d4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1092d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1092d8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1092d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1092dc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1092dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1092e0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1092e0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1092e4:
    // 0x1092e4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1092e4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1092e8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1092e8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1092ec: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1092ecu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1092f0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1092f0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1092f4: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1092f4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1092f8: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x1092f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1092fc: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x1092fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x109300: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x109300u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x109304: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x109304u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x109308: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109308u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10930c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10930cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x109310: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x109310u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109314: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x109314u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109318: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x109318u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x10931c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x10931cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109320: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x109320u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109324: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109324u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x109328: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109328u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x10932c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x10932cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x109330: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x109330u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x109334: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x109334u;
    {
        const bool branch_taken_0x109334 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109334u;
        // 0x109338: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109334) {
            ctx->pc = 0x1092E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1092e4;
        }
    }
    ctx->pc = 0x10933Cu;
    // 0x10933c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x109340: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x109340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x109344: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109348: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x109348u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10934c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x10934Cu;
    {
        const bool branch_taken_0x10934c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x109350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10934Cu;
        // 0x109350: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10934c) {
            ctx->pc = 0x1092E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1092e4;
        }
    }
    ctx->pc = 0x109354u;
    // 0x109354: 0x3e00008  jr          $ra
    ctx->pc = 0x109354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10935Cu;
    // 0x10935c: 0x0  nop
    ctx->pc = 0x10935cu;
    // NOP
label_109360:
    // 0x109360: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109360u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109364: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109368: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10936c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10936cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109370: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109370u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109374: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x109374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109378: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x109378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10937c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10937cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_109380:
    // 0x109380: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x109384: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x109384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109388:
    // 0x109388: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109388u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10938c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x10938cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109390: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109390u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109394: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109394u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109398: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109398u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10939c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10939cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1093a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1093a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1093a4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1093a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1093a8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1093a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1093ac: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1093acu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1093b0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1093b0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1093b4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1093b4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1093b8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1093b8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1093bc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1093bcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1093c0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1093c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1093c4: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1093C4u;
    {
        const bool branch_taken_0x1093c4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C4u;
        // 0x1093c8: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093c4) {
            ctx->pc = 0x109388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109388;
        }
    }
    ctx->pc = 0x1093CCu;
    // 0x1093cc: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1093ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1093d0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1093d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1093d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1093d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1093d8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1093d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1093dc: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1093DCu;
    {
        const bool branch_taken_0x1093dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1093E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093DCu;
        // 0x1093e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093dc) {
            ctx->pc = 0x109388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109388;
        }
    }
    ctx->pc = 0x1093E4u;
    // 0x1093e4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1093e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1093e8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1093e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1093ec: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1093ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1093f0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1093f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1093f4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1093f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1093f8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1093f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1093fc: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1093FCu;
    {
        const bool branch_taken_0x1093fc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x109400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093FCu;
        // 0x109400: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093fc) {
            ctx->pc = 0x109380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109380;
        }
    }
    ctx->pc = 0x109404u;
    // 0x109404: 0x3e00008  jr          $ra
    ctx->pc = 0x109404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10940Cu;
    // 0x10940c: 0x0  nop
    ctx->pc = 0x10940cu;
    // NOP
label_109410:
    // 0x109410: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109410u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109414: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109418: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10941c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10941cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109420: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109420u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109424: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x109428: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109428u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10942c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10942cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x109430: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x109430u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109434: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x109434u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109438: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109438u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x10943c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x10943cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109440: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x109440u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x109444: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x109444u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109448: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x109448u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10944c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x10944Cu;
    {
        const bool branch_taken_0x10944c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10944Cu;
        // 0x109450: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10944c) {
            ctx->pc = 0x1094CCu;
            goto label_1094cc;
        }
    }
    ctx->pc = 0x109454u;
label_109454:
    // 0x109454: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109458: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x10945c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x10945cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109460: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x109460u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109464: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x109464u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x109468: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x109468u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10946c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10946cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109470: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x109470u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x109474: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x109474u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x109478: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x109478u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x10947c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x10947cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109480: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x109480u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x109484: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x109484u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109488: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x109488u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x10948c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x10948cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x109490: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x109490u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x109494: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x109494u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109498: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x109498u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x10949c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x10949cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1094a0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x1094a0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x1094a4: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x1094a4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1094a8: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1094a8u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1094ac: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x1094acu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1094b0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1094b0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1094b4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x1094b4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x1094b8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1094b8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1094bc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1094bcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1094c0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1094c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1094c4: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1094C4u;
    {
        const bool branch_taken_0x1094c4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1094C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094C4u;
        // 0x1094c8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094c4) {
            ctx->pc = 0x109454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109454;
        }
    }
    ctx->pc = 0x1094CCu;
label_1094cc:
    // 0x1094cc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1094ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1094d0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1094d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1094d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1094d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1094d8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1094d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1094dc: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1094DCu;
    {
        const bool branch_taken_0x1094dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1094E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094DCu;
        // 0x1094e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094dc) {
            ctx->pc = 0x109454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109454;
        }
    }
    ctx->pc = 0x1094E4u;
    // 0x1094e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1094E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1094E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1094ECu;
    // 0x1094ec: 0x0  nop
    ctx->pc = 0x1094ecu;
    // NOP
label_1094f0:
    // 0x1094f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1094f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1094f4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1094f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1094f8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1094f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1094fc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1094fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109500: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109500u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109504: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109504u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109508: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109508u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10950c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x10950cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109510: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x109510u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x109514: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109514u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_109518:
    // 0x109518: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10951c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10951cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109520: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109520u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109524: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109524u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109528: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109528u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10952c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x10952cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x109530: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x109530u;
    {
        const bool branch_taken_0x109530 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109530u;
        // 0x109534: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109530) {
            ctx->pc = 0x10958Cu;
            goto label_10958c;
        }
    }
    ctx->pc = 0x109538u;
label_109538:
    // 0x109538: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x10953c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x10953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109540: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109540u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109544: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109544u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109548: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109548u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10954c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10954cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109550: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x109550u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x109554: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109554u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109558: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109558u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x10955c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x10955cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109560: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x109560u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x109564: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x109564u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109568: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x109568u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10956c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x10956cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x109570: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x109570u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109574: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x109574u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x109578: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x109578u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x10957c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10957cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109580: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109580u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x109584: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x109584u;
    {
        const bool branch_taken_0x109584 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109584u;
        // 0x109588: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109584) {
            ctx->pc = 0x109538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109538;
        }
    }
    ctx->pc = 0x10958Cu;
label_10958c:
    // 0x10958c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10958cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x109590: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x109594: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109598: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10959c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10959cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1095a0: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1095A0u;
    {
        const bool branch_taken_0x1095a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1095A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095A0u;
        // 0x1095a4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095a0) {
            ctx->pc = 0x109538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109538;
        }
    }
    ctx->pc = 0x1095A8u;
    // 0x1095a8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1095a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1095ac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1095acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1095b0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1095b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1095b4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1095b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1095b8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1095b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1095bc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1095bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1095c0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1095c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1095c4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1095C4u;
    {
        const bool branch_taken_0x1095c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1095C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095C4u;
        // 0x1095c8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095c4) {
            ctx->pc = 0x109518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109518;
        }
    }
    ctx->pc = 0x1095CCu;
    // 0x1095cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1095CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1095D4u;
    // 0x1095d4: 0x0  nop
    ctx->pc = 0x1095d4u;
    // NOP
label_1095d8:
    // 0x1095d8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1095d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1095dc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1095dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1095e0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1095e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1095e4: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1095e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1095e8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1095e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1095ec: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1095ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1095f0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1095f0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1095f4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1095f4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1095f8: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1095f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1095fc: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1095fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x109600: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x109600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109604:
    // 0x109604: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x109604u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109608: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x109608u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10960c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10960cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109610: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x109610u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x109614: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x109614u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x109618: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x109618u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10961c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10961cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109620: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x109620u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x109624: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109624u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109628: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x109628u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x10962c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x10962cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109630: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x109630u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109634: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x109634u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x109638: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x109638u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10963c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x10963cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x109640: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x109640u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x109644: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x109644u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x109648: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x109648u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10964c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x10964cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109650: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x109650u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x109654: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x109654u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x109658: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x109658u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x10965c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x10965cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109660: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x109660u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109664: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x109664u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x109668: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x109668u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x10966c: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x10966cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x109670: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x109670u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109674: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x109674u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109678: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109678u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x10967c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x10967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x109680: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x109680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x109684: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x109684u;
    {
        const bool branch_taken_0x109684 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109684u;
        // 0x109688: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109684) {
            ctx->pc = 0x109604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109604;
        }
    }
    ctx->pc = 0x10968Cu;
    // 0x10968c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x109690: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x109690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x109694: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109698: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x109698u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10969c: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x10969Cu;
    {
        const bool branch_taken_0x10969c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1096A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10969Cu;
        // 0x1096a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10969c) {
            ctx->pc = 0x109604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109604;
        }
    }
    ctx->pc = 0x1096A4u;
    // 0x1096a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1096A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1096A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1096ACu;
    // 0x1096ac: 0x0  nop
    ctx->pc = 0x1096acu;
    // NOP
label_1096b0:
    // 0x1096b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1096b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1096b4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1096b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1096b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1096b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1096bc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1096bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1096c0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1096c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1096c4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1096c4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1096c8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1096c8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1096cc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1096ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1096d0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1096d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1096d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1096d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1096d8:
    // 0x1096d8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1096d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1096dc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1096dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1096e0:
    // 0x1096e0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1096e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1096e4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1096e4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1096e8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1096e8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1096ec: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1096ecu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1096f0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1096f0u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1096f4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1096f4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1096f8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1096f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1096fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1096fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x109700: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x109700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x109704: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109704u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109708: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109708u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10970c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10970cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109710: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109710u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109714: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x109714u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x109718: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x109718u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10971c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x10971cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109720: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x109720u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x109724: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x109724u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109728: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x109728u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x10972c: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x10972cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x109730: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x109730u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109734: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109734u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x109738: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x109738u;
    {
        const bool branch_taken_0x109738 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109738u;
        // 0x10973c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109738) {
            ctx->pc = 0x1096E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1096e0;
        }
    }
    ctx->pc = 0x109740u;
    // 0x109740: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x109744: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x109748: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10974c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10974cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x109750: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x109750u;
    {
        const bool branch_taken_0x109750 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109750u;
        // 0x109754: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109750) {
            ctx->pc = 0x1096E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1096e0;
        }
    }
    ctx->pc = 0x109758u;
    // 0x109758: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109758u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10975c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10975cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109760: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109764: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x109764u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x109768: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x109768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x10976c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10976cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x109770: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x109770u;
    {
        const bool branch_taken_0x109770 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x109774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109770u;
        // 0x109774: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109770) {
            ctx->pc = 0x1096D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1096d8;
        }
    }
    ctx->pc = 0x109778u;
    // 0x109778: 0x3e00008  jr          $ra
    ctx->pc = 0x109778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109780u;
label_109780:
    // 0x109780: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109780u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109784: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109788: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10978c: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x10978cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109790: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109790u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109794: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x109798: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109798u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10979c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10979cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1097a0: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1097a0u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1097a4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1097a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1097a8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1097a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1097ac: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1097acu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1097b0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1097b0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1097b4: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1097b4u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1097b8: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x1097b8u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x1097bc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1097bcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1097c0: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1097c0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1097c4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1097c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1097c8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x1097c8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1097cc: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x1097ccu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1097d0: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x1097d0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1097d4: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x1097d4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1097d8: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x1097d8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1097dc: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1097DCu;
    {
        const bool branch_taken_0x1097dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097DCu;
        // 0x1097e0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097dc) {
            ctx->pc = 0x109880u;
            goto label_109880;
        }
    }
    ctx->pc = 0x1097E4u;
label_1097e4:
    // 0x1097e4: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x1097e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1097e8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x1097e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x1097ec: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1097ecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1097f0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1097f0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1097f4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1097f4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1097f8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1097f8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1097fc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1097fcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x109800: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x109800u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x109804: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109804u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109808: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x109808u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10980c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x10980cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109810: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x109810u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x109814: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x109814u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109818: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x109818u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x10981c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x10981cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x109820: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x109820u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x109824: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x109824u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x109828: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x109828u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x10982c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x10982cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109830: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x109830u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x109834: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x109834u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109838: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x109838u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x10983c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x10983cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x109840: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x109840u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x109844: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x109844u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109848: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x109848u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x10984c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x10984cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x109850: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x109850u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x109854: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109854u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109858: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109858u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10985c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x10985cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109860: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x109860u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109864: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x109864u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x109868: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x109868u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10986c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10986cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109870: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x109870u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x109874: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109874u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x109878: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x109878u;
    {
        const bool branch_taken_0x109878 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109878u;
        // 0x10987c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109878) {
            ctx->pc = 0x1097E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1097e4;
        }
    }
    ctx->pc = 0x109880u;
label_109880:
    // 0x109880: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x109880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x109884: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x109884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x109888: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10988c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10988cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x109890: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x109890u;
    {
        const bool branch_taken_0x109890 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109890u;
        // 0x109894: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109890) {
            ctx->pc = 0x1097E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1097e4;
        }
    }
    ctx->pc = 0x109898u;
    // 0x109898: 0x3e00008  jr          $ra
    ctx->pc = 0x109898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1098A0u;
label_1098a0:
    // 0x1098a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1098a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1098a4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1098a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1098a8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1098a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1098ac: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1098acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1098b0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1098b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1098b4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1098b4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1098b8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1098b8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1098bc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1098bcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1098c0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1098c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1098c4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1098c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1098c8:
    // 0x1098c8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1098c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1098cc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1098ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1098d0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1098d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1098d4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1098d4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1098d8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1098d8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1098dc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1098dcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1098e0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1098e0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1098e4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1098e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1098e8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1098e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1098ec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1098ecu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1098f0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1098f0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1098f4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1098f4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1098f8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1098F8u;
    {
        const bool branch_taken_0x1098f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098F8u;
        // 0x1098fc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098f8) {
            ctx->pc = 0x10996Cu;
            goto label_10996c;
        }
    }
    ctx->pc = 0x109900u;
label_109900:
    // 0x109900: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109904: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109904u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109908: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109908u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10990c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10990cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109910: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109910u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109914: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109914u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109918: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109918u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10991c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10991cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109920: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109924: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109924u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109928: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109928u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10992c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10992cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109930: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109930u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109934: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109934u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x109938: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x109938u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10993c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10993cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x109940: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x109940u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x109944: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x109944u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109948: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x109948u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x10994c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x10994cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109950: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x109950u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x109954: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x109954u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x109958: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x109958u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10995c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10995cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109960: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109960u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x109964: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x109964u;
    {
        const bool branch_taken_0x109964 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109964u;
        // 0x109968: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109964) {
            ctx->pc = 0x109900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109900;
        }
    }
    ctx->pc = 0x10996Cu;
label_10996c:
    // 0x10996c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10996cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x109970: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x109974: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109978: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10997c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10997cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x109980: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x109980u;
    {
        const bool branch_taken_0x109980 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109980u;
        // 0x109984: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109980) {
            ctx->pc = 0x109900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109900;
        }
    }
    ctx->pc = 0x109988u;
    // 0x109988: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109988u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10998c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10998cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109990: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109994: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x109994u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x109998: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x109998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x10999c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1099a0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1099a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1099a4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1099A4u;
    {
        const bool branch_taken_0x1099a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1099A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099A4u;
        // 0x1099a8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099a4) {
            ctx->pc = 0x1098C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1098c8;
        }
    }
    ctx->pc = 0x1099ACu;
    // 0x1099ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1099ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1099ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1099B4u;
    // 0x1099b4: 0x0  nop
    ctx->pc = 0x1099b4u;
    // NOP
    ctx->pc = 0x1099b8u;
}
