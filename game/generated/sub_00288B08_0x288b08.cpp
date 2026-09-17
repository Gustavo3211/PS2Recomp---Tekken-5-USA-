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

// Function: sub_00288B08
// Address: 0x288b08 - 0x289108
void sub_00288B08_0x288b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288B08_0x288b08");
#endif

    switch (ctx->pc) {
        case 0x288b54u: goto label_288b54;
        case 0x288f3cu: goto label_288f3c;
        case 0x288f54u: goto label_288f54;
        case 0x288f64u: goto label_288f64;
        case 0x288fd4u: goto label_288fd4;
        case 0x289034u: goto label_289034;
        case 0x2890b4u: goto label_2890b4;
        case 0x2890d8u: goto label_2890d8;
        default: break;
    }

    ctx->pc = 0x288b08u;

    // 0x288b08: 0x8f82b388  lw          $v0, -0x4C78($gp)
    ctx->pc = 0x288b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947720)));
    // 0x288b0c: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x288b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x288b10: 0xffbe0430  sd          $fp, 0x430($sp)
    ctx->pc = 0x288b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 30));
    // 0x288b14: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x288b14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b18: 0xffb003f0  sd          $s0, 0x3F0($sp)
    ctx->pc = 0x288b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 16));
    // 0x288b1c: 0xffb103f8  sd          $s1, 0x3F8($sp)
    ctx->pc = 0x288b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1016), GPR_U64(ctx, 17));
    // 0x288b20: 0xffb20400  sd          $s2, 0x400($sp)
    ctx->pc = 0x288b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 18));
    // 0x288b24: 0xffb30408  sd          $s3, 0x408($sp)
    ctx->pc = 0x288b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 19));
    // 0x288b28: 0xffb40410  sd          $s4, 0x410($sp)
    ctx->pc = 0x288b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 20));
    // 0x288b2c: 0xffb50418  sd          $s5, 0x418($sp)
    ctx->pc = 0x288b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 21));
    // 0x288b30: 0xffb60420  sd          $s6, 0x420($sp)
    ctx->pc = 0x288b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 22));
    // 0x288b34: 0xffb70428  sd          $s7, 0x428($sp)
    ctx->pc = 0x288b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 23));
    // 0x288b38: 0x14400155  bnez        $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x288B38u;
    {
        const bool branch_taken_0x288b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B38u;
        // 0x288b3c: 0xffbf0438  sd          $ra, 0x438($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b38) {
            ctx->pc = 0x289090u;
            goto label_289090;
        }
    }
    ctx->pc = 0x288B40u;
    // 0x288b40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b48: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x288b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x288b4c: 0xc04a151  jal         func_128544
    ctx->pc = 0x288B4Cu;
    SET_GPR_U32(ctx, 31, 0x288B54u);
    ctx->pc = 0x288B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B4Cu;
    // 0x288b50: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x288B4Cu, 0x288B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B54u;
