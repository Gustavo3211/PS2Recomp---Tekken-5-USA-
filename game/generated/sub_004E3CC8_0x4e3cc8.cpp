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

// Function: sub_004E3CC8
// Address: 0x4e3cc8 - 0x4e3fa8
void sub_004E3CC8_0x4e3cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3CC8_0x4e3cc8");
#endif

    switch (ctx->pc) {
        case 0x4e3de0u: goto label_4e3de0;
        case 0x4e3e00u: goto label_4e3e00;
        case 0x4e3e54u: goto label_4e3e54;
        case 0x4e3e70u: goto label_4e3e70;
        case 0x4e3e8cu: goto label_4e3e8c;
        case 0x4e3eb4u: goto label_4e3eb4;
        case 0x4e3ebcu: goto label_4e3ebc;
        default: break;
    }

    ctx->pc = 0x4e3cc8u;

    // 0x4e3cc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e3cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e3ccc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e3cd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e3cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e3cd4: 0x245411a0  addiu       $s4, $v0, 0x11A0
    ctx->pc = 0x4e3cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4512));
    // 0x4e3cd8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e3cdc: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4e3cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4e3ce0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e3ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e3ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e3ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e3ce8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4e3ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4e3cec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e3cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e3cf0: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4e3cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4e3cf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e3cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e3cf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e3cfc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e3cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e3d00: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11A0u));
    // 0x4e3d04: 0x84a22300  lh          $v0, 0x2300($a1)
    ctx->pc = 0x4e3d04u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F980u));
    // 0x4e3d08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3d0c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3d10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3d14: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e3d14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e3d18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3d1c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e3d1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3d20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4e3d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4e3d24: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3d28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3d2c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e3d30: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e3d30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3d34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E3D34u;
    {
        const bool branch_taken_0x4e3d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D34u;
        // 0x4e3d38: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3d34) {
            ctx->pc = 0x4E3D68u;
            goto label_4e3d68;
        }
    }
    ctx->pc = 0x4E3D3Cu;
    // 0x4e3d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e3d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e3d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e3d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e3d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e3d4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e3d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e3d50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e3d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e3d54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e3d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e3d58: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e3d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e3d5c: 0x813930e  j           func_4E4C38
    ctx->pc = 0x4E3D5Cu;
    ctx->pc = 0x4E3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3D5Cu;
    // 0x4e3d60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C38u, 0x4E3D5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E3D64u;
    // 0x4e3d64: 0x0  nop
    ctx->pc = 0x4e3d64u;
    // NOP
label_4e3d68:
    // 0x4e3d68: 0x84a223f8  lh          $v0, 0x23F8($a1)
    ctx->pc = 0x4e3d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 9208)));
    // 0x4e3d6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3d70: 0x96c5015e  lhu         $a1, 0x15E($s6)
    ctx->pc = 0x4e3d70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 350)));
    // 0x4e3d74: 0x1754025  or          $t0, $t3, $s5
    ctx->pc = 0x4e3d74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) | GPR_U64(ctx, 21));
    // 0x4e3d78: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3d7c: 0x86c70160  lh          $a3, 0x160($s6)
    ctx->pc = 0x4e3d7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x4e3d80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3d84: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4e3d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4e3d88: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e3d88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e3d8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3d90: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e3d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e3d94: 0xf53825  or          $a3, $a3, $s5
    ctx->pc = 0x4e3d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x4e3d98: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e3d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3d9c: 0x1055824  and         $t3, $t0, $a1
    ctx->pc = 0x4e3d9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4e3da0: 0x3566ffff  ori         $a2, $t3, 0xFFFF
    ctx->pc = 0x4e3da0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4e3da4: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4e3da4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4e3da8: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x4e3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x4e3dac: 0xc75824  and         $t3, $a2, $a3
    ctx->pc = 0x4e3dacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4e3db0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3db4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e3db4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e3db8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3dbc: 0x265211b0  addiu       $s2, $s2, 0x11B0
    ctx->pc = 0x4e3dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4528));
    // 0x4e3dc0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e3dc4: 0x263111a8  addiu       $s1, $s1, 0x11A8
    ctx->pc = 0x4e3dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4520));
    // 0x4e3dc8: 0x96900000  lhu         $s0, 0x0($s4)
    ctx->pc = 0x4e3dc8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3dcc: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x4e3dccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4e3dd0: 0x108443  sra         $s0, $s0, 17
    ctx->pc = 0x4e3dd0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 17));
    // 0x4e3dd4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4e3dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4e3dd8: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E3DD8u;
    SET_GPR_U32(ctx, 31, 0x4E3DE0u);
    ctx->pc = 0x4E3DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3DD8u;
    // 0x4e3ddc: 0x1708021  addu        $s0, $t3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E3DD8u, 0x4E3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3DE0u;
label_4e3de0:
    // 0x4e3de0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4e3de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3de4: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x4e3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x4e3de8: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x4e3de8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3dec: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4e3decu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e3df0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e3df0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e3df4: 0x261011a4  addiu       $s0, $s0, 0x11A4
    ctx->pc = 0x4e3df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4516));
    // 0x4e3df8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E3DF8u;
    SET_GPR_U32(ctx, 31, 0x4E3E00u);
    ctx->pc = 0x4E3DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3DF8u;
    // 0x4e3dfc: 0xa663000c  sh          $v1, 0xC($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E3DF8u, 0x4E3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E00u;
