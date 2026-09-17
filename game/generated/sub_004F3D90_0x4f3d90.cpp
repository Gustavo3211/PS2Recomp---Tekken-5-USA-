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

// Function: sub_004F3D90
// Address: 0x4f3d90 - 0x4f3fb8
void sub_004F3D90_0x4f3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3D90_0x4f3d90");
#endif

    switch (ctx->pc) {
        case 0x4f3dacu: goto label_4f3dac;
        case 0x4f3dc8u: goto label_4f3dc8;
        default: break;
    }

    ctx->pc = 0x4f3d90u;

    // 0x4f3d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f3d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f3d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3d9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f3d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f3da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f3da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f3da4: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F3DA4u;
    SET_GPR_U32(ctx, 31, 0x4F3DACu);
    ctx->pc = 0x4F3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3DA4u;
    // 0x4f3da8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F3DA4u, 0x4F3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3DACu;
label_4f3dac:
    // 0x4f3dac: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f3db0: 0xac621258  sw          $v0, 0x1258($v1)
    ctx->pc = 0x4f3db0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1258u, _value); } while (0);
    // 0x4f3db4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f3db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3db8: 0x442000f  bltzl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4F3DB8u;
    {
        const bool branch_taken_0x4f3db8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f3db8) {
            ctx->pc = 0x4F3DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3DB8u;
            // 0x4f3dbc: 0x8e110140  lw          $s1, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3DF8u;
            goto label_4f3df8;
        }
    }
    ctx->pc = 0x4F3DC0u;
    // 0x4f3dc0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F3DC0u;
    SET_GPR_U32(ctx, 31, 0x4F3DC8u);
    ctx->pc = 0x4F3DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3DC0u;
    // 0x4f3dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F3DC0u, 0x4F3DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3DC8u;
label_4f3dc8:
    // 0x4f3dc8: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x4f3dc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4f3dcc: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x4f3dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4f3dd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f3dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f3dd4: 0x96040016  lhu         $a0, 0x16($s0)
    ctx->pc = 0x4f3dd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4f3dd8: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x4f3dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f3ddc: 0xa6040132  sh          $a0, 0x132($s0)
    ctx->pc = 0x4f3ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f3de0: 0xa6020134  sh          $v0, 0x134($s0)
    ctx->pc = 0x4f3de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3de4: 0xa60501b6  sh          $a1, 0x1B6($s0)
    ctx->pc = 0x4f3de4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f3de8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f3de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3dec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f3decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f3df0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f3df0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3df4: 0x8e110140  lw          $s1, 0x140($s0)
    ctx->pc = 0x4f3df4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4f3df8:
    // 0x4f3df8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f3dfc: 0x24581254  addiu       $t8, $v0, 0x1254
    ctx->pc = 0x4f3dfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4692));
    // 0x4f3e00: 0xaf110000  sw          $s1, 0x0($t8)
    ctx->pc = 0x4f3e00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x7F1254u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1254u, _value); } while (0);
    // 0x4f3e04: 0x862201b4  lh          $v0, 0x1B4($s1)
    ctx->pc = 0x4f3e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x4f3e08: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F3E08u;
    {
        const bool branch_taken_0x4f3e08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3E08u;
        // 0x4f3e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3e08) {
            ctx->pc = 0x4F3E28u;
            goto label_4f3e28;
        }
    }
    ctx->pc = 0x4F3E10u;
    // 0x4f3e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f3e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3e14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f3e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f3e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3e1c: 0x813d180  j           func_4F4600
    ctx->pc = 0x4F3E1Cu;
    ctx->pc = 0x4F3E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3E1Cu;
    // 0x4f3e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4600u, 0x4F3E1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F3E24u;
    // 0x4f3e24: 0x0  nop
    ctx->pc = 0x4f3e24u;
    // NOP
label_4f3e28:
    // 0x4f3e28: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4f3e28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4f3e2c: 0x86020130  lh          $v0, 0x130($s0)
    ctx->pc = 0x4f3e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x4f3e30: 0x24e7123c  addiu       $a3, $a3, 0x123C
    ctx->pc = 0x4f3e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4668));
    // 0x4f3e34: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4f3e34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3e38: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F123Cu));
    // 0x4f3e3c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f3e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f3e40: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4f3e40u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4f3e44: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4f3e44u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4f3e48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3e4c: 0x256b1240  addiu       $t3, $t3, 0x1240
    ctx->pc = 0x4f3e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4672));
    // 0x4f3e50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3e54: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4f3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f3e58: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f3e5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3e60: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f3e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f3e64: 0x258c1244  addiu       $t4, $t4, 0x1244
    ctx->pc = 0x4f3e64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4676));
    // 0x4f3e68: 0x86020132  lh          $v0, 0x132($s0)
    ctx->pc = 0x4f3e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x4f3e6c: 0x260d0010  addiu       $t5, $s0, 0x10
    ctx->pc = 0x4f3e6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4f3e70: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4f3e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f3e74: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x4f3e74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4f3e78: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f3e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f3e7c: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x4f3e7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f3e80: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f3e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f3e84: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f3e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f3e88: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4f3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4f3e8c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f3e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f3e90: 0x260f0018  addiu       $t7, $s0, 0x18
    ctx->pc = 0x4f3e90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4f3e94: 0x86020134  lh          $v0, 0x134($s0)
    ctx->pc = 0x4f3e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x4f3e98: 0x85680000  lh          $t0, 0x0($t3)
    ctx->pc = 0x4f3e98u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f3e9c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f3e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f3ea0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f3ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f3ea4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4f3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4f3ea8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f3ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f3eac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4f3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4f3eb0: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4f3eb0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f3eb4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4f3eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4f3eb8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f3eb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f3ebc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4f3ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4f3ec0: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4f3ec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4f3ec4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f3ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4f3ec8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f3ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f3ecc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4f3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4f3ed0: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4f3ed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f3ed4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4f3ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4f3ed8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f3ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f3edc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f3ee0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4f3ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f3ee4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3ee8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x4f3ee8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x4f3eec: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4f3eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4f3ef0: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4f3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4f3ef4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4f3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4f3ef8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4f3ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4f3efc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f3efcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f3f00: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4f3f00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4f3f04: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x4f3f04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x4f3f08: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4f3f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4f3f0c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4f3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4f3f10: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4f3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f3f14: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f3f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f3f18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f3f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f3f1c: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4f3f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4f3f20: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4f3f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f3f24: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4f3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f3f28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f3f2c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f3f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f3f30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3f34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f3f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f3f38: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4f3f38u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4f3f3c: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4f3f3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f3f40: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4f3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f3f44: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f3f48: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f3f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f3f4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3f50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f3f54: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4f3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4f3f58: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4f3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f3f5c: 0x94620022  lhu         $v0, 0x22($v1)
    ctx->pc = 0x4f3f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x4f3f60: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x4f3f60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3f64: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4f3f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f3f68: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x4f3f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x4f3f6c: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x4f3f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3f70: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4f3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f3f74: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x4f3f74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x4f3f78: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x4f3f78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3f7c: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4f3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f3f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f3f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3f84: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x4f3f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x4f3f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f3f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3f8c: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x4f3f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3f90: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4f3f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f3f94: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x4f3f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x4f3f98: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x4f3f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3f9c: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4f3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f3fa0: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x4f3fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x4f3fa4: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x4f3fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f3fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3fac: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3FACu;
        // 0x4f3fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3FB4u;
    // 0x4f3fb4: 0x0  nop
    ctx->pc = 0x4f3fb4u;
    // NOP
    ctx->pc = 0x4f3fb8u;
}