label_288b54:
    // 0x288b54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x288b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288b58: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x288b58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x288b5c: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x288b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x288b60: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x288b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288b64: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x288b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288b68: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x288b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288b6c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x288b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x288b70: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x288b70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x288b74: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x288b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x288b78: 0x25089830  addiu       $t0, $t0, -0x67D0
    ctx->pc = 0x288b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940720));
    // 0x288b7c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x288b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x288b80: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x288b80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x288b84: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x288b84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x288b88: 0x24140017  addiu       $s4, $zero, 0x17
    ctx->pc = 0x288b88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x288b8c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x288b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x288b90: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x288b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x288b94: 0x27a4033c  addiu       $a0, $sp, 0x33C
    ctx->pc = 0x288b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 828));
    // 0x288b98: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x288b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x288b9c: 0x2418001a  addiu       $t8, $zero, 0x1A
    ctx->pc = 0x288b9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x288ba0: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x288ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
    // 0x288ba4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x288ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x288ba8: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x288ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x288bac: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x288bacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x288bb0: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x288bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x288bb4: 0x3c0e0048  lui         $t6, 0x48
    ctx->pc = 0x288bb4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)72 << 16));
    // 0x288bb8: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x288bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x288bbc: 0x3c0d0048  lui         $t5, 0x48
    ctx->pc = 0x288bbcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)72 << 16));
    // 0x288bc0: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x288bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x288bc4: 0x3c0f0048  lui         $t7, 0x48
    ctx->pc = 0x288bc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)72 << 16));
    // 0x288bc8: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x288bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x288bcc: 0x25ad9858  addiu       $t5, $t5, -0x67A8
    ctx->pc = 0x288bccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294940760));
    // 0x288bd0: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x288bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x288bd4: 0x25ce9840  addiu       $t6, $t6, -0x67C0
    ctx->pc = 0x288bd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294940736));
    // 0x288bd8: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x288bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x288bdc: 0x25ef9870  addiu       $t7, $t7, -0x6790
    ctx->pc = 0x288bdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940784));
    // 0x288be0: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x288be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x288be4: 0x24170012  addiu       $s7, $zero, 0x12
    ctx->pc = 0x288be4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x288be8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x288be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x288bec: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x288becu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x288bf0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x288bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x288bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bf8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x288bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x288bfc: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x288bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x288c00: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x288c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x288c04: 0x26d633c0  addiu       $s6, $s6, 0x33C0
    ctx->pc = 0x288c04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 13248));
    // 0x288c08: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x288c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
    // 0x288c0c: 0xafb10054  sw          $s1, 0x54($sp)
    ctx->pc = 0x288c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 17));
    // 0x288c10: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x288c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x288c14: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x288c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x288c18: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x288c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x288c1c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x288c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x288c20: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x288c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
    // 0x288c24: 0xafb3006c  sw          $s3, 0x6C($sp)
    ctx->pc = 0x288c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
    // 0x288c28: 0xafb30070  sw          $s3, 0x70($sp)
    ctx->pc = 0x288c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 19));
    // 0x288c2c: 0xafac0074  sw          $t4, 0x74($sp)
    ctx->pc = 0x288c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 12));
    // 0x288c30: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x288c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x288c34: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x288c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x288c38: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x288c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x288c3c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x288c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x288c40: 0xafb0008c  sw          $s0, 0x8C($sp)
    ctx->pc = 0x288c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 16));
    // 0x288c44: 0xafac0094  sw          $t4, 0x94($sp)
    ctx->pc = 0x288c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 12));
    // 0x288c48: 0xafb90098  sw          $t9, 0x98($sp)
    ctx->pc = 0x288c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 25));
    // 0x288c4c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x288c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x288c50: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x288c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x288c54: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x288c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x288c58: 0xafa80114  sw          $t0, 0x114($sp)
    ctx->pc = 0x288c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 8));
    // 0x288c5c: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x288c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x288c60: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x288c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
    // 0x288c64: 0xafa900e0  sw          $t1, 0xE0($sp)
    ctx->pc = 0x288c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 9));
    // 0x288c68: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x288c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x288c6c: 0x3403e400  ori         $v1, $zero, 0xE400
    ctx->pc = 0x288c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x288c70: 0xafa80124  sw          $t0, 0x124($sp)
    ctx->pc = 0x288c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 8));
    // 0x288c74: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x288c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x288c78: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x288c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x288c7c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x288c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x288c80: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x288c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x288c84: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x288c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x288c88: 0xafb000b4  sw          $s0, 0xB4($sp)
    ctx->pc = 0x288c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
    // 0x288c8c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x288c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x288c90: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x288c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x288c94: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x288c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x288c98: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x288c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x288c9c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x288c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x288ca0: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x288ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x288ca4: 0xafaa00d8  sw          $t2, 0xD8($sp)
    ctx->pc = 0x288ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 10));
    // 0x288ca8: 0xafb100dc  sw          $s1, 0xDC($sp)
    ctx->pc = 0x288ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 17));
    // 0x288cac: 0xafab00e4  sw          $t3, 0xE4($sp)
    ctx->pc = 0x288cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 11));
    // 0x288cb0: 0xafb400e8  sw          $s4, 0xE8($sp)
    ctx->pc = 0x288cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 20));
    // 0x288cb4: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x288cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x288cb8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x288cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x288cbc: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x288cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x288cc0: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x288cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x288cc4: 0xafb80104  sw          $t8, 0x104($sp)
    ctx->pc = 0x288cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 24));
    // 0x288cc8: 0xafb10100  sw          $s1, 0x100($sp)
    ctx->pc = 0x288cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 17));
    // 0x288ccc: 0xafaa0108  sw          $t2, 0x108($sp)
    ctx->pc = 0x288cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 10));
    // 0x288cd0: 0xafb4010c  sw          $s4, 0x10C($sp)
    ctx->pc = 0x288cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 20));
    // 0x288cd4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x288cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x288cd8: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x288cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x288cdc: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x288cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x288ce0: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x288ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
    // 0x288ce4: 0xafa70128  sw          $a3, 0x128($sp)
    ctx->pc = 0x288ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 7));
    // 0x288ce8: 0xafa90148  sw          $t1, 0x148($sp)
    ctx->pc = 0x288ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
    // 0x288cec: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x288cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x288cf0: 0xafa9014c  sw          $t1, 0x14C($sp)
    ctx->pc = 0x288cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 9));
    // 0x288cf4: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x288cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x288cf8: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x288cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x288cfc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x288cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x288d00: 0xafa80174  sw          $t0, 0x174($sp)
    ctx->pc = 0x288d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 8));
    // 0x288d04: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x288d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x288d08: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x288d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
    // 0x288d0c: 0xafa70194  sw          $a3, 0x194($sp)
    ctx->pc = 0x288d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 7));
    // 0x288d10: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x288d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x288d14: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x288d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x288d18: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x288d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x288d1c: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x288d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x288d20: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x288d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x288d24: 0xafb00140  sw          $s0, 0x140($sp)
    ctx->pc = 0x288d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 16));
    // 0x288d28: 0xafb30144  sw          $s3, 0x144($sp)
    ctx->pc = 0x288d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 19));
    // 0x288d2c: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x288d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x288d30: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x288d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x288d34: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x288d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x288d38: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x288d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x288d3c: 0xafb00164  sw          $s0, 0x164($sp)
    ctx->pc = 0x288d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 16));
    // 0x288d40: 0xafab0168  sw          $t3, 0x168($sp)
    ctx->pc = 0x288d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 11));
    // 0x288d44: 0xafb1016c  sw          $s1, 0x16C($sp)
    ctx->pc = 0x288d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 17));
    // 0x288d48: 0xafb50170  sw          $s5, 0x170($sp)
    ctx->pc = 0x288d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 21));
    // 0x288d4c: 0xafb40178  sw          $s4, 0x178($sp)
    ctx->pc = 0x288d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 20));
    // 0x288d50: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x288d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x288d54: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x288d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x288d58: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x288d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x288d5c: 0xafaa0190  sw          $t2, 0x190($sp)
    ctx->pc = 0x288d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 10));
    // 0x288d60: 0xafb0018c  sw          $s0, 0x18C($sp)
    ctx->pc = 0x288d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 16));
    // 0x288d64: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x288d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x288d68: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x288d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x288d6c: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x288d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x288d70: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x288d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x288d74: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x288d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    // 0x288d78: 0xafb001ac  sw          $s0, 0x1AC($sp)
    ctx->pc = 0x288d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 16));
    // 0x288d7c: 0xafb901b8  sw          $t9, 0x1B8($sp)
    ctx->pc = 0x288d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 25));
    // 0x288d80: 0xafa901b4  sw          $t1, 0x1B4($sp)
    ctx->pc = 0x288d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 9));
    // 0x288d84: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x288d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x288d88: 0xafa701bc  sw          $a3, 0x1BC($sp)
    ctx->pc = 0x288d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 7));
    // 0x288d8c: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x288d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x288d90: 0xafb301b0  sw          $s3, 0x1B0($sp)
    ctx->pc = 0x288d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 19));
    // 0x288d94: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x288d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
    // 0x288d98: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x288d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    // 0x288d9c: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x288d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x288da0: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x288da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x288da4: 0xafb001d0  sw          $s0, 0x1D0($sp)
    ctx->pc = 0x288da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 16));
    // 0x288da8: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x288da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
    // 0x288dac: 0xafab01d8  sw          $t3, 0x1D8($sp)
    ctx->pc = 0x288dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 11));
    // 0x288db0: 0xafb401e0  sw          $s4, 0x1E0($sp)
    ctx->pc = 0x288db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 20));
    // 0x288db4: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x288db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
    // 0x288db8: 0xafa001e8  sw          $zero, 0x1E8($sp)
    ctx->pc = 0x288db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
    // 0x288dbc: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x288dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x288dc0: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x288dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x288dc4: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x288dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x288dc8: 0xafab01fc  sw          $t3, 0x1FC($sp)
    ctx->pc = 0x288dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 11));
    // 0x288dcc: 0xafb201f8  sw          $s2, 0x1F8($sp)
    ctx->pc = 0x288dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 18));
    // 0x288dd0: 0xafa80200  sw          $t0, 0x200($sp)
    ctx->pc = 0x288dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 8));
    // 0x288dd4: 0x8fc30060  lw          $v1, 0x60($fp)
    ctx->pc = 0x288dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x288dd8: 0x8fc8005c  lw          $t0, 0x5C($fp)
    ctx->pc = 0x288dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x288ddc: 0xafa90224  sw          $t1, 0x224($sp)
    ctx->pc = 0x288ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 9));
    // 0x288de0: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x288de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x288de4: 0xafa9021c  sw          $t1, 0x21C($sp)
    ctx->pc = 0x288de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 9));
    // 0x288de8: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x288de8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x288dec: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x288decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x288df0: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x288df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x288df4: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x288df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x288df8: 0xafa00208  sw          $zero, 0x208($sp)
    ctx->pc = 0x288df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
    // 0x288dfc: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x288dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x288e00: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x288e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x288e04: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x288e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x288e08: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x288e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x288e0c: 0xafb10220  sw          $s1, 0x220($sp)
    ctx->pc = 0x288e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 17));
    // 0x288e10: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x288e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x288e14: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x288e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
    // 0x288e18: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x288e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x288e1c: 0xafa8025c  sw          $t0, 0x25C($sp)
    ctx->pc = 0x288e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 8));
    // 0x288e20: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x288e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x288e24: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x288e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
    // 0x288e28: 0xafa302b4  sw          $v1, 0x2B4($sp)
    ctx->pc = 0x288e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 3));
    // 0x288e2c: 0x240303c4  addiu       $v1, $zero, 0x3C4
    ctx->pc = 0x288e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x288e30: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x288e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x288e34: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x288e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x288e38: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x288e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x288e3c: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x288e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x288e40: 0xafa80288  sw          $t0, 0x288($sp)
    ctx->pc = 0x288e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 8));
    // 0x288e44: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x288e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x288e48: 0xafa90290  sw          $t1, 0x290($sp)
    ctx->pc = 0x288e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 9));
    // 0x288e4c: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x288e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x288e50: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x288e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x288e54: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x288e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x288e58: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x288e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
    // 0x288e5c: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x288e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x288e60: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x288e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x288e64: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x288e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x288e68: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x288e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
    // 0x288e6c: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x288e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    // 0x288e70: 0xafae0258  sw          $t6, 0x258($sp)
    ctx->pc = 0x288e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 14));
    // 0x288e74: 0xafb50240  sw          $s5, 0x240($sp)
    ctx->pc = 0x288e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 21));
    // 0x288e78: 0xafb10244  sw          $s1, 0x244($sp)
    ctx->pc = 0x288e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 17));
    // 0x288e7c: 0xafb70248  sw          $s7, 0x248($sp)
    ctx->pc = 0x288e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 23));
    // 0x288e80: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x288e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
    // 0x288e84: 0xafb7026c  sw          $s7, 0x26C($sp)
    ctx->pc = 0x288e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 23));
    // 0x288e88: 0xafb10268  sw          $s1, 0x268($sp)
    ctx->pc = 0x288e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 17));
    // 0x288e8c: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x288e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
    // 0x288e90: 0xafad027c  sw          $t5, 0x27C($sp)
    ctx->pc = 0x288e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 13));
    // 0x288e94: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x288e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x288e98: 0xafa00284  sw          $zero, 0x284($sp)
    ctx->pc = 0x288e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 0));
    // 0x288e9c: 0xafaf02a0  sw          $t7, 0x2A0($sp)
    ctx->pc = 0x288e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 15));
    // 0x288ea0: 0xafb1028c  sw          $s1, 0x28C($sp)
    ctx->pc = 0x288ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 17));
    // 0x288ea4: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x288ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
    // 0x288ea8: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x288ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
    // 0x288eac: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x288eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
    // 0x288eb0: 0xafad02c4  sw          $t5, 0x2C4($sp)
    ctx->pc = 0x288eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 13));
    // 0x288eb4: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x288eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
    // 0x288eb8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x288eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x288ebc: 0xafa702fc  sw          $a3, 0x2FC($sp)
    ctx->pc = 0x288ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 7));
    // 0x288ec0: 0xafa30324  sw          $v1, 0x324($sp)
    ctx->pc = 0x288ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 3));
    // 0x288ec4: 0xafb602c8  sw          $s6, 0x2C8($sp)
    ctx->pc = 0x288ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 22));
    // 0x288ec8: 0xafb502ac  sw          $s5, 0x2AC($sp)
    ctx->pc = 0x288ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 21));
    // 0x288ecc: 0xafb102b0  sw          $s1, 0x2B0($sp)
    ctx->pc = 0x288eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 17));
    // 0x288ed0: 0xafa002cc  sw          $zero, 0x2CC($sp)
    ctx->pc = 0x288ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
    // 0x288ed4: 0xafa802d8  sw          $t0, 0x2D8($sp)
    ctx->pc = 0x288ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 8));
    // 0x288ed8: 0xafa802d0  sw          $t0, 0x2D0($sp)
    ctx->pc = 0x288ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 8));
    // 0x288edc: 0xafb102d4  sw          $s1, 0x2D4($sp)
    ctx->pc = 0x288edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 17));
    // 0x288ee0: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x288ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
    // 0x288ee4: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x288ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
    // 0x288ee8: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x288ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x288eec: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x288eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
    // 0x288ef0: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x288ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
    // 0x288ef4: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x288ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
    // 0x288ef8: 0xafa902f8  sw          $t1, 0x2F8($sp)
    ctx->pc = 0x288ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 9));
    // 0x288efc: 0xafb002f4  sw          $s0, 0x2F4($sp)
    ctx->pc = 0x288efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 16));
    // 0x288f00: 0xafa00300  sw          $zero, 0x300($sp)
    ctx->pc = 0x288f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 0));
    // 0x288f04: 0xafa00304  sw          $zero, 0x304($sp)
    ctx->pc = 0x288f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 0));
    // 0x288f08: 0xafa00308  sw          $zero, 0x308($sp)
    ctx->pc = 0x288f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 0));
    // 0x288f0c: 0xafa0030c  sw          $zero, 0x30C($sp)
    ctx->pc = 0x288f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 0));
    // 0x288f10: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x288f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
    // 0x288f14: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x288f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
    // 0x288f18: 0xafb5031c  sw          $s5, 0x31C($sp)
    ctx->pc = 0x288f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 21));
    // 0x288f1c: 0xafa20320  sw          $v0, 0x320($sp)
    ctx->pc = 0x288f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
    // 0x288f20: 0xafb00318  sw          $s0, 0x318($sp)
    ctx->pc = 0x288f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 16));
    // 0x288f24: 0xafa00328  sw          $zero, 0x328($sp)
    ctx->pc = 0x288f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 0));
    // 0x288f28: 0xafa0032c  sw          $zero, 0x32C($sp)
    ctx->pc = 0x288f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 0));
    // 0x288f2c: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x288f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
    // 0x288f30: 0xafa00334  sw          $zero, 0x334($sp)
    ctx->pc = 0x288f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 0));
    // 0x288f34: 0xc04a151  jal         func_128544
    ctx->pc = 0x288F34u;
    SET_GPR_U32(ctx, 31, 0x288F3Cu);
    ctx->pc = 0x288F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F34u;
    // 0x288f38: 0xafa00338  sw          $zero, 0x338($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x288F34u, 0x288F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F3Cu;