label_4e3e00:
    // 0x4e3e00: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e3e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3e04: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3e08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3e0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3e10: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e3e14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3e18: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e3e18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3e1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4e3e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3e20: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x4e3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x4e3e24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4e3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e3e28: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3e2c: 0xb52824  and         $a1, $a1, $s5
    ctx->pc = 0x4e3e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
    // 0x4e3e30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3e34: 0x952024  and         $a0, $a0, $s5
    ctx->pc = 0x4e3e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x4e3e38: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x4e3e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4e3e3c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e3e40: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4e3e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4e3e44: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4e3e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4e3e48: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4e3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4e3e4c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E3E4Cu;
    SET_GPR_U32(ctx, 31, 0x4E3E54u);
    ctx->pc = 0x4E3E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3E4Cu;
    // 0x4e3e50: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E3E4Cu, 0x4E3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E54u;
label_4e3e54:
    // 0x4e3e54: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3e58: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3e5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3e60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3e64: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e3e68: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E3E68u;
    SET_GPR_U32(ctx, 31, 0x4E3E70u);
    ctx->pc = 0x4E3E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3E68u;
    // 0x4e3e6c: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E3E68u, 0x4E3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E70u;
label_4e3e70:
    // 0x4e3e70: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e3e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3e74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e3e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3e7c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e3e7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e3e80: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4e3e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e3e84: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E3E84u;
    SET_GPR_U32(ctx, 31, 0x4E3E8Cu);
    ctx->pc = 0x4E3E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3E84u;
    // 0x4e3e88: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E3E84u, 0x4E3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E8Cu;
label_4e3e8c:
    // 0x4e3e8c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4e3e8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e3e90: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4e3e90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e3e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e3e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3e98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3e9c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4e3e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e3ea0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e3ea4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4e3ea8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4e3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4e3eac: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E3EACu;
    SET_GPR_U32(ctx, 31, 0x4E3EB4u);
    ctx->pc = 0x4E3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3EACu;
    // 0x4e3eb0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E3EACu, 0x4E3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3EB4u;
label_4e3eb4:
    // 0x4e3eb4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E3EB4u;
    SET_GPR_U32(ctx, 31, 0x4E3EBCu);
    ctx->pc = 0x4E3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3EB4u;
    // 0x4e3eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E3EB4u, 0x4E3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3EBCu;
label_4e3ebc:
    // 0x4e3ebc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4e3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e3ec0: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4e3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4e3ec4: 0x26680010  addiu       $t0, $s3, 0x10
    ctx->pc = 0x4e3ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4e3ec8: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4e3ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e3ecc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e3eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e3ed0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4e3ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4e3ed4: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x4e3ed4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3ed8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e3ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e3edc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4e3edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3ee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e3ee4: 0x26670014  addiu       $a3, $s3, 0x14
    ctx->pc = 0x4e3ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4e3ee8: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4e3ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4e3eec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e3eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e3ef0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e3ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e3ef4: 0x26690018  addiu       $t1, $s3, 0x18
    ctx->pc = 0x4e3ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4e3ef8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4e3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4e3efc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x4e3efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4e3f00: 0x240bc000  addiu       $t3, $zero, -0x4000
    ctx->pc = 0x4e3f00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x4e3f04: 0x340afffd  ori         $t2, $zero, 0xFFFD
    ctx->pc = 0x4e3f04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x4e3f08: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4e3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4e3f0c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4e3f0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e3f10: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4e3f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4e3f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3f18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e3f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e3f1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e3f20: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4e3f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e3f24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3f28: 0xd53025  or          $a2, $a2, $s5
    ctx->pc = 0x4e3f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    // 0x4e3f2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e3f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e3f30: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4e3f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4e3f34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e3f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e3f38: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4e3f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4e3f3c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e3f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e3f40: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e3f44: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3f48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e3f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e3f4c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4e3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4e3f50: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x4e3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4e3f54: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e3f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e3f58: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x4e3f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x4e3f5c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e3f5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e3f60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4e3f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4e3f64: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4e3f64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4e3f68: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4e3f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3f6c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e3f70: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e3f74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e3f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3f78: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e3f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e3f7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e3f7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e3f80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e3f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e3f88: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4e3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4e3f8c: 0xa664015e  sh          $a0, 0x15E($s3)
    ctx->pc = 0x4e3f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e3f90: 0xa66b0160  sh          $t3, 0x160($s3)
    ctx->pc = 0x4e3f90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 11));
    // 0x4e3f94: 0xa66a0162  sh          $t2, 0x162($s3)
    ctx->pc = 0x4e3f94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 354), (uint16_t)GPR_U32(ctx, 10));
    // 0x4e3f98: 0xa6600164  sh          $zero, 0x164($s3)
    ctx->pc = 0x4e3f98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e3f9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e3f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e3fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3FA0u;
        // 0x4e3fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3FA8u;
}