label_288f3c:
    // 0x288f3c: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x288f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x288f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f44: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x288f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x288f48: 0xafb2033c  sw          $s2, 0x33C($sp)
    ctx->pc = 0x288f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 18));
    // 0x288f4c: 0xc04a151  jal         func_128544
    ctx->pc = 0x288F4Cu;
    SET_GPR_U32(ctx, 31, 0x288F54u);
    ctx->pc = 0x288F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F4Cu;
    // 0x288f50: 0xafb00344  sw          $s0, 0x344($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x288F4Cu, 0x288F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F54u;
label_288f54:
    // 0x288f54: 0x27a40384  addiu       $a0, $sp, 0x384
    ctx->pc = 0x288f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
    // 0x288f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f5c: 0xc04a151  jal         func_128544
    ctx->pc = 0x288F5Cu;
    SET_GPR_U32(ctx, 31, 0x288F64u);
    ctx->pc = 0x288F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F5Cu;
    // 0x288f60: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x288F5Cu, 0x288F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F64u;
label_288f64:
    // 0x288f64: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x288f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x288f68: 0x24a561c8  addiu       $a1, $a1, 0x61C8
    ctx->pc = 0x288f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25032));
    // 0x288f6c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x288f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x288f70: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x288f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x288f74: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x288f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x288f78: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x288f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x288f7c: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x288f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x288f80: 0xafa403a8  sw          $a0, 0x3A8($sp)
    ctx->pc = 0x288f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 4));
    // 0x288f84: 0xafb103ac  sw          $s1, 0x3AC($sp)
    ctx->pc = 0x288f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 17));
    // 0x288f88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f8c: 0xafa603b4  sw          $a2, 0x3B4($sp)
    ctx->pc = 0x288f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 948), GPR_U32(ctx, 6));
    // 0x288f90: 0xafb403b8  sw          $s4, 0x3B8($sp)
    ctx->pc = 0x288f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 20));
    // 0x288f94: 0xafa703b0  sw          $a3, 0x3B0($sp)
    ctx->pc = 0x288f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 7));
    // 0x288f98: 0xafa003bc  sw          $zero, 0x3BC($sp)
    ctx->pc = 0x288f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 0));
    // 0x288f9c: 0xafa003c0  sw          $zero, 0x3C0($sp)
    ctx->pc = 0x288f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 0));
    // 0x288fa0: 0xafa003c4  sw          $zero, 0x3C4($sp)
    ctx->pc = 0x288fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 0));
    // 0x288fa4: 0xafa003c8  sw          $zero, 0x3C8($sp)
    ctx->pc = 0x288fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 0));
    // 0x288fa8: 0xafb303cc  sw          $s3, 0x3CC($sp)
    ctx->pc = 0x288fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 19));
    // 0x288fac: 0xafa703d0  sw          $a3, 0x3D0($sp)
    ctx->pc = 0x288facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 7));
    // 0x288fb0: 0xafa203d4  sw          $v0, 0x3D4($sp)
    ctx->pc = 0x288fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 2));
    // 0x288fb4: 0xafa003d8  sw          $zero, 0x3D8($sp)
    ctx->pc = 0x288fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 984), GPR_U32(ctx, 0));
    // 0x288fb8: 0xafa003dc  sw          $zero, 0x3DC($sp)
    ctx->pc = 0x288fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 0));
    // 0x288fbc: 0xafa003e0  sw          $zero, 0x3E0($sp)
    ctx->pc = 0x288fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 0));
    // 0x288fc0: 0xafa003e4  sw          $zero, 0x3E4($sp)
    ctx->pc = 0x288fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 0));
    // 0x288fc4: 0xafa003e8  sw          $zero, 0x3E8($sp)
    ctx->pc = 0x288fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 0));
    // 0x288fc8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x288FC8u;
    {
        const bool branch_taken_0x288fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FC8u;
        // 0x288fcc: 0xafa003ec  sw          $zero, 0x3EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fc8) {
            ctx->pc = 0x289030u;
            goto label_289030;
        }
    }
    ctx->pc = 0x288FD0u;
    // 0x288fd0: 0x27a203e0  addiu       $v0, $sp, 0x3E0
    ctx->pc = 0x288fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_288fd4:
    // 0x288fd4: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x288fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x288fd8: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x288fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x288fdc: 0x6889000f  ldl         $t1, 0xF($a0)
    ctx->pc = 0x288fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x288fe0: 0x6c890008  ldr         $t1, 0x8($a0)
    ctx->pc = 0x288fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x288fe4: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x288fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x288fe8: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x288fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x288fec: 0x6886001f  ldl         $a2, 0x1F($a0)
    ctx->pc = 0x288fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x288ff0: 0x6c860018  ldr         $a2, 0x18($a0)
    ctx->pc = 0x288ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x288ff4: 0xb0a80007  sdl         $t0, 0x7($a1)
    ctx->pc = 0x288ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288ff8: 0xb4a80000  sdr         $t0, 0x0($a1)
    ctx->pc = 0x288ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288ffc: 0xb0a9000f  sdl         $t1, 0xF($a1)
    ctx->pc = 0x288ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289000: 0xb4a90008  sdr         $t1, 0x8($a1)
    ctx->pc = 0x289000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289004: 0xb0a30017  sdl         $v1, 0x17($a1)
    ctx->pc = 0x289004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289008: 0xb4a30010  sdr         $v1, 0x10($a1)
    ctx->pc = 0x289008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28900c: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x28900cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289010: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x289010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289014: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x289014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x289018: 0x0  nop
    ctx->pc = 0x289018u;
    // NOP
    // 0x28901c: 0x0  nop
    ctx->pc = 0x28901cu;
    // NOP
    // 0x289020: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x289020u;
    {
        const bool branch_taken_0x289020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x289024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289020u;
        // 0x289024: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289020) {
            ctx->pc = 0x288FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288fd4;
        }
    }
    ctx->pc = 0x289028u;
    // 0x289028: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x289028u;
    {
        const bool branch_taken_0x289028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289028) {
            ctx->pc = 0x289068u;
            goto label_289068;
        }
    }
    ctx->pc = 0x289030u;
label_289030:
    // 0x289030: 0x27a203e0  addiu       $v0, $sp, 0x3E0
    ctx->pc = 0x289030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_289034:
    // 0x289034: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x289034u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289038: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x289038u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28903c: 0xdc890010  ld          $t1, 0x10($a0)
    ctx->pc = 0x28903cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x289040: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x289040u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x289044: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x289044u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x289048: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x289048u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x28904c: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x28904cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x289050: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x289050u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x289054: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x289054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x289058: 0x0  nop
    ctx->pc = 0x289058u;
    // NOP
    // 0x28905c: 0x0  nop
    ctx->pc = 0x28905cu;
    // NOP
    // 0x289060: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x289060u;
    {
        const bool branch_taken_0x289060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x289064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289060u;
        // 0x289064: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289060) {
            ctx->pc = 0x289034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289034;
        }
    }
    ctx->pc = 0x289068u;
label_289068:
    // 0x289068: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x289068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28906c: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x28906cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x289070: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x289070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x289074: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x289074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x289078: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x289078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28907c: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x28907cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289080: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x289080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289088: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x289088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28908c: 0xaf82b388  sw          $v0, -0x4C78($gp)
    ctx->pc = 0x28908cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947720), GPR_U32(ctx, 2));
label_289090:
    // 0x289090: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x289090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x289094: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x289094u;
    {
        const bool branch_taken_0x289094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289094u;
        // 0x289098: 0xdfb003f0  ld          $s0, 0x3F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289094) {
            ctx->pc = 0x2890DCu;
            goto label_2890dc;
        }
    }
    ctx->pc = 0x28909Cu;
    // 0x28909c: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x28909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x2890a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2890A0u;
    {
        const bool branch_taken_0x2890a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890A0u;
        // 0x2890a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890a0) {
            ctx->pc = 0x2890DCu;
            goto label_2890dc;
        }
    }
    ctx->pc = 0x2890A8u;
    // 0x2890a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2890a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890ac: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x2890ACu;
    SET_GPR_U32(ctx, 31, 0x2890B4u);
    ctx->pc = 0x2890B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2890ACu;
    // 0x2890b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x2890ACu, 0x2890B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890B4u;
label_2890b4:
    // 0x2890b4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2890b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2890b8: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x2890b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2890bc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2890bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2890c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2890c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2890c4: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2890c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2890c8: 0x242161c8  addiu       $at, $at, 0x61C8
    ctx->pc = 0x2890c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25032));
    // 0x2890cc: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x2890ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2890d0: 0xc0a1c7a  jal         func_2871E8
    ctx->pc = 0x2890D0u;
    SET_GPR_U32(ctx, 31, 0x2890D8u);
    ctx->pc = 0x2890D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2890D0u;
    // 0x2890d4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2871E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2871E8u, 0x2890D0u, 0x2890D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890D8u;
label_2890d8:
    // 0x2890d8: 0xdfb003f0  ld          $s0, 0x3F0($sp)
    ctx->pc = 0x2890d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
label_2890dc:
    // 0x2890dc: 0xdfb103f8  ld          $s1, 0x3F8($sp)
    ctx->pc = 0x2890dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1016)));
    // 0x2890e0: 0xdfb20400  ld          $s2, 0x400($sp)
    ctx->pc = 0x2890e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2890e4: 0xdfb30408  ld          $s3, 0x408($sp)
    ctx->pc = 0x2890e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x2890e8: 0xdfb40410  ld          $s4, 0x410($sp)
    ctx->pc = 0x2890e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2890ec: 0xdfb50418  ld          $s5, 0x418($sp)
    ctx->pc = 0x2890ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2890f0: 0xdfb60420  ld          $s6, 0x420($sp)
    ctx->pc = 0x2890f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2890f4: 0xdfb70428  ld          $s7, 0x428($sp)
    ctx->pc = 0x2890f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x2890f8: 0xdfbe0430  ld          $fp, 0x430($sp)
    ctx->pc = 0x2890f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2890fc: 0xdfbf0438  ld          $ra, 0x438($sp)
    ctx->pc = 0x2890fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x289100: 0x3e00008  jr          $ra
    ctx->pc = 0x289100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289100u;
        // 0x289104: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289108u;
}
